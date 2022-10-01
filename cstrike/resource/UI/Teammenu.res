"Resource/UI/TeamMenu.res"
{
	"TeamMenu"
	{
		"ControlName"		"Frame"
		"fieldName"		"TeamMenu"
		"xpos"			"76"
		"ypos"			"0"
		"wide"			"552"
		"tall"			"448"
		"autoResize"		"0"
		"pinCorner"		"0"
		"visible"		"1"
		"enabled"		"1"
		"tabPosition"		"0"
	}
	"SysMenu"
	{
		"ControlName"		"Menu"
		"fieldName"		"SysMenu"
		"xpos"			"0"
		"ypos"			"0"
		"wide"			"64"
		"tall"			"24"
		"autoResize"		"0"
		"pinCorner"		"0"
		"visible"		"0"
		"enabled"		"0"
		"tabPosition"		"0"
	}
	"MapInfo"
	{
		"ControlName"		"HTML"
		"fieldName"		"MapInfo"
		"xpos"			"90"
		"ypos"			"310"
		"wide"			"400"
		"tall"			"115"
		"autoResize"		"3"
		"pinCorner"		"0"
		"visible"		"1"
		"enabled"		"1"
		"tabPosition"		"0"
	}
	"MapName"
	{
		"ControlName"		"Label"
		"fieldName"		"mapname"
		"xpos"			"90"
		"ypos"			"290"
		"wide"			"200"
		"tall"			"20"
		"autoResize"		"0"
		"pinCorner"		"0"
		"visible"		"1"
		"enabled"		"1"
		"labelText"		""
		"textAlignment"		"left"
		"font"			"Title"
		"dulltext"		"0"
		"brighttext"		"0"
	}
	"joinTeam"
	{
		"ControlName"		"Label"
		"fieldName"		"joinTeam"
		"xpos"			"0"
		"ypos"			"22"
		"wide"			"500"
		"tall"			"48"
		"autoResize"		"0"
		"pinCorner"		"0"
		"visible"		"1"
		"enabled"		"1"
		"tabPosition"		"0"
		"labelText"		"Select a Faction"
		"textAlignment"		"west"
		"dulltext"		"0"
		"brighttext"		"0"
		"font"			"Title"
		"wrap"			"0"
	}
	"terbutton"
	{
		"ControlName"		"Button"
		"fieldName"		"terbutton"
		"xpos"			"5"
		"ypos"			"116"
		"wide"			"148"
		"tall"			"20"
		"autoResize"		"0"
		"pinCorner"		"2"
		"visible"		"1"
		"enabled"		"1"
		"tabPosition"		"0"
		"labelText"		"#Cstrike_Terrorist_Forces"
		"textAlignment"		"west"
		"dulltext"		"0"
		"brighttext"		"0"
		"command"		"jointeam 1"
	}
	"ctbutton"
	{
		"ControlName"		"Button"
		"fieldName"		"ctbutton"
		"xpos"			"5"
		"ypos"			"148"
		"wide"			"148"
		"tall"			"20"
		"autoResize"		"0"
		"pinCorner"		"2"
		"visible"		"1"
		"enabled"		"1"
		"tabPosition"		"0"
		"labelText"		"#Cstrike_CT_Forces"
		"textAlignment"		"west"
		"dulltext"		"0"
		"brighttext"		"0"
		"command"		"jointeam 2"
	}
 	"ter-img"
	{
		"ControlName"		"ImagePanel"
		"fieldName"		"ter-img"
		"xpos"			"0"
		"ypos"			"80"
		"wide"			"245"
		"tall"			"190"
		"autoResize"		"1"
		"pinCorner"		"0"
		"visible"		"1"
		"enabled"		"1"
		"textAlignment"		"center"
		"image"			"gfx/vgui/teammenu/t"
		"scaleImage"		"1"
	}
	"ter-name"
	{
		"ControlName"		"Label"
		"fieldName"		"ter-name"
		"xpos"			"0"
		"ypos"			"270"
		"wide"			"245"
		"tall"			"12"
		"autoResize"		"0"
		"pinCorner"		"0"
		"visible"		"1"
		"enabled"		"1"
		"labelText"		"RESISTANCE"
		"textAlignment"		"center"
		"dulltext"		"0"
		"brighttext"		"1"
	}
	"ter-button"
	{
		"ControlName"		"Button"
		"fieldName"		"ter-button"
		"xpos"			"0"
		"ypos"			"80"
		"wide"			"245"
		"tall"			"206"
		"autoResize"		"0"
		"pinCorner"		"2"
		"visible"		"1"
		"enabled"		"1"
		"tabPosition"		"2"
		"labelText"		""
		"command"		"jointeam 1"
	}
	"ct-img"
	{
		"ControlName"		"ImagePanel"
		"fieldName"		"ct-img"
		"xpos"			"245"
		"ypos"			"80"
		"wide"			"245"
		"tall"			"190"
		"autoResize"		"1"
		"pinCorner"		"0"
		"visible"		"1"
		"enabled"		"1"
		"textAlignment"		"center"
		"image"			"gfx/vgui/teammenu/ct"
		"scaleImage"		"1"
	}
	"ct-name"
	{
		"ControlName"		"Label"
		"fieldName"		"ct-name"
		"xpos"			"245"
		"ypos"			"270"
		"wide"			"245"
		"tall"			"12"
		"autoResize"		"0"
		"pinCorner"		"0"
		"visible"		"1"
		"enabled"		"1"
		"labelText"		"INTERVENTION"
		"textAlignment"		"center"
		"dulltext"		"0"
		"brighttext"		"0"
	}
	"ct-button"
	{
		"ControlName"		"Button"
		"fieldName"		"ct-button"
		"xpos"			"245"
		"ypos"			"80"
		"wide"			"245"
		"tall"			"206"
		"autoResize"		"0"
		"pinCorner"		"2"
		"visible"		"1"
		"enabled"		"1"
		"tabPosition"		"3"
		"labelText"		""
		"command"		"jointeam 2"
	}
	"auto-img"
	{
		"ControlName"		"ImagePanel"
		"fieldName"		"auto-img"
		"xpos"			"0"
		"ypos"			"295"
		"wide"			"76"
		"tall"			"50"
		"autoResize"		"3"
		"pinCorner"		"0"
		"visible"		"1"
		"enabled"		"1"
		"textAlignment"		"center"
		"image"			"gfx/vgui/teammenu/auto"
		"scaleImage"		"1"
	}
	"auto-name"
	{
		"ControlName"		"Button"
		"fieldName"		"auto-name"
		"xpos"			"0"
		"ypos"			"345"
		"wide"			"76"
		"tall"			"15"
		"autoResize"		"0"
		"pinCorner"		"0"
		"visible"		"1"
		"enabled"		"1"
		"tabPosition"		"1"
		"labelText"		"&5 Auto Assign"
		"textAlignment"		"center"
		"dulltext"		"1"
		"brighttext"		"0"
		"command"		"jointeam 5"
	}
	"auto-button"
	{
		"ControlName"		"Button"
		"fieldName"		"auto-button"
		"xpos"			"0"
		"ypos"			"295"
		"wide"			"76"
		"tall"			"50"
		"autoResize"		"3"
		"pinCorner"		"2"
		"visible"		"1"
		"enabled"		"1"
		"tabPosition"		"0"
		"labelText"		""
		"command"		"jointeam 5"
	}
        "spec-img"
	{
		"ControlName"		"ImagePanel"
		"fieldName"		"spec-img"
		"xpos"			"0"
		"ypos"			"360"
		"wide"			"76"
		"tall"			"50"
		"autoResize"		"1"
		"pinCorner"		"0"
		"visible"		"1"
		"enabled"		"1"
		"textAlignment"		"center"
		"image"			"gfx/vgui/teammenu/spec"
		"scaleImage"		"1"
	}
	"spec-name"
	{
		"ControlName"		"Button"
		"fieldName"		"auto-name"
		"xpos"			"0"
		"ypos"			"410"
		"wide"			"76"
		"tall"			"15"
		"autoResize"		"0"
		"pinCorner"		"0"
		"visible"		"1"
		"enabled"		"1"
		"tabPosition"		"4"
		"labelText"		"&6 Spectator"
		"textAlignment"		"center"
		"dulltext"		"1"
		"brighttext"		"0"
		"command"		"jointeam 6"
	}
	"spec-button"
	{
		"ControlName"		"Button"
		"fieldName"		"spec-button"
		"xpos"			"0"
		"ypos"			"360"
		"wide"			"76"
		"tall"			"50"
		"autoResize"		"0"
		"pinCorner"		"2"
		"visible"		"1"
		"enabled"		"1"
		"tabPosition"		"0"
		"labelText"		""
		"command"		"jointeam 6"
	}
	"CancelButton"
	{
		"ControlName"		"Button"
		"fieldName"		"CancelButton"
		"xpos"			"0"
		"ypos"			"428"
		"wide"			"76"
		"tall"			"15"
		"autoResize"		"0"
		"pinCorner"		"2"
		"visible"		"1"
		"enabled"		"1"
		"tabPosition"		"5"
		"labelText"		"#Cstrike_Cancel"
		"textAlignment"		"center"
		"dulltext"		"0"
		"brighttext"		"0"
		"Command"		"vguicancel"
		"Default"		"1"
	}
}