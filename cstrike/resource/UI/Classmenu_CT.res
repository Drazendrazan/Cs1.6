// File was generated using CS 1.6 Resource UI Themer
// Created by Meowth ('https://gamebanana.com/members/1454821')

"Resource/UI/ClassMenu_CT.res"
{
	"ClassMenu"
	{
		"ControlName"		"Frame"
		"fieldName"		"ClassMenu"
		"xpos"			"76"
		"ypos"			"0"
		"wide"			"552"
		"tall"			"448"
		"enabled"		"1"
		"visible"		"1"
		"autoResize"		"0"
		"pinCorner"		"0"
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
		"enabled"		"0"
		"visible"		"0"
		"autoResize"		"0"
		"pinCorner"		"0"
		"tabPosition"		"0"
	}

	"joinClass"
	{
		"ControlName"		"Label"
		"fieldName"		"joinClass"
		"xpos"			"0"
		"ypos"			"22"
		"wide"			"500"
		"tall"			"48"
		"enabled"		"1"
		"visible"		"1"
		"labelText"		"#Cstrike_Join_Class"
		"font"			"Title"
		"textAlignment"		"west"
		"autoResize"		"0"
		"pinCorner"		"0"
		"tabPosition"		"0"
		"dulltext"		"0"
		"brighttext"		"0"
		"wrap"			"0"
	}

	"gsg9"
	{
		"ControlName"		"MouseOverPanelButton"
		"fieldName"		"gsg9"
		"xpos"			"10"
		"ypos"			"115"
		"wide"			"20"
		"tall"			"20"
		"enabled"		"1"
		"visible"		"1"
		"labelText"		"&1 RIFLEMAN"
		"command"		"joinclass 2;hs_joinclass 1"
		"textAlignment"		"west"
		"font"			"Verdana"
		"paintbackground"	"1"
		"autoResize"		"0"
		"pinCorner"		"2"
		"tabPosition"		"0"
		"dulltext"		"0"
		"brighttext"		"0"
	}

	"gign"
	{
		"ControlName"		"MouseOverPanelButton"
		"fieldName"		"gign"
		"xpos"			"10"
		"ypos"			"148"
		"wide"			"20"
		"tall"			"20"
		"enabled"		"1"
		"visible"		"1"
		"labelText"		"&2 MEDIC"
		"command"		"joinclass 4;hs_joinclass 2"
		"textAlignment"		"west"
		"font"			"Verdana"
		"paintbackground"	"1"
		"autoResize"		"0"
		"pinCorner"		"2"
		"tabPosition"		"0"
		"dulltext"		"0"
		"brighttext"		"0"
	}

	"sas"
	{
		"ControlName"		"MouseOverPanelButton"
		"fieldName"		"sas"
		"xpos"			"10"
		"ypos"			"180"
		"wide"			"20"
		"tall"			"20"
		"enabled"		"1"
		"visible"		"1"
		"labelText"		"&3 MARKSMAN"
		"command"		"joinclass 3;hs_joinclass 3"
		"textAlignment"		"west"
		"font"			"Verdana"
		"paintbackground"	"1"
		"autoResize"		"0"
		"pinCorner"		"2"
		"tabPosition"		"0"
		"dulltext"		"0"
		"brighttext"		"0"
	}

	"urban"
	{
		"ControlName"		"MouseOverPanelButton"
		"fieldName"		"urban"
		"xpos"			"10"
		"ypos"			"212"
		"wide"			"20"
		"tall"			"20"
		"enabled"		"1"
		"visible"		"1"
		"labelText"		"&4 SUPPORT"
		"command"		"joinclass 1;hs_joinclass 4"
		"textAlignment"		"west"
		"font"			"Verdana"
		"paintbackground"	"1"
		"autoResize"		"0"
		"pinCorner"		"2"
		"tabPosition"		"0"
		"dulltext"		"0"
		"brighttext"		"0"
	}

	"rifleman1"
	{
		"ControlName"		"ImagePanel"
		"fieldName"		"rifleman1"
		"xpos"			"0"
		"ypos"			"88"
		"wide"			"105"
		"tall"			"164"
		"enabled"		"1"
		"visible"		"1"
		"image"			"gfx/vgui/roles/rifleman1-inv"
		"scaleimage"		"1"
	}

	"rifleman2"
	{
		"ControlName"		"ImagePanel"
		"fieldName"		"rifleman2"
		"xpos"			"0"
		"ypos"			"252"
		"wide"			"105"
		"tall"			"164"
		"enabled"		"1"
		"visible"		"1"
		"image"			"gfx/vgui/roles/rifleman2-inv"
		"scaleimage"		"1"
	}

	"medic1"
	{
		"ControlName"		"ImagePanel"
		"fieldName"		"medic1"
		"xpos"			"130"
		"ypos"			"88"
		"wide"			"105"
		"tall"			"164"
		"enabled"		"1"
		"visible"		"1"
		"image"			"gfx/vgui/roles/medic1-inv"
		"scaleimage"		"1"
	}
	"medic2"
	{
		"ControlName"		"ImagePanel"
		"fieldName"		"medic2"
		"xpos"			"130"
		"ypos"			"252"
		"wide"			"105"
		"tall"			"164"
		"enabled"		"1"
		"visible"		"1"
		"image"			"gfx/vgui/roles/medic2-inv"
		"scaleimage"		"1"
	}

	"marksman1"
	{
		"ControlName"		"ImagePanel"
		"fieldName"		"marksman1"
		"xpos"			"261"
		"ypos"			"88"
		"wide"			"105"
		"tall"			"164"
		"enabled"		"1"
		"visible"		"1"
		"image"			"gfx/vgui/roles/marksman1-inv"
		"scaleimage"		"1"
	}
	"marksman2"
	{
		"ControlName"		"ImagePanel"
		"fieldName"		"marksman2"
		"xpos"			"261"
		"ypos"			"252"
		"wide"			"105"
		"tall"			"164"
		"enabled"		"1"
		"visible"		"1"
		"image"			"gfx/vgui/roles/marksman2-inv"
		"scaleimage"		"1"
	}

	"support1"
	{
		"ControlName"		"ImagePanel"
		"fieldName"		"support1"
		"xpos"			"392"
		"ypos"			"88"
		"wide"			"105"
		"tall"			"164"
		"enabled"		"1"
		"visible"		"1"
		"image"			"gfx/vgui/roles/support1-inv"
		"scaleimage"		"1"
	}
	"support2"
	{
		"ControlName"		"ImagePanel"
		"fieldName"		"support2"
		"xpos"			"392"
		"ypos"			"252"
		"wide"			"105"
		"tall"			"164"
		"enabled"		"1"
		"visible"		"1"
		"image"			"gfx/vgui/roles/support2-inv"
		"scaleimage"		"1"
	}

	"btn-rifleman"
	{
		"ControlName"		"Button"
		"fieldName"		"btn-rifleman"
		"xpos"			"0"
		"ypos"			"88"
		"wide"			"105"
		"tall"			"328"
		"autoResize"		"0"
		"pinCorner"		"0"
		"visible"		"1"
		"enabled"		"1"
		"tabPosition"		"0"
		"labelText"		""
		"command"		"joinclass 2;hs_joinclass 1"
	}

	"btn-medic"
	{
		"ControlName"		"MouseOverPanelButton"
		"fieldName"		"gign"
		"xpos"			"130"
		"ypos"			"88"
		"wide"			"105"
		"tall"			"328"
		"enabled"		"1"
		"visible"		"1"
		"labelText"		""
		"command"		"joinclass 4;hs_joinclass 2"
		"textAlignment"		"west"
		"font"			"Verdana"
		"paintbackground"	"1"
		"autoResize"		"0"
		"pinCorner"		"2"
		"tabPosition"		"0"
		"dulltext"		"0"
		"brighttext"		"0"
	}

	"btn-marksman"
	{
		"ControlName"		"MouseOverPanelButton"
		"fieldName"		"sas"
		"xpos"			"261"
		"ypos"			"88"
		"wide"			"105"
		"tall"			"328"
		"enabled"		"1"
		"visible"		"1"
		"labelText"		""
		"command"		"joinclass 3;hs_joinclass 3"
		"textAlignment"		"west"
		"font"			"Verdana"
		"paintbackground"	"1"
		"autoResize"		"0"
		"pinCorner"		"2"
		"tabPosition"		"0"
		"dulltext"		"0"
		"brighttext"		"0"
	}

	"btn-support"
	{
		"ControlName"		"MouseOverPanelButton"
		"fieldName"		"urban"
		"xpos"			"392"
		"ypos"			"88"
		"wide"			"105"
		"tall"			"328"
		"enabled"		"1"
		"visible"		"1"
		"labelText"		""
		"command"		"joinclass 1;hs_joinclass 4"
		"textAlignment"		"west"
		"font"			"Verdana"
		"paintbackground"	"1"
		"autoResize"		"0"
		"pinCorner"		"2"
		"tabPosition"		"0"
		"dulltext"		"0"
		"brighttext"		"0"
	}

	"autoselect_ct"
	{
		"ControlName"		"MouseOverPanelButton"
		"fieldName"		"autoselect_ct"
		"xpos"			"0"
		"ypos"			"425"
		"wide"			"148"
		"tall"			"20"
		"enabled"		"1"
		"visible"		"1"
		"labelText"		"#Cstrike_Auto_Select"
		"command"		"joinclass 6"
		"textAlignment"		"center"
		"font"			"Verdana"
		"paintbackground"	"1"
		"autoResize"		"0"
		"pinCorner"		"2"
		"tabPosition"		"1"
		"dulltext"		"0"
		"brighttext"		"0"
	}
}