#if defined _hstrike_stocks_included
  #endinput
#endif
#define _hstrike_stocks_included

#if !defined _amxmodx_included
  #include <amxmodx>
#endif

#if !defined _amxmodx_included
  #include <amxmisc>
#endif

#if !defined _cstrike_included
  #include <cstrike>
#endif

#if !defined _hamsandwich_included
  #include <hamsandwich>
#endif

#if !defined _hstrike_included
  #include <hstrike>
#endif

//#if !defined _engine_included
//  #include <engine>
//#endif

const XO_WEAPON 		= 4;
const XO_PLAYER 		= 5;
const m_pPlayer      		= 41;
const m_iId			= 43;
const m_flNextPrimaryAttack 	= 46;
const m_flNextSecondaryAttack 	= 47;
const m_flTimeWeaponIdle	= 48;
const m_iClip 			= 51;
const m_fInReload		= 54;
const m_fInSpecialReload 	= 55;
const m_iDefaultAmmo 		= 56;
const m_flAccuracy 		= 62;
const m_iShotsFired 		= 64;
const m_rgAmmo 			= 73;
const m_LastHitGroup 		= 75;
const m_flNextAttack		= 83;
const m_fBombStatus 		= 96;
const m_flPainShock 	 	= 108;
const m_iLastZoom 		= 109;
const m_bResumeZoom 		= 110;
const m_usEvent     		= 114;
const m_iMenu			= 205;
const m_iHideHUD 		= 361;
const m_iFOV 			= 363;
const m_pActiveItem 		= 373;
const m_blindStartTime 		= 515;
const m_blindHoldTime 		= 516;
const m_blindFadeTime 		= 517;
const m_bUsesShield		= 2042;
const m_bHasShield		= 2043;
const fBombPlanted 		= 1<<8;
const fExploEvent  		= 1<<0;
const fSmokeEvent  		= 1<<1;

enum // ParticleFX
{
	fxarmorgibs = 0,
	fxblood,
	fxcasings,
	fxdebris,
	fxholes,
	fxmags,
	fxsmoke,
	fxwater
}

enum // LightFX
{
	fxexplosions = 0,
	fxflashlight,
	fxmuzzleflash,
	fxlambeam,
	fxtracers
}

enum // HUD
{
	hudbartime = 0,
	hudhitmarker,
	hudkillfeed,
	hudstaminabar,
	hudtextchat
}

enum
{
	tutorred = 1,
	tutorblue,
	tutoryellow,
	tutorgreen
}

new WPN_NAMES[][] = 
{
	"",
	"P226",
	"Shield",
	"M40A6",
	"M67 Frag Grenade",
	"M1014",
	"C4",
	"Kedr",
	"AUG",
	"M18 Smoke Grenade",
	"Dual Glocks",
	"FiveseveN",
	"UMP45",
	"M14EBR",
	"SR-3M",
	"HK417",
	"FNP45",
	"Glock 18",
	"AWSM",
	"MPX",
	"RPD",
	"SPAS-12",
	"Diplomat",
	"MP9",
	"SVD",
	"M84 Flashbang",
	"SW629",
	"SCAR-H",
	"AK-12",
	"Knife",
	"P90"
};


new const MDL_V_MODEL[][]  =
{
	"null",				//null
	"models/v_p228.mdl",		//p228
	"models/v_shield.mdl",		//shield
	"models/v_scout.mdl",		//scout
	"models/v_hegrenade.mdl",	//he
	"models/v_xm1014.mdl",		//xm1014
	"models/v_c4.mdl",		//c4
	"models/v_mac10.mdl",		//mac10
	"models/v_aug.mdl",		//aug
	"models/v_smokegrenade.mdl",	//smoke
	"models/v_elite.mdl",		//elite
	"models/v_fiveseven.mdl",	//fiveseven
	"models/v_ump45.mdl",		//ump45
	"models/v_sg550.mdl",		//sg550
	"models/v_galil.mdl",		//galil
	"models/v_famas.mdl",		//famas
	"models/v_usp.mdl",		//usp
	"models/v_glock18.mdl",		//glock
	"models/v_awp.mdl",		//awp
	"models/v_mp5.mdl",		//mp5
	"models/v_m249.mdl",		//m249
	"models/v_m3.mdl",		//m3
	"models/v_m4a1.mdl",		//m4a1
	"models/v_tmp.mdl",		//tmp
	"models/v_g3sg1.mdl",		//g3sg1
	"models/v_flashbang.mdl",	//flash
	"models/v_deagle.mdl",		//deagle
	"models/v_sg552.mdl",		//sg552
	"models/v_ak47.mdl",		//ak47
	"models/v_knife.mdl",		//knife
	"models/v_p90.mdl"		//p90
};

new const WPN_REFLEX_DOT[][] =
{
	"null",		//null
	"reddot",	//p228
	"null",		//shield
	"null",		//scout
	"null",		//he
	"remington",	//xm1014
	"null",		//c4
	"reddot",	//mac10
	"eotech",	//aug
	"null",		//smoke
	"null",		//elite
	"reddot",	//fiveseven
	"reddot",	//ump45
	"reddot",	//sg550
	"circledot",	//galil
	"reddot",	//famas
	"reddot",	//usp
	"reddot",	//glock
	"null",		//awp
	"reddot",	//mp5
	"reddot",	//m249
	"halfeo",	//m3
	"transverse",	//m4a1
	"reddot",	//tmp
	"reddot",	//g3sg1
	"null",		//flash
	"reddot",	//deagle
	"reddot",	//sg552
	"eotech",	//ak47
	"null",		//knife
	"reddot"	//p90
};

new const WPN_SCOPE_DOT[][] =
{
	"null",		//null
	"null",		//p228
	"null",		//shield
	"null",		//scout
	"null",		//he
	"null",		//xm1014
	"null",		//c4
	"null",		//mac10
	"crossdot",	//aug
	"null",		//smoke
	"null",		//elite
	"null",		//fiveseven
	"null",		//ump45
	"null",		//sg550
	"svd",		//galil
	"crossdot",	//famas
	"null",		//usp
	"null",		//glock
	"null",		//awp
	"null",		//mp5
	"rangefinder",	//m249
	"null",		//m3
	"tdot",		//m4a1
	"null",		//tmp
	"null",		//g3sg1
	"null",		//flash
	"tdot",		//deagle
	"tdot",		//sg552
	"svd",		//ak47
	"null",		//knife
	"null",		//p90
};

new g_clip_max[] = 
{
	0,	//null
	13,	//p228
	0, 	//shield
	5, 	//scout
	1, 	//he
	7, 	//xm1014
	0, 	//c4
	20, 	//mac10
	30, 	//aug
	1, 	//smoke
	40, 	//elite
	30, 	//fiveseven
	25, 	//ump45
	10, 	//sg550
	20, 	//galil
	20, 	//famas
	12, 	//usp
	17, 	//glock
	5, 	//awp
	30, 	//mp5
	75, 	//m249
	8, 	//m3
	30, 	//m4a1
	30, 	//tmp
	10, 	//g3sg1
	2, 	//flash
	6, 	//deagle
	20, 	//sg552
	30, 	//ak47
	0, 	//knife
	50 	//p90
};

new g_bpammo_max[] = 
{
	0,	//null
	26,	//p228
	0, 	//shield
	10, 	//scout
	1, 	//he
	21, 	//xm1014
	1, 	//c4
	60, 	//mac10
	60, 	//aug
	1, 	//smoke
	40, 	//elite
	30, 	//fiveseven
	50, 	//ump45
	30, 	//sg550
	60, 	//galil
	60, 	//famas
	36, 	//usp
	34, 	//glock
	10, 	//awp
	60, 	//mp5
	75, 	//m249
	24, 	//m3
	60, 	//m4a1
	60, 	//tmp
	30, 	//g3sg1
	2, 	//flash
	18, 	//deagle
	60, 	//sg552
	60, 	//ak47
	0, 	//knife
	100 	//p90
};

new g_extra_mag[] = 
{
	0,	//null
	39,	//p228
	0, 	//shield
	10, 	//scout
	1, 	//he
	21, 	//xm1014
	1, 	//c4
	80, 	//mac10
	90, 	//aug
	1, 	//smoke
	40, 	//elite
	60, 	//fiveseven
	75, 	//ump45
	10, 	//sg550
	80, 	//galil
	80, 	//famas
	48, 	//usp
	51, 	//glock
	10, 	//awp
	90, 	//mp5
	75, 	//m249
	24, 	//m3
	90, 	//m4a1
	90, 	//tmp
	10, 	//g3sg1
	2, 	//flash
	24, 	//deagle
	80, 	//sg552
	90, 	//ak47
	0, 	//knife
	100 	//p90
};

new g_long_mag[] = 
{
	0,	//null
	18,	//p228
	0, 	//shield
	10, 	//scout
	1, 	//he
	7, 	//xm1014
	0, 	//c4
	30, 	//mac10
	42, 	//aug
	1, 	//smoke
	40, 	//elite
	30, 	//fiveseven
	35, 	//ump45
	20, 	//sg550
	30, 	//galil
	30, 	//famas
	20, 	//usp
	33, 	//glock
	10, 	//awp
	40, 	//mp5
	100, 	//m249
	8, 	//m3
	42, 	//m4a1
	35, 	//tmp
	20, 	//g3sg1
	2, 	//flash
	6, 	//deagle
	30, 	//sg552
	40, 	//ak47
	0, 	//knife
	50 	//p90
};

new Float:g_rload_magout[] = 
{
	0.00, // null
	0.56, // p228
	0.00, // shield
	1.52, // scout
	0.00, // hegrenade
	0.00, // xm1014
	0.00, // c4
	0.47, // mac10
	0.92, // aug
	0.00, // smokegrenade
	0.70, // elites 2.06
	0.45, // fiveseven
	0.72, // ump45
	0.96, // sg550
	0.64, // galil
	0.54, // famas
	0.45, // usp
	0.56, // glock18
	1.05, // awp
	0.58, // mp5navy
	2.73, // m249
	0.00, // m3
	0.57, // m4a1
	0.76, // tmp
	0.54, // g3sg1
	0.00, // flashbang
	0.42, // deagle
	0.54, // sg552
	0.52, // ak47
	0.00, // knife
	0.55  // p90
};

new Float:g_rload_empty_magout[] = 
{
	0.00, 	// null
	0.56, 	// p228
	0.00, 	// shield
	1.52, 	// scout
	0.00, 	// hegrenade
	0.00, 	// xm1014
	0.00, 	// c4
	0.47, 	// mac10
	0.92, 	// aug
	0.00, 	// smokegrenade
	0.70, 	// elites 2.06
	0.53, 	// fiveseven
	1.22, 	// ump45
	0.88, 	// sg550
	0.64, 	// galil
	0.54, 	// famas
	0.45,	// usp
	0.56, 	// glock18
	1.67, 	// awp
	0.58,	// mp5navy
	1.13,	// m249
	0.00,	// m3
	0.57,	// m4a1
	0.76,	// tmp
	0.54,	// g3sg1
	0.00,	// flashbang
	0.42, 	// deagle
	0.54, 	// sg552
	0.52,	// ak47
	0.00,	// knife
	0.55 	// p90
};

new Float:g_rload_magin[] = 
{
	0.00, 	// null
	2.00, 	// p228
	0.00, 	// shield
	2.79, 	// scout
	0.00, 	// hegrenade
	0.00, 	// xm1014
	0.00, 	// c4
	1.90, 	// mac10
	3.11, 	// aug
	0.00, 	// smokegrenade
	3.90, 	// elites 2.06
	2.48, 	// fiveseven
	2.12,	// ump45
	2.26, 	// sg550
	2.45, 	// galil
	3.04, 	// famas
	2.52, 	// usp
	1.98, 	// glock18
	2.55, 	// awp
	2.33, 	// mp5navy
	6.46, 	// m249
	0.00, 	// m3
	2.08, 	// m4a1
	2.24, 	// tmp
	1.56, 	// g3sg1
	0.00, 	// flashbang
	1.55, 	// deagle
	3.04, 	// sg552
	2.24, 	// ak47
	0.00, 	// knife
	2.61  	// p90
};
new Float:g_rload_empty_magin[] = 
{
	0.00, // null
	2.00, // p228
	0.00, // shield
	2.79, // scout
	0.00, // hegrenade
	0.00, // xm1014
	0.00, // c4
	1.90, // mac10
	3.11, // aug
	0.00, // smokegrenade
	3.90, // elites 2.06
	2.52, // fiveseven
	2.63, // ump45
	2.00, // sg550
	2.45, // galil
	3.04, // famas
	2.52, // usp
	1.98, // glock18
	3.18, // awp
	2.33, // mp5navy
	5.48, // m249
	0.00, // m3
	2.08, // m4a1
	2.24, // tmp
	1.56, // g3sg1
	0.00, // flashbang
	1.55, // deagle
	3.04, // sg552
	2.24, // ak47
	0.00, // knife
	2.61  // p90
};

new Float:g_rload_time[] = 
{
	0.00, 	// null
	2.82,	// p228
	0.00, 	// shield
	2.66, 	// scout
	0.00, 	// hegrenade
	0.00, 	// xm1014
	0.00, 	// c4
	3.00, 	// mac10
	4.13, 	// aug
	0.00, 	// smokegrenade
	4.60,	// elites 2.06
	3.35,	// fiveseven
	2.71, 	// ump45
	3.00, 	// sg550
	3.59, 	// galil
	3.92, 	// famas
	3.35, 	// usp
	2.82, 	// glock18
	3.35, 	// awp
	3.27, 	// mp5navy
	7.50, 	// m249 8.11
	0.00,	// m3
	3.19, 	// m4a1
	3.16, 	// tmp
	3.85, 	// g3sg1
	0.00, 	// flashbang
	2.18, 	// deagle
	3.92, 	// sg552
	2.92, 	// ak47
	0.00, 	// knife
	3.52  	// p90
};

new Float:g_rload_empty_time[] = 
{
	0.00, // null
	3.05, // p228
	0.00, // shield
	4.25, // scout
	0.00, // hegrenade
	0.00, // xm1014
	0.00, // c4
	3.00, // mac10
	4.89, // aug
	0.00, // smokegrenade
	4.60, // elites 2.06
	3.80, // fiveseven
	3.85, // ump45
	4.18, // sg550
	4.50, // galil
	4.42, // famas
	3.80, // usp
	3.36, // glock18
	4.68, // awp
	3.20, // mp5navy
	6.49, // m249
	0.00, // m3
	3.94, // m4a1
	3.67, // tmp
	3.85, // g3sg1
	0.00, // flashbang
	2.35, // deagle
	4.42, // sg552
	4.32, // ak47
	0.00, // knife
	3.97  // p90
};

new Float:g_rload_charge_time[] = 
{
	0.00, // null
	2.44, // p228
	0.00, // shield
	4.68, // scout
	0.00, // hegrenade
	0.00, // xm1014
	0.00, // c4
	2.75, // mac10
	3.72, // aug
	0.00, // smokegrenade
	3.69, // elites
	3.02, // fiveseven
	3.28, // ump45
	3.23, // sg550
	3.64, // galil
	3.66, // famas
	3.03, // usp
	2.68, // glock18
	4.00, // awp
	2.98, // mp5navy
	6.50, // m249
	0.66, // m3
	2.90, // m4a1
	3.00, // tmp
	2.85, // g3sg1
	0.00, // flashbang
	2.05, // deagle
	3.64, // sg552
	3.52, // ak47
	0.00, // knife
	3.30  // p90
};

new Float:g_anim_deploy_time[] = 
{
	0.00,	//null
	1.02,	//p228
	0.00,	//shield
	1.36,	//scout
	0.00,	//he
	1.32,	//xm1014
	0.00,	//c4
	1.10,	//mac10
	1.02,	//aug
	0.00,	//smoke
	1.20,	//elite
	1.02,	//fiveseven
	0.93,	//ump45
	1.18,	//sg550
	1.32,	//galil
	1.05,	//famas
	1.02,	//usp
	1.02,	//glock
	1.18,	//awp
	0.90,	//mp5navy
	0.97,	//m249
	0.82,	//m3
	1.02,	//m4a1
	0.85,	//tmp
	1.60,	//g3sg1
	0.00,	//flash
	1.11,	//deagle
	1.11,	//sg552
	0.85,	//ak47
	1.43,	//knife
	1.37	//p90
};

new Float:g_deploy_charge_time[] = 
{
	0.00, // null
	0.67, // p228
	0.00, // shield
	1.49, // scout
	0.00, // hegrenade
	1.32, // xm1014
	0.00, // c4
	1.10, // mac10
	0.76, // aug
	0.00, // smokegrenade
	0.73, // elites
	0.74, // fiveseven
	0.78, // ump45
	0.97, // sg550
	1.28, // galil
	0.90, // famas
	0.81, // usp
	0.74, // glock18
	1.03, // awp
	0.60, // mp5navy
	1.07, // m249
	0.96, // m3
	0.88, // m4a1
	0.80, // tmp
	0.00, // g3sg1
	0.00, // flashbang
	1.01, // deagle
	0.90, // sg552
	0.73, // ak47
	0.00, // knife
	0.73  // p90
};

new Float:g_anim_deploy_charge_time[] = 
{
	0.00,	//null
	1.11,	//p228
	0.00,	//shield
	2.13,	//scout
	0.00,	//he
	1.32,	//xm1014
	0.00,	//c4
	1.10,	//mac10
	1.42,	//aug
	0.00,	//smokes
	1.20,	//elite
	1.79,	//fiveseven
	1.29,	//ump45
	1.83,	//sg550
	2.02,	//galil
	1.46,	//famas
	1.79,	//usp
	1.22,	//glock18
	1.68,	//awp
	1.23,	//mp5navy
	1.93,	//m249
	1.27,	//m3
	1.52,	//m4a1
	1.38,	//tmp
	1.60,	//g3sg1
	0.00,	//flash
	1.44,	//deagle
	1.62,	//sg552
	1.43,	//ak47
	1.43,	//knife
	1.70	//p90
};

new Float:g_anim_attack_time[] = 
{
	0.00, //null
	0.85, //p228
	0.00, //shield
	1.75, //scout
	0.00, //he
	0.94, //xm1014
	0.00, //c4
	0.70, //mac10
	0.68, //aug
	0.00, //smoke
	0.87, //elite
	0.68, //fiveseven
	1.02, //ump45
	0.97, //sg550
	0.85, //galil
	0.77, //famas
	0.68, //usp
	0.85, //glock18
	1.52, //awp
	0.52, //mp5navy
	0.92, //m249
	1.22, //m3
	0.68, //m4a1
	0.69, //tmp
	0.59, //g3sg1
	0.00, //flash
	1.02, //deagle
	0.77, //sg552
	0.77, //ak47
	1.00, //knife
	0.70  //p90
};

new Float:g_magcheck_time[] =
{
	0.00, // null
	1.94, // p228
	0.00, // shield
	1.35, // scout
	0.00, // hegrenade
	0.86, // xm1014
	0.00, // c4
	1.23, // mac10
	1.55, // aug
	0.00, // smokegrenade
	0.00, // elites 2.06
	1.37, // fiveseven
	1.55, // ump45
	1.38, // sg550
	1.17, // galil
	1.24, // famas
	1.42, // usp
	1.94, // glock18
	1.30, // awp
	1.28, // mp5navy
	1.17, // m249
	0.86, // m3
	1.97, // m4a1
	1.44, // tmp
	1.65, // g3sg1
	0.00, // flashbang
	0.58, // deagle
	1.53, // sg552
	1.50, // ak47
	0.00, // knife
	0.50  // p90
};

new Float:g_magcheck_anim_time[] = 
{
	0.00, // null
	4.02, // p228
	0.00, // shield
	3.28, // scout
	0.00, // hegrenade
	1.77, // xm1014
	0.00, // c4
	2.85, // mac10
	3.27, // aug
	0.00, // smokegrenade
	0.00, // elites 2.06
	3.35, // fiveseven
	3.30, // ump45
	2.31, // sg550
	3.18, // galil
	4.47, // famas
	3.35, // usp
	4.02, // glock18
	3.18, // awp
	3.27, // mp5navy
	2.42, // m249
	1.77, // m3
	3.77, // m4a1
	3.44, // tmp
	3.35, // g3sg1
	0.00, // flashbang
	1.63, // deagle
	4.46, // sg552
	2.92, // ak47
	0.00, // knife
	1.20  // p90
};

new Float:g_magcheck_magout[] = 
{
	0.00, //null
	0.44, //p228
	0.00, //shield
	0.63, //scout
	0.00, //he
	0.37, //xm1014
	0.00, //c4
	0.65, //mac10
	0.63, //aug
	0.00, //smoke
	0.00, //elite
	0.42, //fiveseven
	0.73, //ump45
	0.29, //sg550
	0.63, //galil
	0.53, //famas
	0.42, //usp
	0.12, //glock18
	0.80, //awp
	0.53, //mp5navy
	0.00, //m249
	0.20, //m3
	0.53, //m4a1
	0.78, //tmp
	1.02, //g3sg1
	0.00, //flash
	0.28, //deagle
	0.67, //sg552
	0.52, //ak47
	0.00, //knife
	0.00  //p90
};

new Float:g_magcheck_magin[] = 
{
	0.00, //null
	3.30, //p228
	0.00, //shield
	2.43, //scout
	0.00, //he
	1.34, //xm1014
	0.00, //c4
	2.07, //mac10
	2.42, //aug
	0.00, //smoke
	0.00, //elite
	2.42, //fiveseven
	2.73, //ump45
	1.60, //sg550
	3.67, //galil
	2.75, //famas
	2.52, //usp
	3.34, //glock18
	2.42, //awp
	2.30, //mp5navy
	0.00, //m249
	1.11, //m3
	3.00, //m4a1
	3.44, //tmp
	2.67, //g3sg1
	0.00, //flash
	1.22, //deagle
	3.71, //sg552
	2.36, //ak47
	0.00, //knife
	0.00  //p90
};

new Float:g_acrload_magin[] = 
{
	0.00, //null
	1.22, //p228
	0.00, //shield
	2.16, //scout
	0.00, //he
	0.00, //xm1014
	0.00, //c4
	1.30, //mac10
	1.85, //aug
	0.00, //smoke
	0.00, //elite
	2.17, //fiveseven
	1.20, //ump45
	1.87, //sg550
	1.73, //galil
	1.67, //famas
	1.72, //usp
	1.46, //glock18
	1.38, //awp
	1.48, //mp5navy
	2.70, //m249
	1.73, //m3
	1.87, //m4a1
	1.22, //tmp
	1.45, //g3sg1
	0.00, //flash
	1.30, //deagle
	2.10, //sg552
	1.04, //ak47
	0.00, //knife
	2.61  //p90
};

new Float:g_acrload_time[] = 
{
	0.00, //null
	1.80, //p228
	0.00, //shield
	3.20, //scout
	0.00, //he
	0.00, //xm1014
	0.00, //c4
	2.10, //mac10
	2.83, //aug
	0.00, //smoke
	0.00, //elite
	3.05, //fiveseven
	1.78, //ump45
	3.00, //sg550
	2.83, //galil
	2.82, //famas
	2.55, //usp
	2.16, //glock18
	2.17, //awp
	2.43, //mp5navy
	8.11, //m249
	0.00, //m3
	2.67, //m4a1
	2.02, //tmp
	2.30, //g3sg1
	0.00, //flash
	2.35, //deagle
	2.78, //sg552
	1.62, //ak47
	0.00, //knife
	3.52, //p90
};

new Float:g_acrload_time_empty[] = 
{
	0.00, //null
	2.15, //p228
	0.00, //shield
	5.80, //scout
	0.00, //he
	0.00, //xm1014
	0.00, //c4
	2.60, //mac10
	3.58, //aug
	0.00, //smoke
	0.00, //elite
	3.68, //fiveseven
	2.28, //ump45
	4.18, //sg550
	3.77, //galil
	3.40, //famas
	3.00, //usp
	2.58, //glock18
	2.88, //awp
	3.02, //mp5navy
	7.30, //m249
	0.00, //m3
	3.52, //m4a1
	2.48, //tmp
	3.08, //g3sg1
	0.00, //flash
	2.35, //deagle
	3.38, //sg552
	3.16, //ak47
	0.00, //knife
	3.97, //p90
};

new Float:g_acrload_charge_time[] = 
{
	0.00, //null
	1.58, //p228
	0.00, //shield
	4.44, //scout
	0.00, //he
	0.00, //xm1014
	0.00, //c4
	2.02, //mac10
	2.45, //aug
	0.00, //smoke
	0.00, //elite
	2.92, //fiveseven
	1.80, //ump45
	3.21, //sg550
	2.82, //galil
	2.64, //famas
	2.23, //usp
	1.90, //glock18
	2.18, //awp
	2.22, //mp5navy
	6.50, //m249
	0.00, //m3
	2.43, //m4a1
	1.88, //tmp
	2.37, //g3sg1
	0.00, //flash
	1.83, //deagle
	2.60, //sg552
	2.36, //ak47
	0.00, //knife
	3.30, //p90
};

stock set_weapon_anim(user, anim, submodel)
{
	message_begin(MSG_ONE_UNRELIABLE, SVC_WEAPONANIM, {0, 0, 0}, user);
	write_byte(anim);
	write_byte(submodel);
	message_end();
	
	set_pev(user, pev_weaponanim, anim);
}

stock hss_get_user_vmodel(wpn_id)
	return MDL_V_MODEL[wpn_id];

stock hss_get_wpn_reflexdot(wpn_id)
	return WPN_REFLEX_DOT[wpn_id];

stock hss_get_wpn_scopedot(wpn_id)
	return WPN_SCOPE_DOT[wpn_id];

stock hss_get_wpn_bpammomax(wpn_id)
	return g_bpammo_max[wpn_id];

stock hss_get_wpn_clipmax(wpn_id)
	return g_clip_max[wpn_id];

stock hss_get_wpn_extramag(wpn_id)
	return g_extra_mag[wpn_id];

stock hss_get_wpn_longmag(wpn_id)
	return g_long_mag[wpn_id];

stock Float:hss_get_wpn_reload_magout(wpn_id)
	return g_rload_magout[wpn_id];

stock Float:hss_get_wpn_reload_magin(wpn_id)
	return g_rload_magin[wpn_id];

stock Float:hss_get_wpn_reload_time(wpn_id)
	return g_rload_time[wpn_id];

stock Float:hss_get_wpn_reload_empty_magout(wpn_id)
	return g_rload_empty_magout[wpn_id];

stock Float:hss_get_wpn_reload_empty_magin(wpn_id)
	return g_rload_empty_magin[wpn_id];

stock Float:hss_get_wpn_reload_empty_time(wpn_id)
	return g_rload_empty_time[wpn_id];

stock Float:hss_get_wpn_reload_charge_time(wpn_id)
	return g_rload_charge_time[wpn_id];

stock Float:hss_get_wpn_draw_charge_time(wpn_id)
	return g_deploy_charge_time[wpn_id];

stock Float:hss_get_anim_draw_time(wpn_id)
	return g_anim_deploy_time[wpn_id];

stock Float:hss_get_anim_draw_charge_time(wpn_id)
	return g_anim_deploy_charge_time[wpn_id];

stock Float:hss_get_anim_shoot_time(wpn_id)
	return g_anim_attack_time[wpn_id];

stock Float:hss_get_magcheck_time(wpn_id)
	return g_magcheck_time[wpn_id];

stock Float:hss_get_magcheck_anim_time(wpn_id)
	return g_magcheck_anim_time[wpn_id];

stock Float:hss_get_magcheck_magout(wpn_id)
	return g_magcheck_magout[wpn_id];

stock Float:hss_get_magcheck_magin(wpn_id)
	return g_magcheck_magin[wpn_id];

stock Float:hss_get_acrload_magin(wpn_id)
	return g_acrload_magin[wpn_id];

stock Float:hss_get_acrload_time(wpn_id)
	return g_acrload_time[wpn_id];

stock Float:hss_get_acrload_charge_time(wpn_id)
	return g_acrload_charge_time[wpn_id];

stock Float:hss_get_acrload_time_empty(wpn_id)
	return g_acrload_time_empty[wpn_id];

stock Float:hss_get_wpn_name(wpn_id)
	return WPN_NAMES[wpn_id];

// TUTOR
stock MakeTutor(id, Text[], Color, Float:Time = 0.0) 
{
	// 1 = red
	// 2 = blue
	// 3 = yellow
	// 4 = green

	static NewText[256];
	formatex(NewText, 255, "%s", Text);
	
	replace_all(NewText, 255, "\n", "^n");
	
	if(is_user_connected(id))
	{
		message_begin(MSG_ONE_UNRELIABLE, get_user_msgid("TutorText"), _, id)
		write_string(NewText)
		write_byte(0)
		write_short(0)
		write_short(0)
		write_short(1<<Color)
		message_end()
		
		client_cmd(id, "spk buttons/blip1.wav");
	}
	
	if(Time != 0.0)
	{
		
		if( task_exists(id + 10000))
			remove_task(id + 10000)
		
		set_task(Time,"RemoveTutor",id + 10000)
	}
}

public RemoveTutor(taskID) 
{
	new id = taskID - 10000;
	message_begin(MSG_ALL, get_user_msgid("TutorClose"), _, id)
	message_end()
}
