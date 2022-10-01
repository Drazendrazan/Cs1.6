"Resource/UI/BuyEquipmentOrg_TER.res"
{
	"BuyEquipment_TER"
	{
		"ControlName"		"WizardSubPanel"
		"fieldName"		"BuyEquipmentOrg_TER"
		"xpos"		"50"
		"ypos"		"10"
		"wide"		"552"
		"tall"		"448"
		"autoResize"		"0"
		"pinCorner"		"0"
		"visible"		"1"
		"enabled"		"1"
		"tabPosition"		"0"
	}

	"Title"
	{
		"ControlName"		"Label"
		"fieldName"		"Title"
		"xpos"		"76"
		"ypos"		"22"
		"wide"		"500"
		"tall"		"48"
		"autoResize"		"0"
		"pinCorner"		"0"
		"visible"		"1"
		"enabled"		"1"
		"tabPosition"		"0"
		"labelText"		"#Cstrike_EquipmentLabel"
		"textAlignment"		"west"
		"dulltext"		"0"
		"brighttext"		"0"
		"font"		"Title"
		"wrap"		"0"
	}

	"ItemInfo"
	{
		"ControlName"		"Panel"
		"fieldName"		"ItemInfo"
		"xpos"		"244"
		"ypos"		"116"
		"wide"		"400"
		"tall"		"380"
		"autoResize"		"3"
		"pinCorner"		"0"
		"visible"		"1"
		"enabled"		"1"
		"tabPosition"		"0"
	}

	"kevlar"
	{
		"ControlName"		"MouseOverPanelButton"
		"fieldName"		"kevlar"
		"xpos"		"76"
		"ypos"		"116"
		"wide"		"148"
		"tall"		"20"
		"autoResize"		"0"
		"pinCorner"		"2"
		"visible"		"1"
		"enabled"		"1"
		"tabPosition"		"0"
		"labelText"		"#Cstrike_Kevlar"
		"textAlignment"		"west"
		"dulltext"		"0"
		"brighttext"		"0"
		"command"		"vest"
		"cost"			"650"
	}

	"kevlar_helmet"
	{
		"ControlName"		"MouseOverPanelButton"
		"fieldName"		"kevlar_helmet"
		"xpos"		"76"
		"ypos"		"148"
		"wide"		"148"
		"tall"		"20"
		"pinCorner"		"2"
		"visible"		"1"
		"enabled"		"1"
		"tabPosition"		"0"
		"labelText"		"#Cstrike_Kevlar_Helmet"
		"textAlignment"		"west"
		"dulltext"		"0"
		"brighttext"		"0"
		"command"		"vesthelm"
		"cost"			"1000"
	}

	"flashbang"
	{
		"ControlName"		"MouseOverPanelButton"
		"fieldName"		"flashbang"
		"xpos"		"76"
		"ypos"		"180"
		"wide"		"148"
		"tall"		"20"
		"autoResize"		"0"
		"pinCorner"		"2"
		"visible"		"1"
		"enabled"		"1"
		"tabPosition"		"0"
		"labelText"		"#Cstrike_Flashbang"
		"textAlignment"		"west"
		"dulltext"		"0"
		"brighttext"		"0"
		"command"		"flash"
		"cost"			"200"
	}
	
	"hegrenade"
	{
		"ControlName"		"MouseOverPanelButton"
		"fieldName"		"hegrenade"
		"xpos"		"76"
		"ypos"		"212"
		"wide"		"148"
		"tall"		"20"
		"autoResize"		"0"
		"pinCorner"		"2"
		"visible"		"1"
		"enabled"		"1"
		"tabPosition"		"0"
		"labelText"		"#Cstrike_HE_Grenade"
		"textAlignment"		"west"
		"dulltext"		"0"
		"brighttext"		"0"
		"command"		"hegren"
		"cost"			"300"
	}
	
	"smokegrenade"
	{
		"ControlName"		"MouseOverPanelButton"
		"fieldName"		"smokegrenade"
			"xpos"		"76"
		"ypos"		"244"
		"wide"		"148"
		"tall"		"20"
		"autoResize"		"0"
		"pinCorner"		"2"
		"visible"		"1"
		"enabled"		"1"
		"tabPosition"		"0"
		"labelText"		"#Cstrike_Smoke_Grenade"
		"textAlignment"		"west"
		"dulltext"		"0"
		"brighttext"		"0"
		"command"		"sgren"
		"cost"			"300"
	}
		
	"nightvision"
	{
		"ControlName"		"MouseOverPanelButton"
		"fieldName"		"nightvision"
		"xpos"		"76"
		"ypos"		"276"
		"wide"		"148"
		"tall"		"20"
		"autoResize"		"0"
		"pinCorner"		"2"
		"visible"		"1"
		"enabled"		"1"
		"tabPosition"		"0"
		"labelText"		"#Cstrike_NightVision_Button_TER"
		"textAlignment"		"west"
		"dulltext"		"0"
		"brighttext"		"0"
		"command"		"nvgs"
		"cost"			"1250"
	}

	"CancelButton"
	{
		"ControlName"		"MouseOverPanelButton"
		"fieldName"		"CancelButton"
		"xpos"		"76"
		"ypos"		"380"
		"wide"		"148"
		"tall"		"20"
		"autoResize"		"0"
		"pinCorner"		"2"
		"visible"		"1"
		"enabled"		"1"
		"tabPosition"		"0"
		"labelText"		"#Cstrike_Cancel"
		"textAlignment"		"west"
		"dulltext"		"0"
		"brighttext"		"0"
		"Command"		"vguicancel"
		"Default"		"1"
	}
}