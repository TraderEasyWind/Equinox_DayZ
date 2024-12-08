modded class PlayerBase
{
    override bool Consume(ItemBase source, float amount, EConsumeType consume_type)
    {
        PluginTransmissionAgents plugin = PluginTransmissionAgents.Cast(GetPlugin(PluginTransmissionAgents));
        int agents;
        int pollution = GetGame().GetMission().GetWorldData().GetPollution();
        float temperature = 0;
        
        if (consume_type == EConsumeType.ENVIRO_SNOW)
        {
            if (pollution & EPollution.HEAVYMETAL)
            {
                string worldname;
                GetGame().GetWorldName(worldname);
                worldname.ToLower();
                if ( worldname != "chernarus" )
                {
                    agents = agents | eAgents.HEAVYMETAL;
                }
                agents = agents | eAgents.CHOLERA;
            }
            temperature = GetGame().GetMission().GetWorldData().GetLiquidTypeEnviroTemperature(consume_type);
            m_PlayerStomach.AddToStomach(Liquid.GetLiquidClassname(LIQUID_WATER), amount, 0 , agents, temperature);
        }
        return super.Consume(source, amount, consume_type);
    }
}