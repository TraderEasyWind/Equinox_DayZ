modded class Weapon_Base
{
	float m_IWL_Offset = 0.4;//fixed distance from the shoulder, for proper raycast start

	override bool LiftWeaponCheck(PlayerBase player)
	{
		int idx;
		float distance;
		float hit_fraction;
		vector start, end;
		vector direction;
		vector hit_pos, hit_normal;
		Object obj;

		bool wasLift = m_LiftWeapon;
		vector lastLiftPosition = m_LastLiftPosition;

		m_LiftWeapon = false;
		// not a gun, no weap.raise for now
		if (HasSelection("Usti hlavne"))
			return false;

		if (!player)
		{
			Print("Error: No weapon owner, returning");
			return false;
		}

		// weapon not raised
		HumanMovementState movementState = new HumanMovementState();
		player.GetMovementState(movementState);
		if (!movementState.IsRaised())
			return false;

		// suppress raising of weapon during melee attack preventing state inconsistency
		if (movementState.m_CommandTypeId == DayZPlayerConstants.COMMANDID_MELEE || movementState.m_CommandTypeId == DayZPlayerConstants.COMMANDID_MELEE2)
		{
			return false;
		}


		// If possible use aiming angles instead as these will work consistently
		// and independently of any cameras, etc. 
		HumanCommandWeapons hcw = player.GetCommandModifier_Weapons();
		if (hcw)
		{
			vector yawPitchRoll = Vector(
				hcw.GetBaseAimingAngleLR() + player.GetOrientation()[0],
				hcw.GetBaseAimingAngleUD(),
				0.0);

			float xAimHandsOffset = hcw.GetAimingHandsOffsetLR();
			float yAimHandsOffset = hcw.GetAimingHandsOffsetUD();

			yawPitchRoll[0] = yawPitchRoll[0] + xAimHandsOffset;
			yawPitchRoll[1] = Math.Clamp(yawPitchRoll[1] + yAimHandsOffset, DayZPlayerCamera1stPerson.CONST_UD_MIN, DayZPlayerCamera1stPerson.CONST_UD_MAX);

			direction = yawPitchRoll.AnglesToVector();
		}
		else // Fallback to previously implemented logic
		{
			// freelook raycast
			if (player.GetInputController().CameraIsFreeLook())
			{
				if (player.m_DirectionToCursor != vector.Zero)
				{
					direction = player.m_DirectionToCursor;
				}
				// if player raises weapon in freelook
				else
				{
					direction = MiscGameplayFunctions.GetHeadingVector(player);
				}
			}
			else
			{
				direction = GetGame().GetCurrentCameraDirection(); // exception for freelook. Much better this way!
			}
		}

		idx = player.GetBoneIndexByName("Neck"); //RightHandIndex1
		if (idx == -1)
		{
			start = player.GetPosition()[1] + 1.5;
		}
		else
		{
			start = player.GetBonePositionWS(idx);
		}


		// Updated weapon lift detection code prototype
		{
			// 0: construct stable trasformation matrix that
			// approximately aligns with the weapon transform
			// without actually using the weapon as reference
			// (as the weapon can be moved unpredictably by anims)
			vector resTM[4];
			resTM[0] = Vector(direction[0], 0, direction[2]).Normalized();
			resTM[0] = vector.RotateAroundZeroDeg(resTM[0], vector.Up, 90);
			resTM[2] = direction;
			resTM[1] = resTM[2] * resTM[0];
			resTM[3] = start;

			// Approximate the roll of leaning
			HumanMovementState hms = new HumanMovementState();
			player.GetMovementState(hms);
			float leanAngle = hms.m_fLeaning * 35;
			vector rotTM[3];
			Math3D.YawPitchRollMatrix(Vector(xAimHandsOffset, yAimHandsOffset, leanAngle), rotTM);
			Math3D.MatrixMultiply3(resTM, rotTM, resTM);

			// Draw relative TM diagnostic
#ifdef DIAG_DEVELOPER
			if (DiagMenu.GetValue(DiagMenuIDs.WEAPON_LIFT_DEBUG))
			{
				Shape.CreateArrow(resTM[3], resTM[3] + resTM[0], 0.05, COLOR_RED, ShapeFlags.ONCE);
				Shape.CreateArrow(resTM[3], resTM[3] + resTM[1], 0.05, COLOR_GREEN, ShapeFlags.ONCE);
				Shape.CreateArrow(resTM[3], resTM[3] + resTM[2], 0.05, COLOR_BLUE, ShapeFlags.ONCE);
			}
#endif

			// 1: pick from predefined offset relative to
			// the previously constructed transform 
			float udAngle = Math.Asin(direction[1]) * Math.RAD2DEG;

			// offsets are [right, up, forward]
			// values are based on what felt right after iterating
			vector offsets[] =
			{
				"0.11 0.17 0.0",  // offset while aiming down
				"0.12 0.05 0.0", // offset while aiming forward
				"0.112 0.03 0.0" // offset while aiming up
			};
			const int lastIndex = 2; // length of offsets - 1

			// <0,1> range of aiming
			float a = Math.Clamp(Math.InverseLerp(DayZPlayerCamera1stPerson.CONST_UD_MIN, DayZPlayerCamera1stPerson.CONST_UD_MAX, udAngle), 0, 0.9999);
			int lo = a * lastIndex;
			int hi = Math.Clamp(lo + 1, 0, lastIndex);

			// remap to current lo-hi range
			float t = Math.Clamp(a * lastIndex - lo, 0, 1);
			vector offset = vector.Lerp(offsets[lo], offsets[hi], t);

			// offsets are [right, up forward]
			// additional offsets added to previous offsets per stance
			vector stanceOffsets[] =
			{
				"0 -0.015 0",	// erect
				"0 0.03 0",	// crouch
				"0 -0.04 0",// prone
			};

			// 2. pick from predefined offsets based on stance,
			// allows to even further approximate the alignment
			int stanceOffsetIndex = hms.m_iStanceIdx;
			if (stanceOffsetIndex >= DayZPlayerConstants.STANCEIDX_PRONE)
				stanceOffsetIndex -= DayZPlayerConstants.STANCEIDX_RAISED;

			stanceOffsetIndex -= DayZPlayerConstants.STANCEIDX_ERECT;
			offset += stanceOffsets[stanceOffsetIndex];

			// if any additional height offset is defined, apply it
			if (m_WeaponLiftCheckVerticalOffset != 0)
			{
				offset[1] = offset[1] + m_WeaponLiftCheckVerticalOffset;
			}

			// 
			offset = offset.InvMultiply3(rotTM);

			// 3. use the offset as the start position.
			// it will not be perfect, but it should reflect
			// the actual weapon transform more accurately
			start = offset.Multiply4(resTM);
		}


		distance = m_WeaponLength + GetEffectiveAttachmentLength();

		vector weaponStart = start + (m_ShoulderDistance * direction);
		vector weaponStartCorrected = start + (m_IWL_Offset * direction);//Corrected position to start raycast
		vector weaponEnd = weaponStart + (distance * direction);

		// Draw diagnostics: Script -> Weapon -> Weapon Lift
#ifdef DIAG_DEVELOPER
		if (DiagMenu.GetValue(DiagMenuIDs.WEAPON_LIFT_DEBUG))
		{
			vector diagNoAttachEnd = weaponStart + (m_WeaponLength * direction);
			int diagPtsShpFlgs = ShapeFlags.ONCE | ShapeFlags.NOOUTLINE;
			float diagPtsRadius = 0.025;
			Shape.CreateSphere(COLOR_GREEN, diagPtsShpFlgs, weaponStart, diagPtsRadius);
			Shape.CreateSphere(COLOR_YELLOW, diagPtsShpFlgs, diagNoAttachEnd, diagPtsRadius);
			Shape.CreateSphere(COLOR_BLUE, diagPtsShpFlgs, weaponEnd, diagPtsRadius);
			Shape.CreateSphere(COLOR_RED, diagPtsShpFlgs, weaponStartCorrected, diagPtsRadius);//Additional sphere for debug
		}
#endif

		// For the physical cast, extend the distance by x%
		// to allow for smoother transition handling in some cases
		end = weaponEnd + ((0.1 * distance) * direction);

		// Prepare raycast params and perform the cast in fire geo
		RaycastRVParams rayParm = new RaycastRVParams(weaponStartCorrected, end, player, 0.02);//RaycastRVParams rayParm = new RaycastRVParams(start, end, player, 0.02);
		rayParm.flags = CollisionFlags.ALLOBJECTS;
		rayParm.type = ObjIntersect.Fire;

#ifdef DIAG_DEVELOPER
		DbgUI.BeginCleanupScope();
#endif
		array<ref RaycastRVResult> results = {};
		if (!DayZPhysics.RaycastRVProxy(rayParm, results) || results.Count() == 0)
		{
			hit_pos = vector.Zero;
			hit_fraction = 0;
		}
		else
		{
			RaycastRVResult res = results[0];

#ifdef DIAG_DEVELOPER	// isect diag
			if (DiagMenu.GetValue(DiagMenuIDs.WEAPON_LIFT_DEBUG) == 2)
			{
				DbgUI.Begin("Weapon Lift Diag");
				{
					if (res.surface)
					{
						DbgUI.Text("Intersection data:");
						DbgUI.Text("  Name: " + res.surface.GetName());
						DbgUI.Text("  EntryName: " + res.surface.GetEntryName());
						DbgUI.Text("  SurfaceType: " + res.surface.GetSurfaceType());

						DbgUI.Text("  IsPassThrough: " + res.surface.IsPassthrough());
						DbgUI.Text("  IsSolid: " + res.surface.IsSolid());
					}
					else
					{
						DbgUI.Text("Intersection with no surface");
					}
				}
				DbgUI.End();
			}
#endif	// !isect diag

			if (LiftWeaponRaycastResultCheck(res))
			{
				hit_pos = res.pos;
				float len0 = (hit_pos - start).Length();
				float len1 = (end - start).Length();
				if (len0 <= 0 || len1 <= 0)
				{
					hit_fraction = 1;
				}
				else
				{
					hit_fraction = len0 / len1;
				}
			}
			else
			{
				hit_pos = vector.Zero;
				hit_fraction = 0;
			}
		}
#ifdef DIAG_DEVELOPER
		DbgUI.EndCleanupScope();
#endif

		// Draw diagnostics: Script -> Weapon -> Weapon Lift
#ifdef DIAG_DEVELOPER
		if (DiagMenu.GetValue(DiagMenuIDs.WEAPON_LIFT_DEBUG))
		{
			const vector epsilon = "0 0.0002 0"; // to overcome excessive z-fighting for diag
			if (lastLiftPosition != vector.Zero)
			{
				Shape.CreateArrow(start - epsilon, lastLiftPosition - epsilon, 0.05, COLOR_YELLOW, ShapeFlags.ONCE);
			}

			Shape.CreateArrow(start, weaponEnd, 0.05, COLOR_WHITE, ShapeFlags.ONCE | ShapeFlags.NOZBUFFER);

			if (hit_fraction != 0)
			{
				Shape.CreateArrow(start + epsilon, hit_pos + epsilon, 0.05, COLOR_RED, ShapeFlags.ONCE);
			}
		}
#endif

		// Start by assuming that we want to retain state
		bool wantsLift = wasLift;

		// Sq. distance of weapon movement required to trigger lift (in)
		const float inThreshold = 0.002;
		// Sq. distance of weapon movement required to trigger lift (out)
		const float outThreshold = 0.003;
		const float noIsctOutThreshold = 0.01;
		// Max num of ticks with no hit for which hysteresis will persist
		// value chosen by iteration, should be approx 0.333s 
		const int maxNumMissedTicks = 10;

		// Min angle in degrees change from last lift to stop lifting
		// Base threshold of 0.75 degrees + 0.6 degrees per meter of weapon length
		float angleThreshold = 0.75 + Math.Clamp(m_WeaponLength * 0.6, 0, 1.5);

		// Update state when a hit is registered
		if (hit_fraction != 0)
		{
			vector v1 = hit_pos - weaponEnd;
			vector v2 = hit_pos - end;
			float d = vector.Dot(v1, v2);
			// But leave some threshold where previous state is kept
			// to prevent excessive switches from occuring
			if (!wasLift && d > inThreshold)
			{
				wantsLift = true;
			}
			else if (wasLift && d < -outThreshold)
			{
				wantsLift = false;
			}

			m_LastLiftPosition = hit_pos;
			m_LastLiftHit = player.GetSimulationTimeStamp();
		}
		else
		{
			// With no hit and no previous lift
			if (lastLiftPosition == vector.Zero)
			{
				wantsLift = false;
				m_LastLiftPosition = vector.Zero;
			}
			// See if previous hit wasn't very close to our current position,
			// in which case simply don't lift the weapon
			else
			{
				vector v3 = (lastLiftPosition - start).Normalized();
				vector v4 = (end - start).Normalized();
				float d2 = vector.Dot(v3, v4);
				// no isect, angle delta check
				if (Math.Acos(d2) > (angleThreshold * Math.DEG2RAD)) // if relative angle is > x degree, stop lifting
				{
					wantsLift = false;
					m_LastLiftPosition = vector.Zero;
				}
				// no isect, distance check
				else
				{
					float d3 = vector.Dot(lastLiftPosition - weaponEnd, (start - end).Normalized());
					if (d3 < -noIsctOutThreshold)
					{
						wantsLift = false;
						m_LastLiftPosition = vector.Zero;
					}

					// fallback in case offending object disappears or moves
					int timeSinceHit = player.GetSimulationTimeStamp() - m_LastLiftHit;
					if (timeSinceHit > maxNumMissedTicks)
					{
						wantsLift = false;
						m_LastLiftPosition = vector.Zero;
					}
				}
			}
		}

		// lift is desired
		if (wantsLift)
		{
			//Print(distance);
			m_LiftWeapon = true;
			return true;
		}
		return false;

		super.LiftWeaponCheck(player);//This way it will always be on top of other modifications
	}
};