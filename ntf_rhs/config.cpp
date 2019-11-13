 #define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define mag_2(a) a, a
#define mag_3(a) a, a, a
#define mag_4(a) a, a, a, a
#define mag_5(a) a, a, a, a, a
#define mag_6(a) a, a, a, a, a, a
#define mag_7(a) a, a, a, a, a, a, a
#define mag_8(a) a, a, a, a, a, a, a, a
#define mag_9(a) a, a, a, a, a, a, a, a, a
#define mag_10(a) a, a, a, a, a, a, a, a, a, a
#define mag_11(a) a, a, a, a, a, a, a, a, a, a, a
#define mag_12(a) a, a, a, a, a, a, a, a, a, a, a, a
#define true 1
#define false 0

 //===========================================================================================================================================================
 //========================================================================== Patches =================================================================================
 //===========================================================================================================================================================

class CfgPatches {
	class ntf_rhs {
		requiredVersion = 0.1;
		requiredAddons[] = {

			"rhsusf_a2port_air",
			"rhsusf_a2port_air2",
			"rhsusf_m113",
			"rhsusf_infantry",
			"rhsusf_infantry2",
			"rhsusf_c_troops",
			"A3_Characters_F_BLUFOR",
			"rhsusf_weapons",
			"rhsusf_c_weapons",
			"rhsusf_weapons2"
		};

		weapons[] = {
			"ntf_hlm_gray",
			"ntf_hlm_gray_mask",
			"ntf_hlm_gray_visor",
			"ntf_hlm_gray_visor_mask",
			"ntf_vest_spc_gm1",
			"ntf_vest_spc_vc",
			"ntf_vest_spc_gm2",
			"ntf_vest_spc_l",
			"ntf_vest_spc_gm3",
			"ntf_vest_spc_lf1",
			"ntf_vest_mbav_l",
			"ntf_vest_mbav_gm",
			"ntf_vest_mbav_mg",
			"ntf_vest_mbav_gur",
			"ntf_vest_mbav_san",
			"ntf_uni_crew_wdl",
			"ntf_uni_crew_tan",
			"ntf_uni_heli",
			"ntf_uni_pilot",
			"ntf_weap_hk416_olive",
			"ntf_weap_hk416_olive2",
			"ntf_weap_hk416_sand",
			"ntf_weap_hk416_sand2",
			"ntf_hlm_cato_des",
			"ntf_hlm_cato_wdl",
			"ntf_hlm_ops",
			"ntf_hlm_ops_pelt",
			"ntf_hlm_ops_pelt_str",
			"ntf_hlm_ops_pelt_str_cam",
			"ntf_hlm_ops_win",
			"ntf_hlm_ops_pelt_win",
			"ntf_hlm_ops_pelt_str_win",
			"ntf_hlm_ops_pelt_str_cam_win",
			"ntf_hlm_ops_wdl",
			"ntf_hlm_ops_pelt_wdl",
			"ntf_hlm_ops_pelt_str_wdl",
			"ntf_hlm_ops_pelt_str_cam_wdl",
			"ntf_weap_rfk",
			"ntf_weap_m249_short",
			"ntf_weap_m249_long"

		};

		units[] = {

			"ntf_c130j",
			"ntf_bell412_trans",
			"ntf_bell412_guns",
			"ntf_m113_std_wdl",
			"ntf_m113_std_des",
			"ntf_m113_ko_wdl",
			"ntf_m113_ko_des",
			"ntf_m113_med_wdl",
			"ntf_m113_med_des"
		};
	};
};

//===========================================================================================================================================================
//========================================================================== cfgFactionClass =================================================================================
//===========================================================================================================================================================

 class cfgFactionClasses {
	class NTF {
		displayName = "Norwegian Task Force"; //Faction name in-game
		author = "Christiansen";
		icon = "ntf_rhs\data\ntf_insignia.paa"; //Path to texture
		priority = 1; //How far down it is on the menu
		side = 1; // 1 Blufor 2 opfor 3 independant
	};
};

//===========================================================================================================================================================
//========================================================================== cfgMagazine =================================================================================
//===========================================================================================================================================================
class CfgMagazines {
	class CA_Magazine;
	class CA_LauncherMagazine;

	class rhs_mag_maaws_HE;
	class ntf_mag_rfk_HE : rhs_mag_maaws_HE {
		author="Christiansen";
		scope=2;
		displayName="[NTF] FFV441 HE";
		initSpeed=290;
	};

	class rhs_mag_maaws_HEAT;
	class ntf_mag_rfk_HEAT : rhs_mag_maaws_HEAT {
		author="Christiansen";
		scope=2;
		displayName="[NTF] FFV651 HEAT";
		displaynameshort="651 HEAT";
		initSpeed=290;
	};

	class rhs_mag_maaws_HEDP;
	class ntf_mag_rfk_HEDP : rhs_mag_maaws_HEDP {
		author="Christiansen";
		scope=2;
		displayName="[NTF] FFV502 HEDP";
		initSpeed=230;
	};
};


class CfgMagazineWells {

	class CBA_RFK
	{
		RHS_Magazines[] =
		{
			"ntf_mag_rfk_HEAT",
			"ntf_mag_rfk_HEDP",
			"ntf_mag_rfk_HE"
			//"rhs_mag_maaws_SMOKE",
			//"rhs_mag_maaws_ILLUM"
		};
	};
};

//===========================================================================================================================================================
//========================================================================== cfgWeapons =================================================================================
//===========================================================================================================================================================

class ItemCore;

class H_HelmetB : ItemCore {
	class ItemInfo;
};

class HeadGearItem;

class cfgWeapons {

//========================================================================== HGU-56/P =================================================================================

	class rhsusf_hgu56p_black;
    class ntf_hlm_gray: rhsusf_hgu56p_black {
        scope = 2;
        displayName = "[NTF] HGU-56/P";
		author = "Christiansen";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"ntf_rhs\data\ntf_heli_helm.paa"};
	};

	class rhsusf_hgu56p_mask_black;
    class ntf_hlm_gray_mask: rhsusf_hgu56p_mask_black {
        scope = 2;
        displayName = "[NTF] HGU-56/P (Maske)";
		author = "Christiansen";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"ntf_rhs\data\ntf_heli_helm.paa"};
	};

	class rhsusf_hgu56p_visor_black;
    class ntf_hlm_gray_visor: rhsusf_hgu56p_visor_black {
        scope = 2;
        displayName = "[NTF] HGU-56/P (Visir)";
		author = "Christiansen";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"ntf_rhs\data\ntf_heli_helm.paa"};
	};

	class rhsusf_hgu56p_visor_mask_green;
    class ntf_hlm_gray_visor_mask: rhsusf_hgu56p_visor_mask_green {
        scope = 2;
        displayName = "[NTF] HGU-56/P (Visir & maske)";
		author = "Christiansen";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"ntf_rhs\data\ntf_heli_helm.paa"};
	};

//========================================================================== CATO Hjelm =================================================================================

	class rhsusf_mich_helmet_marpatwd_alt;
	class ntf_hlm_cato_des: rhsusf_mich_helmet_marpatwd_alt {
		scope = 2;
		scopeArsenal=2;
		displayName="[NTF] Cato hjelm (Sand)";
		author="Christiansen";
		hiddenSelectionsTextures[]= {
			"ntf_rhs\data\ntf_hlm_cato_des.paa",
			"ntf_rhs\data\ntf_hlm_cato_acc.paa"
		};
	};

	class ntf_hlm_cato_wdl: rhsusf_mich_helmet_marpatwd_alt {
		scope = 2;
		scopeArsenal=2;
		displayName="[NTF] Cato Hjelm (Skog)";
		author="Christiansen";
		hiddenSelectionsTextures[]= {
			"ntf_rhs\data\ntf_hlm_cato_wdl.paa",
			"ntf_rhs\data\ntf_hlm_cato_acc.paa"
		};
	};

//========================================================================== Opscore =================================================================================

	class rhsusf_opscore_cover;
	class ntf_hlm_ops : rhsusf_opscore_cover {
		author="Christiansen";
		scope = 2;
		scopeArsenal=2;
		displayName = "[NTF] Opscore";
		hiddenSelectionsTextures[] =
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa", // base of helmet
			"", // mic
			"", // strobe
			"", // camera
			"", // cover
			"" //Peltor
		};
	};

	class ntf_hlm_ops_pelt : rhsusf_opscore_cover {
		author="Christiansen";
		scope = 2;
		scopeArsenal=2;
		displayName = "[NTF] Opscore (Headset)";
		hiddenSelectionsTextures[] =
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa", // base of helmet
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa", // mic
			"", // strobe
			"", // camera
			"", // cover
			""
		};
	};

	class ntf_hlm_ops_pelt_str : rhsusf_opscore_cover {
		author="Christiansen";
		scope = 2;
		scopeArsenal=2;
		displayName = "[NTF] Opscore (Headset/Strobe)";
		hiddenSelectionsTextures[] =
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa", // base of helmet
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa", // mic
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\nsw_co.paa", // strobe
			"", // camera
			"", // cover
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};

	class ntf_hlm_ops_pelt_str_cam : rhsusf_opscore_cover {
		author="Christiansen";
		scope = 2;
		scopeArsenal=2;
		displayName = "[NTF] Opscore (Headset/Strobe/Cam)";
		hiddenSelectionsTextures[] =
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa", // base of helmet
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa", // mic
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\nsw_co.paa", // strobe
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa", // camera
			"", // cover
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};

	class ntf_hlm_ops_win : rhsusf_opscore_cover {
		author="Christiansen";
		scope = 2;
		scopeArsenal=2;
		displayName = "[NTF] Opscore VT";
		hiddenSelectionsTextures[] =
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa", // base of helmet
			"", // mic
			"", // strobe
			"", // camera
			"ntf_rhs\data\ntf_hlm_opscore_cover_win.paa", // cover
			""
		};
	};

	class ntf_hlm_ops_pelt_win : rhsusf_opscore_cover {
		author="Christiansen";
		scope = 2;
		scopeArsenal=2;
		displayName = "[NTF] Opscore VT (Headset)";
		hiddenSelectionsTextures[] =
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa", // base of helmet
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa", // mic
			"", // strobe
			"", // camera
			"ntf_rhs\data\ntf_hlm_opscore_cover_win.paa", // cover
			""
		};
	};

	class ntf_hlm_ops_pelt_str_win : rhsusf_opscore_cover {
		author="Christiansen";
		scope = 2;
		scopeArsenal=2;
		displayName = "[NTF] Opscore VT (Headset/Strobe)";
		hiddenSelectionsTextures[] =
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa", // base of helmet
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa", // mic
			"ntf_rhs\data\ntf_hlm_opscore_nsw_win.paa", // strobe
			"", // camera
			"ntf_rhs\data\ntf_hlm_opscore_cover_win.paa", // cover
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};

	class ntf_hlm_ops_pelt_str_cam_win : rhsusf_opscore_cover {
		author="Christiansen";
		scope = 2;
		scopeArsenal=2;
		displayName = "[NTF] Opscore VT (Headset/Strobe/Cam)";
		hiddenSelectionsTextures[] =
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa", // base of helmet
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa", // mic
			"ntf_rhs\data\ntf_hlm_opscore_nsw_win.paa", // strobe
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa", // camera
			"ntf_rhs\data\ntf_hlm_opscore_cover_win.paa", // cover
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};

	class ntf_hlm_ops_wdl : rhsusf_opscore_cover {
		author="Christiansen";
		scope = 2;
		scopeArsenal=2;
		displayName = "[NTF] Opscore ST";
		hiddenSelectionsTextures[] =
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa", // base of helmet
			"", // mic
			"", // strobe
			"", // camera
			"ntf_rhs\data\ntf_hlm_opscore_cover_wdl.paa", // cover
			""
		};
	};

	class ntf_hlm_ops_pelt_wdl : rhsusf_opscore_cover {
		author="Christiansen";
		scope = 2;
		scopeArsenal=2;
		displayName = "[NTF] Opscore ST (Headset)";
		hiddenSelectionsTextures[] =
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa", // base of helmet
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa", // mic
			"", // strobe
			"", // camera
			"ntf_rhs\data\ntf_hlm_opscore_cover_wdl.paa", // cover
			""
		};
	};

	class ntf_hlm_ops_pelt_str_wdl : rhsusf_opscore_cover {
		author="Christiansen";
		scope = 2;
		scopeArsenal=2;
		displayName = "[NTF] Opscore ST (Headset/Strobe)";
		hiddenSelectionsTextures[] =
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa", // base of helmet
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa", // mic
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\nsw_co.paa", // strobe
			"", // camera
			"ntf_rhs\data\ntf_hlm_opscore_cover_wdl.paa", // cover
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};

	class ntf_hlm_ops_pelt_str_cam_wdl : rhsusf_opscore_cover {
		author="Christiansen";
		scope = 2;
		scopeArsenal=2;
		displayName = "[NTF] Opscore ST (Headset/Strobe/Cam)";
		hiddenSelectionsTextures[] =
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa", // base of helmet
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa", // mic
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\nsw_co.paa", // strobe
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa", // camera
			"ntf_rhs\data\ntf_hlm_opscore_cover_wdl.paa", // cover
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};

	class rhsusf_opscore_paint_pelt_nsw_cam;
	class ntf_hlm_ops_spr : rhsusf_opscore_paint_pelt_nsw_cam {
		author="Christiansen";
		scope = 2;
		scopeArsenal=2;
		displayName = "[NTF] Opscore SPR";
		hiddenSelectionsTextures[] =
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_Paint1_co.paa",
			"", // mic
			"", // strobe
			"", // camera
			"", // cover
			""
		};
	};

	class ntf_hlm_ops_pelt_spr : rhsusf_opscore_paint_pelt_nsw_cam {
		author="Christiansen";
		scope = 2;
		scopeArsenal=2;
		displayName = "[NTF] Opscore SPR (Headset)";
		hiddenSelectionsTextures[] =
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_Paint1_co.paa",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa", // mic
			"", // strobe
			"", // camera
			"", // cover
			""
		};
	};

	class ntf_hlm_ops_pelt_str_spr : rhsusf_opscore_paint_pelt_nsw_cam {
		author="Christiansen";
		scope = 2;
		scopeArsenal=2;
		displayName = "[NTF] Opscore SPR (Headset / Strobe)";
		hiddenSelectionsTextures[] =
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_Paint3_co.paa",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\nsw_co.paa", // strobe
			"", // camera
			"",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};

	class ntf_hlm_ops_pelt_str_cam_spr : rhsusf_opscore_paint_pelt_nsw_cam {
		author="Christiansen";
		scope = 2;
		scopeArsenal=2;
		displayName = "[NTF] Opscore SPR (Headset / Strobe / Camera)";
		hiddenSelectionsTextures[] =
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_Paint3_co.paa",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\nsw_co.paa", // strobe
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa", // camera
			"",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};

//========================================================================== SPC =================================================================================

	class rhsusf_spc_corpsman;
	class ntf_vest_spc_gm1 : rhsusf_spc_corpsman {
		author="Christiansen";
		scope=2;
		scopeArsenal = 2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="[NTF] SPC 1 (5.56)";
		picture="ntf_rhs\data\ntf_insignia.paa";
		hiddenSelectionsTextures[] = {
			"ntf_rhs\data\ntf_spc01.paa",
			"ntf_rhs\data\ntf_spc_gear1.paa",
			"ntf_rhs\data\ntf_spc_gear2.paa",
			"ntf_rhs\data\ntf_camelbak.paa"
		};
	};

	class rhsusf_spc_crewman;
	class ntf_vest_spc_vc : rhsusf_spc_crewman {
		author="Christiansen";
		scope=2;
		scopeArsenal = 2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="[NTF] SPC Lett 1 (5.56)";
		picture="ntf_rhs\data\ntf_insignia.paa";
		hiddenSelectionsTextures[] = {
			"ntf_rhs\data\ntf_spc01.paa",
			"ntf_rhs\data\ntf_spc_gear1.paa",
			"ntf_rhs\data\ntf_spc_gear2.paa",
			"ntf_rhs\data\ntf_camelbak.paa"
		};
	};

	class rhsusf_spc_light;
	class ntf_vest_spc_gm2 : rhsusf_spc_light {
		author="Christiansen";
		scope=2;
		scopeArsenal = 2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="[NTF] SPC 2 (5.56)";
		picture="ntf_rhs\data\ntf_insignia.paa";
		hiddenSelectionsTextures[] = {
			"ntf_rhs\data\ntf_spc01.paa",
			"ntf_rhs\data\ntf_spc_gear1.paa",
			"ntf_rhs\data\ntf_spc_gear2.paa",
			"ntf_rhs\data\ntf_camelbak.paa"
		};
	};

	class rhsusf_spc_marksman;
	class ntf_vest_spc_light : rhsusf_spc_marksman {
		author="Christiansen";
		scope=2;
		scopeArsenal = 2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="[NTF] SPC Lett 2 (5.56)";
		picture="ntf_rhs\data\ntf_insignia.paa";
		hiddenSelectionsTextures[] = {
			"ntf_rhs\data\ntf_spc01.paa",
			"ntf_rhs\data\ntf_spc_gear1.paa",
			"ntf_rhs\data\ntf_spc_gear2.paa",
			"ntf_rhs\data\ntf_camelbak.paa"
		};
	};

	class rhsusf_spc_mg;
	class ntf_vest_spc_gm3 : rhsusf_spc_mg {
		author="Christiansen";
		scope=2;
		scopeArsenal = 2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="[NTF] SPC 3 (5.56)";
		picture="ntf_rhs\data\ntf_insignia.paa";
		hiddenSelectionsTextures[] = {
			"ntf_rhs\data\ntf_spc01.paa",
			"ntf_rhs\data\ntf_spc_gear1.paa",
			"ntf_rhs\data\ntf_spc_gear2.paa",
			"ntf_rhs\data\ntf_camelbak.paa"
		};
	};

	class rhsusf_spc_squadleader;
	class ntf_vest_spc_lf1 : rhsusf_spc_squadleader {
		author="Christiansen";
		scope=2;
		scopeArsenal = 2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="[NTF] SPC 4 (5.56)";
		picture="ntf_rhs\data\ntf_insignia.paa";
		hiddenSelectionsTextures[] = {
			"ntf_rhs\data\ntf_spc01.paa",
			"ntf_rhs\data\ntf_spc_gear1.paa",
			"ntf_rhs\data\ntf_spc_gear2.paa",
			"ntf_rhs\data\ntf_camelbak.paa"
		};
	};


//========================================================================== MBAV =================================================================================

	class rhsusf_mbav_light;
	class ntf_vest_mbav_l : rhsusf_mbav_light {
		author="Christiansen";
		scope=2;
		scopeArsenal = 2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="[NTF] MBAV Lett (5.56)";
		picture="ntf_rhs\data\ntf_insignia.paa";
		hiddenSelectionsTextures[] = {
			"ntf_rhs\data\ntf_mbav.paa",
			"ntf_rhs\data\ntf_mbav_gear.paa"
		};
	};

	class rhsusf_mbav_rifleman;
	class ntf_vest_mbav_gm : rhsusf_mbav_rifleman {
		author="Christiansen";
		scope=2;
		scopeArsenal = 2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="[NTF] MBAV (5.56)";
		picture="ntf_rhs\data\ntf_insignia.paa";
		hiddenSelectionsTextures[] = {
			"ntf_rhs\data\ntf_mbav.paa",
			"ntf_rhs\data\ntf_mbav_gear.paa"
		};
	};

	class rhsusf_mbav_mg;
	class ntf_vest_mbav_mg : rhsusf_mbav_mg {
		author="Christiansen";
		scope=2;
		scopeArsenal = 2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="[NTF] MBAV (Box)";
		picture="ntf_rhs\data\ntf_insignia.paa";
		hiddenSelectionsTextures[] = {
			"ntf_rhs\data\ntf_mbav.paa",
			"ntf_rhs\data\ntf_mbav_gear.paa"
		};
	};

	class rhsusf_mbav_grenadier;
	class ntf_vest_mbav_gur : rhsusf_mbav_grenadier {
		author="Christiansen";
		scope=2;
		scopeArsenal = 2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="[NTF] MBAV (5.56+40mm)";
		picture="ntf_rhs\data\ntf_insignia.paa";
		hiddenSelectionsTextures[] = {
			"ntf_rhs\data\ntf_mbav.paa",
			"ntf_rhs\data\ntf_mbav_gear.paa"
		};
	};

	class rhsusf_mbav_medic;
	class ntf_vest_mbav_san : rhsusf_mbav_medic {
		author="Christiansen";
		scope=2;
		scopeArsenal = 2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="[NTF] MBAV Sanitet (5.56)";
		picture="ntf_rhs\data\ntf_insignia.paa";
		hiddenSelectionsTextures[] = {
			"ntf_rhs\data\ntf_mbav.paa",
			"ntf_rhs\data\ntf_mbav_gear.paa"
		};
	};

//========================================================================== HK416 =================================================================================

	class rhs_weap_hk416d145_m320;
	class ntf_weap_hk416_olive: rhs_weap_hk416d145_m320 {
		author="T. Andreassen";
		scope=2;
		scopeArsenal=2;
		displayName="HK416 D14.5 (M320 Woodland Grass)";
		baseWeapon="ntf_weap_hk416_olive";
		hiddenSelectionsTextures[]= {
			"\rhsusf\addons\rhsusf_weapons2\hk416\data\camo\wep_hk416d_1_grass_w_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa"
		};
	};

	class ntf_weap_hk416_olive2: rhs_weap_hk416d145_m320 {
		author="T. Andreassen";
		scope=2;
		scopeArsenal=2;
		displayName="HK416 D14.5 (M320 Woodland Net) ";
		baseWeapon="ntf_weap_hk416_olive2";
		hiddenSelectionsTextures[]= {
			"\rhsusf\addons\rhsusf_weapons2\hk416\data\camo\wep_hk416d_1_net_w_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa"
		};
	};

	class ntf_weap_hk416_sand: rhs_weap_hk416d145_m320 {
		author="T. Andreassen";
		scope=2;
		scopeArsenal=2;
		displayName="HK416 D14.5 (M320 Desert Grass)";
		baseWeapon="ntf_weap_hk416_sand";
		hiddenSelectionsTextures[]={
			"\rhsusf\addons\rhsusf_weapons2\hk416\data\camo\wep_hk416d_1_grass_d_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa"
		};
	};

	class ntf_weap_hk416_sand2: rhs_weap_hk416d145_m320 {
		author="T. Andreassen";
		scope=2;
		scopeArsenal=2;
		displayName="HK416 D14.5 (M320 Desert Net)";
		baseWeapon="ntf_weap_hk416_sand2";
		hiddenSelectionsTextures[]= {
			"\rhsusf\addons\rhsusf_weapons2\hk416\data\camo\wep_hk416d_1_net_d_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa"
		};
	};


//========================================================================== M249 S Para =================================================================================

	class Rifle;
	class Rifle_Base_F;

	class rhs_weap_m249_pip_S_para;
	class ntf_weap_m249_short : rhs_weap_m249_pip_S_para {
		author="Christiansen";
		scope=2;
		scopeArsenal=2;
		displayName="FN Minimi (Kort)";
		hiddenSelectionsTextures[]= {
			"ntf_rhs\data\ntf_weap_m249_reciever.paa",
			"ntf_rhs\data\ntf_weap_m249_body.paa",
			"ntf_rhs\data\ntf_weap_m249_barrelstock.paa",
			"rhsusf\addons\rhsusf_weapons2\m249\merged\data\ammobox_merged_co.paa",
			"ntf_rhs\data\ntf_weap_m249_stock.paa"
		};
		baseWeapon="ntf_weap_m249_short";
		rhs_grip1_change="ntf_weap_m249_short_vfg1";
		rhs_grip2_change="ntf_weap_m249_short_vfg2";
		rhs_grip3_change="ntf_weap_m249_short_vfg3";
		rhs_fold_checkOptic=0;
		rhs_fold="ntf_weap_m249_short_folded";
	};

	class ntf_weap_m249_short_vfg1: ntf_weap_m249_short
	{
		author="Christiansen";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm"
		};
		rhs_fold="rhs_weap_m249_pip_S_para_folded_vfg1";
	};

	class ntf_weap_m249_short_vfg2: ntf_weap_m249_short
	{
		author="Christiansen";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_VFG.rtm"
		};
		rhs_fold="rhs_weap_m249_pip_S_para_folded_vfg2";
	};

	class ntf_weap_m249_short_vfg3: ntf_weap_m249_short
	{
		author="Christiansen";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm"
		};
		rhs_fold="rhs_weap_m249_pip_S_para_folded_vfg3";
	};

	class ntf_weap_m249_short_folded: ntf_weap_m249_short
	{
		author="Christiansen";
		scope=1;
		model="\rhsusf\addons\rhsusf_weapons2\M249\merged\m249_pip_S_para_folded.p3d";
		recoil="rhs_recoil_m240";
		rhs_grip1_change="ntf_weap_m249_short_folded_vfg1";
		rhs_grip2_change="ntf_weap_m249_short_folded_vfg2";
		rhs_grip3_change="ntf_weap_m249_short_folded_vfg3";
		rhs_fold="ntf_weap_m249_short";
	};

	class ntf_weap_m249_short_folded_vfg1: ntf_weap_m249_short_folded
	{
		author="Christiansen";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm"
		};
		rhs_fold="ntf_weap_m249_short_vfg1";
	};

	class ntf_weap_m249_short_folded_vfg2: ntf_weap_m249_short_folded
	{
		author="Christiansen";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_VFG.rtm"
		};
		rhs_fold="ntf_weap_m249_short_vfg2";
	};

	class ntf_weap_m249_short_folded_vfg3: ntf_weap_m249_short_folded
	{
		author="Christiansen";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm"
		};
		rhs_fold="ntf_weap_m249_short_vfg3";
	};

//========================================================================== M249 L Para =================================================================================

	class rhs_weap_m249_pip_L_para;
	class ntf_weap_m249_long : rhs_weap_m249_pip_L_para {
		author="Christiansen";
		scope=2;
		scopeArsenal=2;
		displayName="FN Minimi (Lang)";
		hiddenSelectionsTextures[]= {
			"ntf_rhs\data\ntf_weap_m249_reciever.paa",
			"ntf_rhs\data\ntf_weap_m249_body.paa",
			"ntf_rhs\data\ntf_weap_m249_barrelstock.paa",
			"rhsusf\addons\rhsusf_weapons2\m249\merged\data\ammobox_merged_co.paa",
			"ntf_rhs\data\ntf_weap_m249_stock.paa"
		};
		baseWeapon="ntf_weap_m249_long";
		rhs_grip1_change="ntf_weap_m249_long_vfg1";
		rhs_grip2_change="ntf_weap_m249_long_vfg2";
		rhs_grip3_change="ntf_weap_m249_long_vfg3";
		rhs_fold_checkOptic=0;
		rhs_fold="ntf_weap_m249_long_folded";
	};

	class ntf_weap_m249_long_vfg1: ntf_weap_m249_long
	{
		author="Christiansen";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm"
		};
		rhs_fold="rhs_weap_m249_pip_S_para_folded_vfg1";
	};

	class ntf_weap_m249_long_vfg2: ntf_weap_m249_long
	{
		author="Christiansen";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_VFG.rtm"
		};
		rhs_fold="rhs_weap_m249_pip_S_para_folded_vfg2";
	};

	class ntf_weap_m249_long_vfg3: ntf_weap_m249_long
	{
		author="Christiansen";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm"
		};
		rhs_fold="rhs_weap_m249_pip_S_para_folded_vfg3";
	};

	class ntf_weap_m249_long_folded: ntf_weap_m249_long
	{
		author="Christiansen";
		scope=1;
		model="\rhsusf\addons\rhsusf_weapons2\M249\merged\m249_pip_S_para_folded.p3d";
		recoil="rhs_recoil_m240";
		rhs_grip1_change="ntf_weap_m249_long_folded_vfg1";
		rhs_grip2_change="ntf_weap_m249_long_folded_vfg2";
		rhs_grip3_change="ntf_weap_m249_long_folded_vfg3";
		rhs_fold="ntf_weap_m249_long";
	};

	class ntf_weap_m249_long_folded_vfg1: ntf_weap_m249_long_folded
	{
		author="Christiansen";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm"
		};
		rhs_fold="ntf_weap_m249_long_vfg1";
	};

	class ntf_weap_m249_long_folded_vfg2: ntf_weap_m249_long_folded
	{
		author="Christiansen";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_VFG.rtm"
		};
		rhs_fold="ntf_weap_m249_long_vfg2";
	};

	class ntf_weap_m249_long_folded_vfg3: ntf_weap_m249_long_folded
	{
		author="Christiansen";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm"
		};
		rhs_fold="ntf_weap_m249_long_vfg3";
	};

//========================================================================== RFK =================================================================================

	class rhs_weap_maaws;
	class ntf_weap_rfk: rhs_weap_maaws {
		author="Christiansen";
		scope=2;
		scopeArsenal=2;
		displayName="[NTF] Carl Gustav RFK";
		baseWeapon="ntf_weap_rfk";
		magazines[] = {"ntf_mag_rfk_HEAT","ntf_mag_rfk_HEDP","ntf_mag_rfk_HE"};
		magazineWell[] = {CBA_RFK};
		ace_overpressure_angle = 30;  // Cone in which the damage is applied (in degrees from the back end of the launcher)
        ace_overpressure_range = 8;  // Range in meters in which the damage is applied
        ace_overpressure_damage = 0.5;  // Damage multiplier
	};
};

//===========================================================================================================================================================
//========================================================================== cfgVehicles =================================================================================
//===========================================================================================================================================================

class CfgVehicles {
//========================================================================== C-130J Hercules =================================================================================

	class RHS_C130J;
	class ntf_c130j : RHS_C130J {
		scope = 2;
		faction = "NTF";
		side = 1;
		author = "Saetre";
		displayName = "C-130J Hercules";
		hiddenselectionstextures[] = {
			"ntf_rhs\data\ntf_c130j_ext.paa",
			"ntf_rhs\data\ntf_c130j_wings.paa"
		};
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"300Rnd_CMFlare_Chaff_Magazine", "300Rnd_CMFlare_Chaff_Magazine"};
	};

//========================================================================== BELL412 =================================================================================

	class RHS_UH1Y_UNARMED;
	class ntf_bell412_trans : RHS_UH1Y_UNARMED {
		scope = 2;
		scopeCurator = 2;
		faction = "NTF";
		side = 1;
		author = "Christiansen";
		displayName = "Bell 412 (Transport)";
		hiddenselectionstextures[] = {
			"ntf_rhs\data\ntf_412_ext.paa",
			"ntf_rhs\data\ntf_412_int.paa"
		};
		hiddenselectionsmaterials[] = {"ntf_rhs\data\ntf_412_ext.rvmat"};
		weapons[] = {"rhsusf_weap_CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};

		class AcreRacks {
		   class Rack_1 {
			   displayName = "LowerDash"; // Name is displayed in the interaction menu.
			   shortName = "dDash";
			   componentName = "ACRE_VRC103";
			   allowedPositions[] = {"driver", "copilot"}; // Who has access. "inside" - anyone inside, "external" - provides access upto 10m away, "driver", "gunner", "copilot", "commander"
			   disabledPositions[] = {};
			   defaultComponents[] = {};
			   mountedRadio = "ACRE_PRC117F";                 // Predefined mounted radio
			   isRadioRemovable = 0;
		   };
		   class Rack_2 {
			   displayName = "UpperDash"; // Name is displayed in the interaction menu.
			   shortName = "uDash";
			   componentName = "ACRE_VRC103";
			   allowedPositions[] = {"driver", "copilot"}; // Who has access. "inside" - anyone inside, "external" - provides access upto 10m away, "driver", "gunner", "copilot", "commander"
			   disabledPositions[] = {};
			   defaultComponents[] = {};
			   mountedRadio = "ACRE_PRC117F";                 // Predefined mounted radio
			   isRadioRemovable = 0;
		   };
		};

		class TransportMagazines {

		};
		class TransportItems {

		};
		class TransportWeapons {

		};
		class TransportBackpacks {

		};

		class PilotCamera {
			class OpticsIn {
				class Wide {
					opticsDisplayName="W";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov=0.5;
					minFov=0.5;
					maxFov=0.5;
					directionStabilized=1;
					visionMode[]= {
						"Normal",
						"NVG"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				};
				showMiniMapInOptics=0;
				showUAVViewpInOptics=0;
				showSlingLoadManagerInOptics=1;
			};
			minTurn=0;
			maxTurn=0;
			initTurn=0;
			minElev=80;
			maxElev=80;
			initElev=80;
			maxXRotSpeed=0.5;
			maxYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=0;
		};
		memoryPointDriverOptics="commanderview";
	};

	class RHS_UH1Y_d;
	class ntf_bell412_guns : RHS_UH1Y_d {
		scope = 2;
		scopeCurator = 2;
		faction = "NTF";
		side = 1;
		author = "Christiansen";
		displayName = "Bell 412 (Ildstotte)";
		hiddenselectionstextures[] = {
			"ntf_rhs\data\ntf_412_ext.paa",
			"ntf_rhs\data\ntf_412_int.paa"
		};
		hiddenselectionsmaterials[] = {"ntf_rhs\data\ntf_412_ext.rvmat"};

		class AcreRacks {
		   class Rack_1 {
			   displayName = "LowerDash"; // Name is displayed in the interaction menu.
			   shortName = "dDash";
			   componentName = "ACRE_VRC103";
			   allowedPositions[] = {"driver", "copilot"}; // Who has access. "inside" - anyone inside, "external" - provides access upto 10m away, "driver", "gunner", "copilot", "commander"
			   disabledPositions[] = {};
			   defaultComponents[] = {};
			   mountedRadio = "ACRE_PRC117F";                 // Predefined mounted radio
			   isRadioRemovable = 0;
		   };
		   class Rack_2 {
			   displayName = "UpperDash"; // Name is displayed in the interaction menu.
			   shortName = "uDash";
			   componentName = "ACRE_VRC103";
			   allowedPositions[] = {"driver", "copilot"}; // Who has access. "inside" - anyone inside, "external" - provides access upto 10m away, "driver", "gunner", "copilot", "commander"
			   disabledPositions[] = {};
			   defaultComponents[] = {};
			   mountedRadio = "ACRE_PRC117F";                 // Predefined mounted radio
			   isRadioRemovable = 0;
		   };
		};

		class TransportMagazines {

		};
		class TransportItems {

		};
		class TransportWeapons {

		};
		class TransportBackpacks {

		};

		class PilotCamera {
			class OpticsIn {
				class Wide {
					opticsDisplayName="W";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov=0.5;
					minFov=0.5;
					maxFov=0.5;
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				};
				showMiniMapInOptics=0;
				showUAVViewpInOptics=0;
				showSlingLoadManagerInOptics=1;
			};
			minTurn=0;
			maxTurn=0;
			initTurn=0;
			minElev=80;
			maxElev=80;
			initElev=80;
			maxXRotSpeed=0.5;
			maxYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=0;
		};
		memoryPointDriverOptics="commanderview";
	};

//========================================================================== M113 =================================================================================

	class rhsusf_m113_usarmy_supply;
    class ntf_m113_std_wdl : rhsusf_m113_usarmy_supply {
		scope = 2;
		scopeCurator = 2;
		faction = "NTF";
		side = 1;
		author = "Christiansen";
		displayName = "M113 (Skog)";
		hiddenselectionstextures[] = {
			"ntf_rhs\data\ntf_m113_wdl_ext1.paa",
			"ntf_rhs\data\ntf_m113_wdl_ext2.paa",
			"ntf_rhs\data\ntf_m113_wdl_whl.paa",
			"ntf_rhs\data\ntf_m113_wdl_int3.paa",
			"ntf_rhs\data\ntf_m23_wdl.paa"
		};
		weapons[] = {"TruckHorn2", "SmokeLauncher"};
		magazines[] = {"SmokeLauncherMag"};
		ace_cargo_space = 5;
		ace_cargo_hasCargo = 1;
	};

    class rhsusf_m113d_usarmy_supply;
    class ntf_m113_std_des : rhsusf_m113d_usarmy_supply {
		scope = 2;
		scopeCurator = 2;
		faction = "NTF";
		side = 1;
		author = "Christiansen";
		displayName = "M113 (Sand)";
		hiddenselectionstextures[] = {
			"ntf_rhs\data\ntf_m113_des_ext1.paa",
			"ntf_rhs\data\ntf_m113_des_ext2.paa",
			"ntf_rhs\data\ntf_m113_des_whl.paa",
			"ntf_rhs\data\ntf_m113_des_int3.paa",
			"ntf_rhs\data\ntf_m23_des.paa"
		};
		weapons[] = {"TruckHorn2", "SmokeLauncher"};
		magazines[] = {"SmokeLauncherMag"};
		ace_cargo_space = 5;
		ace_cargo_hasCargo = 1;
	};

    class rhsusf_m113_usarmy_unarmed;
    class ntf_m113_ko_wdl : rhsusf_m113_usarmy_unarmed {
		scope = 2;
		scopeCurator = 2;
		faction = "NTF";
		side = 1;
		author = "Christiansen";
		displayName = "M113 Kommando (Skog)";
		hiddenselectionstextures[] = {
			"ntf_rhs\data\ntf_m113_wdl_ext1L.paa",
			"ntf_rhs\data\ntf_m113_wdl_ext2.paa",
			"ntf_rhs\data\ntf_m113_wdl_whl.paa",
			"ntf_rhs\data\ntf_m113_wdl_int3.paa",
			"ntf_rhs\data\ntf_m23_wdl.paa"
		};
		weapons[] = {"TruckHorn2", "SmokeLauncher"};
		magazines[] = {"SmokeLauncherMag"};
		ace_cargo_space = 5;
		ace_cargo_hasCargo = 1;
	};

    class rhsusf_m113d_usarmy_unarmed;
    class ntf_m113_ko_des : rhsusf_m113d_usarmy_unarmed {
		scope = 2;
		scopeCurator = 2;
		faction = "NTF";
		side = 1;
		author = "Christiansen";
		displayName = "M113 Kommando (Sand)";
		hiddenselectionstextures[] = {
			"ntf_rhs\data\ntf_m113_des_ext1L.paa",
			"ntf_rhs\data\ntf_m113_des_ext2.paa",
			"ntf_rhs\data\ntf_m113_des_whl.paa",
			"ntf_rhs\data\ntf_m113_des_int3.paa",
			"ntf_rhs\data\ntf_m23_des.paa"
		};
		weapons[] = {"TruckHorn2", "SmokeLauncher"};
		magazines[] = {"SmokeLauncherMag"};
		ace_cargo_space = 5;
		ace_cargo_hasCargo = 1;
	};

    class rhsusf_m113_usarmy_medical;
    class ntf_m113_med_wdl : rhsusf_m113_usarmy_medical {
		scope = 2;
		scopeCurator = 2;
		faction = "NTF";
		side = 1;
		author = "Christiansen";
		displayName = "M113 Sanitet (Skog)";
		hiddenselectionstextures[] = {
			"ntf_rhs\data\ntf_m113_med_wdl_ext1.paa",
			"ntf_rhs\data\ntf_m113_wdl_ext2.paa",
			"ntf_rhs\data\ntf_m113_wdl_whl.paa",
			"ntf_rhs\data\ntf_m113_wdl_int3.paa",
			"ntf_rhs\data\ntf_m23_wdl.paa"
		};
		weapons[] = {"TruckHorn2", "SmokeLauncher"};
		magazines[] = {"SmokeLauncherMag"};
		ace_cargo_space = 5;
		ace_cargo_hasCargo = 1;
	};

    class rhsusf_m113d_usarmy_medical;
    class ntf_m113_med_des : rhsusf_m113d_usarmy_medical {
		faction = "NTF";
		side = 1;
		author = "Christiansen";
		displayName = "M113 Sanitet (Sand)";
		hiddenselectionstextures[] = {
			"ntf_rhs\data\ntf_m113_med_des_ext1.paa",
			"ntf_rhs\data\ntf_m113_des_ext2.paa",
			"ntf_rhs\data\ntf_m113_des_whl.paa",
			"ntf_rhs\data\ntf_m113_des_int3.paa",
			"ntf_rhs\data\ntf_m23_des.paa"
		};
		weapons[] = {"TruckHorn2", "SmokeLauncher"};
		magazines[] = {"SmokeLauncherMag"};
		ace_cargo_space = 5;
		ace_cargo_hasCargo = 1;
	};

//========================================================================== UMBTS =================================================================================

	class B_AssaultPack_Base;

	class rhs_assault_umbts;
	class ntf_pack_stridssekk_wdl : rhs_assault_umbts {
		scope = 2;
		author = "Christiansen";
		model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_assault_umtbs";
		picture = "";
		displayName = "[NTF] Stridssekk (Skog)";
		hiddenSelectionsTextures[] = {"ntf_rhs\data\ntf_pack_stridssekk_wdl.paa"};
		maximumLoad = 140;
		mass = 20;
	};

	class ntf_pack_stridssekk_ing_wdl : rhs_assault_umbts {
		scope = 2;
		author = "Christiansen";
		model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_assault_umtbs_engineer";
		picture = "";
		displayName = "[NTF] Stridssekk ING (Skog)";
		hiddenSelectionsTextures[] = {"ntf_rhs\data\ntf_pack_stridssekk_wdl.paa"};
		maximumLoad = 140;
		mass = 20;
	};

	class ntf_pack_stridssekk_des : rhs_assault_umbts {
		scope = 2;
		author = "Christiansen";
		model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_assault_umtbs";
		picture = "";
		displayName = "[NTF] Stridssekk (Sand)";
		hiddenSelectionsTextures[] = {"ntf_rhs\data\ntf_pack_stridssekk_des.paa"};
		maximumLoad = 140;
		mass = 20;
	};

	class ntf_pack_stridssekk_ing_des : rhs_assault_umbts {
		scope = 2;
		author = "Christiansen";
		model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_assault_umtbs_engineer";
		picture = "";
		displayName = "[NTF] Stridssekk ING (Sand)";
		hiddenSelectionsTextures[] = {"ntf_rhs\data\ntf_pack_stridssekk_des.paa"};
		maximumLoad = 140;
		mass = 20;
	};

};