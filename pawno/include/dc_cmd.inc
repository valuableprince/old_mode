native DC_CMD(playerid, cmdtext[]);
native RegisterAlt(const command[], alt1[], ...);

#define CMD:%0(%1) \
			forward _%0(%1); \
			public _%0(%1)

#define COMMAND:%1(%2) \
			CMD:%1(%2)

#define DC_CMD:%1(%2) \
			CMD:%1(%2)

#define ALT:%0:%1; \
			forward _%1(playerid, params[]); \
			public _%1(playerid, params[]) \
				return _%0(playerid, params);

#if !defined isnull
	#define isnull(%1) \
				((!(%1[0])) || (((%1[0]) == '\1') && (!(%1[1]))))
#endif

public OnPlayerCommandText(playerid, cmdtext[]){
	if(pTemp[playerid][pOff] > 2)
	{
        SendClientMessage(playerid,CWHITE,"Использовать команды можно раз в 2 секунды");
		return 1;
	}
	if(pTemp[playerid][pDialog]) return SendClientMessage(playerid,CGRAY,"Нельзя использовать команды, пока открыт диалог");
	pTemp[playerid][pOff]++;
	if(!pTemp[playerid][pLogined]) return 1;
	if(!IsPlayerConnected(playerid)) return 1;
	return DC_CMD(playerid, cmdtext);
}

forward dc_cmd_OnPlayerCommandText(playerid, cmdtext[]);
#if defined _ALS_OnPlayerCommandText
    #undef OnPlayerCommandText
#else
    #define _ALS_OnPlayerCommandText
#endif
#define	OnPlayerCommandText dc_cmd_OnPlayerCommandText

forward OnPlayerCommandReceived(playerid, cmdtext[]);
forward OnPlayerCommandPerformed(playerid, cmdtext[], success);