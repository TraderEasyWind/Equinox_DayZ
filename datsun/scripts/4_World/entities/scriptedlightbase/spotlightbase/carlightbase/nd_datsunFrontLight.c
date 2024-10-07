class nd_datsunFrontLight extends CarLightBase
{
	void nd_datsunFrontLight()
	{
		m_SegregatedBrightness = 10;
		m_SegregatedRadius = 180;
		m_SegregatedAngle = 110;
		m_SegregatedColorRGB = Vector(1.0, 0.8, 0.4);
		
		m_AggregatedBrightness = 20;
		m_AggregatedRadius = 200;
		m_AggregatedAngle = 120;
		m_AggregatedColorRGB = Vector(1.0, 0.8, 0.4);
		
		FadeIn(0.3);
		SetFadeOutTime(0.25);
		
		SegregateLight();
	}
}