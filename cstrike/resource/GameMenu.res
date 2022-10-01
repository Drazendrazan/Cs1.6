"GameMenu"
{
	"0"
	{
		"label"
		"Resume Game"
		"command"
		"ResumeGame"
		"OnlyInGame"
		"1"
	}
	"1"
	{
		"label"
		"Disconnect"
		"command"
		"engine room_type 0; exec maxsettings.cfg; clear; disconnect"
		"OnlyInGame"
		"1"
		"notsingle"
		"1"
	}
	"2"
	{
		"label"
		"Change map"
		"command"
		"OpenCreateMultiplayerGameDialog"
		"OnlyInGame"
		"1"
	}
	"3"
	{
		"label"
		""
		"command"
		"" 
		"OnlyInGame"
		"1"
	}
	"4"
	{
		"label"
		"GAME MODES"
		"command"
		""
		"OnlyInGame"
		"1"
	}
	"5"
	{
		"label"
		"- Reinforcement"
		"command"
		"engine exec gamemode2.cfg"
		"OnlyInGame"
		"1"
	}
	"6"
	{
		"label"
		"- Team Deathmatch"
		"command"
		"engine exec gamemode1.cfg"
		"OnlyInGame"
		"1"
	}
	"7"
	{
		"label"
		"- Classic Mode"
		"command"
		"engine exec gamemode0.cfg" 
		"OnlyInGame"
		"1"
	}
	"8"
	{
		"label"
		""
		"command"
		"" 
		"OnlyInGame"
		"1"
	}
	"9"
	{
		"label"
		"START"
		"command"
		"OpenCreateMultiplayerGameDialog"
		"notmulti"
		"1"
	}
	"10"
	{
		"label"
		"SERVERS"
		"command"
		"OpenServerBrowser"
		"notmulti"
		"1"
	}
	"11"
	{
		"label"
		"SETTINGS"
		"command"
		"OpenOptionsDialog"
	}
	"12"
	{
		"label"
		"- Max Settings"
		"command"
		"engine exec maxsettings.cfg"
		"OnlyInGame"
		"1"
	}
	"13"
	{
		"label"
		"- Safemode"
		"command"
		"engine exec minsettings.cfg"
		"OnlyInGame"
		"1"
	}
	"14"
	{
		"label"
		"CREDITS"
		"command"
		"engine exec credits.cfg"
		"notmulti"
		"1"
	}
	"15"
	{
		"label"
		"EXIT"
		"command"
		"Quit"
	}
}