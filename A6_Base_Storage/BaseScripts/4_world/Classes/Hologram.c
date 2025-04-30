modded class Hologram {
	override void UpdateHologram( float timeslice ) {
		super.UpdateHologram(timeslice);
		ItemBase container = m_Parent;
		if(container) {
			vector containerPos = GetProjectionEntityPosition( m_Player ) + container.Get_ItemPlacingPos();
			vector containerOrientation = AlignProjectionOnTerrain( timeslice ) + container.Get_ItemPlacingOrientation();
			SetProjectionPosition( containerPos );
			SetProjectionOrientation( containerOrientation );		
			m_Projection.OnHologramBeingPlaced( m_Player );
			return;
		}
	}

	override string GetProjectionName(ItemBase item) {
		A6_Kit item_in_hands = A6_Kit.Cast( item );
		if ( item_in_hands ) {
			return item_in_hands.Get_ItemName();
		}	
		return super.GetProjectionName(item);
	}

	override void EvaluateCollision(ItemBase action_item = null) {			
		ItemBase item_in_hands = m_Parent;
		if (item_in_hands.IsInherited(A6_Kit) || item_in_hands.IsInherited(A6_Storage_Base)) {
			SetIsColliding(false);
			return;
		}
		super.EvaluateCollision();
	}

	override void RefreshVisual() {
		if ( m_Projection && m_Projection.IsKindOf("A6_Storage_Base") ) {
			string config_material = "CfgVehicles" + " " + m_Projection.GetType() + " " + "hologramMaterial";
			string hologram_material = GetGame().ConfigGetTextOut( config_material );
			string config_model = "CfgVehicles" + " " + m_Projection.GetType() + " " + "hologramMaterialPath";
			string hologram_material_path = GetGame().ConfigGetTextOut( config_model ) + "\\" + hologram_material;
			string selection_to_refresh;
			int hidden_selection = 0;
			string textureName = "";
			textureName = string.Format("#(argb,8,8,3)color(%1,%2,%3,0.5,ca)",GetA6BaseStorageConfig().HologramColor_R,GetA6BaseStorageConfig().HologramColor_G,GetA6BaseStorageConfig().HologramColor_B);
			
			string config_path = "CfgVehicles" + " " + m_Projection.GetType() + " " + "hiddenSelections";
			array<string> hidden_selection_array = new array<string>;

			GetGame().ConfigGetTextArray( config_path, hidden_selection_array );	
			hologram_material_path += CorrectMaterialPathName();
				
			for (int i = 0; i < hidden_selection_array.Count(); ++i) {
				selection_to_refresh = hidden_selection_array.Get(i);
				hidden_selection = GetHiddenSelection( selection_to_refresh );
				m_Projection.SetObjectTexture( hidden_selection, textureName );
				m_Projection.SetObjectMaterial( hidden_selection, hologram_material_path );
			}
		} else {
			super.RefreshVisual();
		}
	}

	override bool IsFloating() {
		if (m_Parent.IsInherited(A6_Kit) || m_Parent.IsInherited(A6_Storage_Base) ) {
			return true;
		}
		return super.IsFloating();
	}

	override void SetProjectionPosition( vector position ) {	
		if (m_Parent.IsInherited(A6_Kit) || m_Parent.IsInherited(A6_Storage_Base) && IsFloating()) { 
			vector itemPos = SetOnGroundOld( position ) + m_Parent.Get_ItemPlacingPos();
			m_Projection.SetPosition( itemPos );
			return;
		}
		super.SetProjectionPosition(position);
	}

	vector SetOnGroundOld( vector position ) {
		vector from = position;
		vector ground;
		vector player_to_projection_vector;
		float projection_diameter = GetProjectionDiameter();
		ground = Vector(0, - Math.Max( projection_diameter, SMALL_PROJECTION_GROUND ), 0);	
		vector to = from + ground;
		vector contact_pos;
		int contact_component;
		DayZPhysics.RaycastRV( from, to, contact_pos, m_ContactDir, contact_component, NULL, NULL, m_Projection, false, false );
		HideWhenClose( contact_pos );
		return contact_pos;
	}

	override protected vector GetProjectionEntityPosition( PlayerBase player ) {
		float min_projection_dist;
		float max_projection_dist; 
		m_ContactDir = vector.Zero;
		vector min_max[2];
		float projection_radius = GetProjectionRadius();
		float camera_to_player_distance = vector.Distance( GetGame().GetCurrentCameraPosition(), player.GetPosition() );
		if (projection_radius < SMALL_PROJECTION_RADIUS) {
			min_projection_dist = SMALL_PROJECTION_RADIUS;
			max_projection_dist = SMALL_PROJECTION_RADIUS * 2;
		} else {
			min_projection_dist = projection_radius;
			max_projection_dist = projection_radius * 2;
			max_projection_dist = Math.Clamp(max_projection_dist, SMALL_PROJECTION_RADIUS, LARGE_PROJECTION_DISTANCE_LIMIT);
		}
		vector from = GetGame().GetCurrentCameraPosition();
		if ( DayZPlayerCamera3rdPerson.Cast(player.GetCurrentCamera()) ) {
			vector head_pos;
			MiscGameplayFunctions.GetHeadBonePos(player,head_pos);
			float dist = vector.Distance(head_pos,from);
			from = from + GetGame().GetCurrentCameraDirection() * dist;
		}
		vector to = from + ( GetGame().GetCurrentCameraDirection() * ( max_projection_dist + camera_to_player_distance ) );
		vector contact_pos;
		set<Object> hit_object = new set<Object>;
		DayZPhysics.RaycastRV(from, to, contact_pos, m_ContactDir, m_ContactComponent, hit_object, player, m_Projection, false, false, ObjIntersectFire);
		static const float raycastOriginOffsetOnFail = 0.25;
		static const float minDistFromStart = 0.01;
		if ((hit_object.Count() > 0) && (vector.DistanceSq(from, contact_pos) < minDistFromStart)) {
			from = contact_pos + GetGame().GetCurrentCameraDirection() * raycastOriginOffsetOnFail;
			DayZPhysics.RaycastRV( from, to, contact_pos, m_ContactDir, m_ContactComponent, hit_object, player, m_Projection, false, false, ObjIntersectFire );
		}
		if ((hit_object.Count() > 0) && hit_object[0].IsInherited(Watchtower))
			contact_pos = CorrectForWatchtower( m_ContactComponent, contact_pos, player, hit_object[0] );
		float player_to_projection_distance = vector.Distance( player.GetPosition(), contact_pos );
		vector player_to_projection_vector;
		if ( player_to_projection_distance <= min_projection_dist ) {
			player_to_projection_vector = contact_pos - player.GetPosition();
			player_to_projection_vector.Normalize();
			player_to_projection_vector[1] = player_to_projection_vector[1] + PROJECTION_TRANSITION_MIN;
			contact_pos = player.GetPosition() + (player_to_projection_vector * min_projection_dist);
			SetIsFloating(true);
		} else if ( player_to_projection_distance >= max_projection_dist ) {
			player_to_projection_vector = contact_pos - player.GetPosition();
			player_to_projection_vector.Normalize();
			player_to_projection_vector[1] = player_to_projection_vector[1] + PROJECTION_TRANSITION_MAX;
			contact_pos = player.GetPosition() + (player_to_projection_vector * max_projection_dist);
			SetIsFloating(true);
		} else {
			SetIsFloating(false);
		}
		m_FromAdjusted = from;
		#ifdef DEVELOPER
		DrawDebugArrow(min_projection_dist, max_projection_dist);
		if (DiagMenu.GetBool(DiagMenuIDs.DM_HOLOGRAM))
		{
			Debug.DrawSphere(GetProjectionPosition(), 0.1, 0x99FF0000, ShapeFlags.ONCE|ShapeFlags.TRANSP|ShapeFlags.NOOUTLINE);
		}
		#endif
		return contact_pos;
	}
}