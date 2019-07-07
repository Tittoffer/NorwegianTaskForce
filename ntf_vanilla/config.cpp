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
	class ntf_vanilla {
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Weapons_F",
			"A3_Characters_F",
			"A3_Supplies_F_Exp_Ammoboxes",
			"A3_Weapons_F_Ammoboxes",
			"A3_Structures_F_Mil_Flags",
			"A3_Soft_F_Beta_Truck_01",
			"A3_Soft_F_Gamma_Truck_01",
			"A3_Soft_F_Beta_Truck_02",
			"A3_Soft_F_Gamma_Truck_02",
			"A3_Armor_F_EPB_APC_Tracked_03",
			"I_APC_tracked_03_cannon_F"
		};
		units[] = {
			"ntf_cv90_wdl_vik",
			"ntf_cv90_des_vik",
			"ntf_cv90_wdl_vet",
			"ntf_cv90_des_vet",
			"ntf_log_trans_wdl",
			"ntf_log_trans_des",
			"ntf_log_fuel_wdl",
			"ntf_log_fuel_des",
			"ntf_log_med_wdl",
			"ntf_log_med_des",
			"ntf_flag_nor_grn",
			"ntf_flag_nor_gray",
			"ntf_flag_ntf_grn",
			"ntf_flag_ntf_gray",
			"ntf_ammobox_heavy_wood",
			"ntf_ammobox_light_wood"
		};
	};
};

//===========================================================================================================================================================
//========================================================================== FactionClass =================================================================================
//===========================================================================================================================================================

 class cfgFactionClasses {
    class NTF {
        displayName = "Norwegian Task Force";
        author = "NTF_Saetre";
        icon = "\ntf_vanilla\data\ntf_insignia.paa";
        priority = 1;
        side = 1;
    };
};


//===========================================================================================================================================================
//========================================================================== Ammo =================================================================================
//===========================================================================================================================================================

class CfgAmmo {
	class B_30mm_MP_Tracer_Yellow;
	class NTF_30mm_MP_Tracer_Yellow : B_30mm_MP_Tracer_Yellow {
	indirectHit = 8;
	indirectHitRange = 2;
	};
};

class CfgMagazines {
	class 140Rnd_30mm_MP_shells_Tracer_Yellow;
	class NTF_80Rnd_30mm_MP_shells_Tracer_Yellow : 140Rnd_30mm_MP_shells_Tracer_Yellow {
		ammo="NTF_30mm_MP_Tracer_Yellow";
		count=80;
	};

	class 60Rnd_30mm_APFSDS_shells_Tracer_Yellow;
	class NTF_80Rnd_30mm_APFSDS_shells_Tracer_Yellow : 60Rnd_30mm_APFSDS_shells_Tracer_Yellow {
		count = 80;
	};
};

//===================================================================================================================================================================
//========================================================================== WEAPONS =================================================================================
//===================================================================================================================================================================

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class cfgWeapons {

//========================================================================== Beret =================================================================================

	class H_Beret_Colonel;
	class ntf_ber_std_grn : H_Beret_Colonel {
		author = "Christiansen";
		scope = 2;
		scopeArsenal = 2;
		displayName= "[NTF] Beret - Infanteri (Gronn)";
		picture="\ntf_vanilla\data\ntf_insignia.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelectionsTextures[] = {"\ntf_vanilla\data\ntf_ber_std_grn.paa"};
		hiddenSelectionsMaterials[] = {"\ntf_vanilla\data\ntf_ber_nohq.paa"};
    };

	class ntf_ber_int_blk : H_Beret_Colonel {
		author = "Christiansen";
		scope = 2;
		scopeArsenal = 2;
		displayName= "[NTF] Beret - Etterretning (Svart)";
		picture="\ntf_vanilla\data\ntf_insignia.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelectionsTextures[] = {"\ntf_vanilla\data\ntf_ber_int_blk.paa"};
		hiddenSelectionsMaterials[] = {"\ntf_vanilla\data\ntf_ber_nohq.paa"};
    };

	class ntf_ber_spes_red : H_Beret_Colonel {
		author = "Christiansen";
		scope = 2;
		scopeArsenal = 2;
		displayName= "[NTF] Beret - Spesialist (Vinrod)";
		picture="\ntf_vanilla\data\ntf_insignia.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelectionsTextures[] = {"\ntf_vanilla\data\ntf_ber_spes_red.paa"};
		hiddenSelectionsMaterials[] = {"\ntf_vanilla\data\ntf_ber_nohq.paa"};
    };

	class ntf_ber_cav_blk : H_Beret_Colonel {
		author = "Christiansen";
		scope = 2;
		scopeArsenal = 2;
		displayName= "[NTF] Beret - Kavaleri (Svart)";
		picture="\ntf_vanilla\data\ntf_insignia.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelectionsTextures[] = {"\ntf_vanilla\data\ntf_ber_cav_blk.paa"};
		hiddenSelectionsMaterials[] = {"\ntf_vanilla\data\ntf_ber_nohq.paa"};
    };

	class ntf_ber_ing_blue : H_Beret_Colonel {
		author = "Christiansen";
		scope = 2;
		scopeArsenal = 2;
		displayName= "[NTF] Beret - Ingenior (Bla)";
		picture="\ntf_vanilla\data\ntf_insignia.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelectionsTextures[] = {"\ntf_vanilla\data\ntf_ber_ing_blue.paa"};
		hiddenSelectionsMaterials[] = {"\ntf_vanilla\data\ntf_ber_nohq.paa"};
    };

	class ntf_ber_san_grn : H_Beret_Colonel {
	    author = "Christiansen";
	    scope = 2;
		scopeArsenal = 2;
	    displayName= "[NTF] Beret - Sanitet (Gronn)";
		picture="\ntf_vanilla\data\ntf_insignia.paa";
	    model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
	    hiddenSelectionsTextures[] = {"\ntf_vanilla\data\ntf_ber_san_grn.paa"};
		hiddenSelectionsMaterials[] = {"\ntf_vanilla\data\ntf_ber_nohq.paa"};
    };

//========================================================================== Uniform (cfgweapons) ============================================================================

	class UniformItem;

	class U_C_Scientist;
	class ntf_uni_crew_wdl : U_C_Scientist {
		scope = 2;
		scopeArsenal = 2;
		author = "Christiansen";
		picture="\ntf_vanilla\data\ntf_insignia.paa";
		displayName= "[NTF] Kampvogndress (Skog)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelectionsTextures[] = {"\ntf_vanilla\data\ntf_uni_crew_wdl.paa"};
		hiddenSelectionsMaterials[] = {"\ntf_vanilla\data\ntf_uni.rvmat"};

		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "ntf_uni_crew_wdl"; //would be same as our made soldier class
			containerClass = "Supply40"; //how much it can carry
			mass = 1; //how much it weights
		};
	};

	class ntf_uni_crew_tan : U_C_Scientist {
		scope = 2;
		scopeArsenal = 2;
		author = "Christiansen";
		picture="\ntf_vanilla\data\ntf_insignia.paa";
		displayName= "[NTF] Kampvogndress (Sand)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelectionsTextures[] = {"\ntf_vanilla\data\ntf_uni_crew_tan.paa"};
		hiddenSelectionsMaterials[] = {"\ntf_vanilla\data\ntf_uni.rvmat"};

		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "ntf_uni_crew_tan"; //would be same as our made soldier class
			containerClass = "Supply40"; //how much it can carry
			mass = 1; //how much it weights
		};
	};

	class ntf_uni_heli : U_C_Scientist {
		scope = 2;
		scopeArsenal = 2;
		author = "Christiansen";
		picture="\ntf_vanilla\data\ntf_insignia.paa";
		displayName= "[NTF] Helikopter Uniform";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelectionsTextures[] = {"\ntf_vanilla\data\ntf_uni_heli.paa"};
		hiddenSelectionsMaterials[] = {"\ntf_vanilla\data\ntf_heli.rvmat"};

		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "ntf_uni_heli"; //would be same as our made soldier class
			containerClass = "Supply80"; //how much it can carry
			mass = 1; //how much it weights
		};
	};

	class U_I_pilotCoveralls ;
	class ntf_uni_pilot : U_I_pilotCoveralls {
		scope = 2;
		scopeArsenal = 2;
		author = "Christiansen";
		picture="\ntf_vanilla\data\ntf_insignia.paa";
		displayName= "[NTF] Pilot Uniform";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo : UniformItem {
				uniformModel = "-";
				uniformClass = "ntf_uni_pilot"; //would be same as our made soldier class
				containerClass = "Supply80"; //how much it can carry
				mass = 1; //how much it weights
		};
	};
};

//================================================================================================================================================================================
//========================================================================== CFGVEHICLES ======================================================================================================
//================================================================================================================================================================================
class CfgVehicles {
//========================================================================== Uniform (cfgVehicles) ======================================================================

	class C_scientist_F;
	class ntf_uni_crew_wdl : C_scientist_F {
        scope = 1;
        displayName= "[NTF] Kampvogndress (Skog)";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "ntf_uni_crew_wdl"; //the uniform item
        hiddenSelections[] = {"Camo", "Insignia"};
        hiddenSelectionsTextures[] = {"\ntf_vanilla\data\ntf_uni_crew_wdl.paa"};
		hiddenSelectionsMaterials[] = {"\ntf_vanilla\data\ntf_uni.rvmat"};
    };

	class ntf_uni_crew_tan : C_scientist_F {
        scope = 1;
        displayName= "[NTF] Kampvogndress (Sand)";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "ntf_uni_crew_tan"; //the uniform item
        hiddenSelections[] = {"Camo", "Insignia"};
        hiddenSelectionsTextures[] = {"\ntf_vanilla\data\ntf_uni_crew_tan.paa"};
		hiddenSelectionsMaterials[] = {"\ntf_vanilla\data\ntf_uni.rvmat"};
    };

	class ntf_uni_heli : C_scientist_F {
		scope = 1;
		displayName= "[NTF] Helikopter Uniform";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "ntf_uni_heli"; //the uniform item
		hiddenSelections[] = {"Camo", "Insignia"};
		hiddenSelectionsTextures[] = {"\ntf_vanilla\data\ntf_uni_heli.paa"};
		hiddenSelectionsMaterials[] = {"\ntf_vanilla\data\ntf_uni.rvmat"};
    };

	class I_pilot_F ;
	class ntf_uni_pilot : I_pilot_F {
		scope = 1;
		displayName= "[NTF] Pilot Uniform";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "ntf_uni_pilot"; //the uniform item
		hiddenSelections[] = {"Camo", "Insignia"};
		ACE_GForceCoef = 0.25;
	};

//============================================================== Stridssekk =============================================================================================

	class B_Kitbag_rgr;
	class ntf_pack_stridssekk_san_wdl: B_Kitbag_rgr {
        author = "Christiansen";
        scope = 2;
		scopeArsenal = 2;
        displayName= "[NTF] Stridssekk Sanitet (Skog)";
		picture="\ntf_vanilla\data\ntf_insignia.paa";
        hiddenSelectionsTextures[]={"\ntf_vanilla\data\ntf_stridssekk_wdl_san.paa"};
    };

    class ntf_pack_stridssekk_wdl: B_Kitbag_rgr {
        author = "Christiansen";
        scope = 2;
		scopeArsenal = 2;
        displayName= "[NTF] Stridssekk (Skog)";
		picture="\ntf_vanilla\data\ntf_insignia.paa";
        hiddenSelectionsTextures[]={"\ntf_vanilla\data\ntf_stridssekk_wdl.paa"};
    };

	class B_Kitbag_cbr;
	class ntf_pack_stridssekk_san_des: B_Kitbag_cbr {
        author = "Christiansen";
        scope = 2;
		scopeArsenal = 2;
        displayName= "[NTF] Stridssekk Sanitet (Sand)";
		picture="\ntf_vanilla\data\ntf_insignia.paa";
        hiddenSelectionsTextures[]={"\ntf_vanilla\data\ntf_stridssekk_des_san.paa"};
    };

    class ntf_pack_stridssekk_des: B_Kitbag_cbr {
        author = "Christiansen";
        scope = 2;
		scopeArsenal = 2;
        displayName= "[NTF] Stridssekk (Sand)";
		picture="\ntf_vanilla\data\ntf_insignia.paa";
        hiddenSelectionsTextures[]={"\ntf_vanilla\data\ntf_stridssekk_des.paa"};
    };

//=================================================================== Patruljesekk ================================================================================================

	class B_AssaultPack_rgr;
	class ntf_pack_patsekk_wdl: B_AssaultPack_rgr {
        author = "Christiansen";
        scope = 2;
		scopeArsenal = 2;
        displayName= "[NTF] Patruljesekk (Gronn)";
		picture="\ntf_vanilla\data\ntf_insignia.paa";
        hiddenSelectionsTextures[]={"\ntf_vanilla\data\ntf_patsekk_wdl.paa"};
			maximumLoad = 200;
    };

	class ntf_pack_patsekk_san_wdl: B_AssaultPack_rgr {
		author = "Christiansen";
		scope = 2;
		scopeArsenal = 2;
		displayName= "[NTF] Patruljesekk Sanitet (Gronn)";
		picture="\ntf_vanilla\data\ntf_insignia.paa";
		hiddenSelectionsTextures[]={"\ntf_vanilla\data\ntf_patsekk_wdl_san.paa"};
			maximumLoad = 200;
    };

	class ntf_pack_patsekk_wdl2: B_AssaultPack_rgr {
        author = "Christiansen";
        scope = 2;
		scopeArsenal = 2;
        displayName= "[NTF] Patruljesekk (Skog)";
		picture="\ntf_vanilla\data\ntf_insignia.paa";
        hiddenSelectionsTextures[]={"\ntf_vanilla\data\ntf_patsekk_wdl2.paa"};
			maximumLoad = 200;
    };

	class ntf_pack_patsekk_san_wdl2: B_AssaultPack_rgr {
		author = "Christiansen";
		scope = 2;
		scopeArsenal = 2;
		displayName= "[NTF] Patruljesekk Sanitet (Skog)";
		picture="\ntf_vanilla\data\ntf_insignia.paa";
		hiddenSelectionsTextures[]={"\ntf_vanilla\data\ntf_patsekk_wdl2_san.paa"};
			maximumLoad = 200;
    };

	class B_AssaultPack_cbr;
	class ntf_pack_patsekk_des : B_AssaultPack_cbr {
		author = "Christiansen";
		scope = 2;
		scopeArsenal = 2;
		displayName= "[NTF] Patruljesekk (Sand)";
		picture="\ntf_vanilla\data\ntf_insignia.paa";
		hiddenSelectionsTextures[]={"\ntf_vanilla\data\ntf_patsekk_des.paa"};
		maximumLoad = 200;
	};

	class ntf_pack_patsekk_san_des : B_AssaultPack_cbr {
		author = "Christiansen";
		scope = 2;
		scopeArsenal = 2;
		displayName= "[NTF] Patruljesekk (Sand)";
		picture="\ntf_vanilla\data\ntf_insignia.paa";
		hiddenSelectionsTextures[]={"\ntf_vanilla\data\ntf_patsekk_des_san.paa"};
		maximumLoad = 200;
	};

//==================================================================== Storsekk ===============================================================================================

	class B_Carryall_cbr;
	class ntf_pack_storsekk_des: B_Carryall_cbr {
        author = "Henriksen";
        scope = 2;
		scopeArsenal = 2;
		model="A3\weapons_f\Ammoboxes\Bags\Backpack_Tortila.p3d";
        displayName= "[NTF] Storsekk (Sand)";
		picture="\ntf_vanilla\data\ntf_insignia.paa";
        hiddenSelectionsTextures[]={"\ntf_vanilla\data\ntf_storsekk_des.paa"};
		maximumLoad = 400;
    };

	class ntf_pack_storsekk_san_des: B_Carryall_cbr {
        author = "Henriksen";
        scope = 2;
		scopeArsenal = 2;
		model="A3\weapons_f\Ammoboxes\Bags\Backpack_Tortila.p3d";
        displayName= "[NTF] Storsekk Sanitet (Sand)";
		picture="\ntf_vanilla\data\ntf_insignia.paa";
        hiddenSelectionsTextures[]={"\ntf_vanilla\data\ntf_storsekk_des_san.paa"};
		maximumLoad = 400;
    };

	class ntf_pack_storsekk_wdl: B_Carryall_cbr {
        author = "Henriksen";
        scope = 2;
		scopeArsenal = 2;
		model="A3\weapons_f\Ammoboxes\Bags\Backpack_Tortila.p3d";
        displayName= "[NTF] Storsekk (Skog)";
		picture="\ntf_vanilla\data\ntf_insignia.paa";
        hiddenSelectionsTextures[]={"\ntf_vanilla\data\ntf_storsekk_wdl.paa"};
		maximumLoad = 400;
    };

	class ntf_pack_storsekk_san_wdl: B_Carryall_cbr {
        author = "Henriksen";
        scope = 2;
		scopeArsenal = 2;
		model="A3\weapons_f\Ammoboxes\Bags\Backpack_Tortila.p3d";
        displayName= "[NTF] Storsekk Sanitet (Skog)";
		picture="\ntf_vanilla\data\ntf_insignia.paa";
        hiddenSelectionsTextures[]={"\ntf_vanilla\data\ntf_storsekk_wdl_san.paa"};
		maximumLoad = 400;
    };

//=========================================================================== Forsyningskasse ===============================================================

	class Box_Syndicate_WpsLaunch_F;
	class ntf_ammobox_heavy_wood: Box_Syndicate_WpsLaunch_F {
		displayName = "[NTF] Forsyningskasse (tung)";
		picture="\ntf_vanilla\data\ntf_insignia.paa";
		transportMaxWeapons = 25;
		transportMaxMagazines = 250;
		class TransportBackpacks {
			class _xx_ntf_pack_patsekk_des {
				magazine = "ntf_pack_patsekk_des";
				count = 1;
			};

			class _xx_ntf_pack_patsekk_wdl {
				magazine = "ntf_pack_patsekk_wdl";
				count = 1;
			};
		};
		class TransportWeapons {

		};

		class TransportMagazines {
			class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count = 50;
			};

			class _xx_rhsusf_mag_17Rnd_9x19_FMJ {
				magazine = "rhsusf_mag_17Rnd_9x19_FMJ";
				count = 8;
			};

			class _xx_rhs_200rnd_556x45_M_SAW {
				magazine = "rhs_200rnd_556x45_M_SAW";
				count = 15;
			};

			class _xx_SmokeShell {
				magazine = "SmokeShell";
				count = 16;
			};

			class _xx_rhs_mag_mk84 {
				magazine = "rhs_mag_mk84";
				count = 16;
			};

			class _xx_rhs_mag_m67 {
				magazine = "rhs_mag_m67";
				count = 16;
			};

			class _xx_rhs_mag_M441_HE {
				magazine = "rhs_mag_M441_HE";
				count = 25;
			};

			class _xx_rhs_mag_m715_Green {
				magazine = "rhs_mag_m715_Green";
				count = 4;
			};

			class _xx_rhs_mag_m713_Red {
				magazine = "rhs_mag_m713_Red";
				count = 4;
			};

			class _xx_rhs_mag_m662_red {
				magazine = "rhs_mag_m662_red";
				count = 4;
			};

			class _xx_rhs_mag_maaws_HEAT {
				magazine = "rhs_mag_maaws_HEAT";
				count = 6;
			};

			class _xx_rhs_mag_maaws_HE {
				magazine = "rhs_mag_maaws_HE";
				count = 6;
			};
		};

		class TransportItems {
			class _xx_Chemlight_green {
				name = "Chemlight_green";
				count = 10;
			};

			class _xx_B_IR_Grenade {
				name = "B_IR_Grenade";
				count = 5;
			};

			class _xx_ACE_EarPlugs {
				name = "ACE_EarPlugs";
				count = 4;
			};

			class _xx_ACE_epinephrine {
				name = "ACE_epinephrine";
				count = 16;
			};

			class _xx_ACE_morphine {
				name = "ACE_morphine";
				count = 16;
			};

			class _xx_ACE_quikclot {
				name = "ACE_quikclot";
				count = 40;
			};

			class _xx_ACE_packingBandage {
				name = "ACE_packingBandage";
				count = 40;
			};

			class _xx_ACE_tourniquet {
				name = "ACE_tourniquet";
				count = 16;
			};

			class _xx_ACE_elasticBandage {
				name = "ACE_elasticBandage";
				count = 16;
			};

			class _xx_adv_aceSplint_splint {
				name = "adv_aceSplint_splint";
				count = 8;
			};

			class _xx_ACE_plasmaIV {
				name = "ACE_plasmaIV";
				count = 4;
			};
		};
	};

	class Box_Syndicate_Ammo_F;
	class ntf_ammobox_light_wood: Box_Syndicate_Ammo_F {
		displayName = "[NTF] Forsyningskasse (lett)";
		picture="\ntf_vanilla\data\ntf_insignia.paa";
		transportMaxWeapons = 25;
		transportMaxMagazines = 250;
		class TransportWeapons {

		};
		class TransportMagazines {
			class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count = 40;
			};

			class _xx_rhs_200rnd_556x45_M_SAW {
				magazine = "rhs_200rnd_556x45_M_SAW";
				count = 10;
			};

			class _xx_SmokeShell {
				magazine = "SmokeShell";
				count = 16;
			};

			class _xx_SmokeShellBlue {
				magazine = "SmokeShellBlue";
				count = 4;
			};

			class _xx_SmokeShellRed {
				magazine = "SmokeShellRed";
				count = 4;
			};

			class _xx_rhs_mag_mk84 {
				magazine = "rhs_mag_mk84";
				count = 16;
			};

			class _xx_rhs_mag_m67 {
				magazine = "rhs_mag_m67";
				count = 16;
			};

			class _xx_rhs_mag_M441_HE {
				magazine = "rhs_mag_M441_HE";
				count = 24;
			};

			class _xx_rhs_mag_m715_Green {
				magazine = "rhs_mag_m715_Green";
				count = 4;
			};

			class _xx_rhs_mag_m713_Red {
				magazine = "rhs_mag_m713_Red";
				count = 4;
			};

			class _xx_rhs_mag_m662_red {
				magazine = "rhs_mag_m662_red";
				count = 8;
			};
		};

		class TransportItems {
			class _xx_ACE_epinephrine {
				name = "ACE_epinephrine";
				count = 16;
			};

			class _xx_ACE_morphine {
				name = "ACE_morphine";
				count = 16;
			};

			class _xx_ACE_quikclot {
				name = "ACE_quikclot";
				count = 40;
			};

			class _xx_ACE_packingBandage {
				name = "ACE_packingBandage";
				count = 40;
			};

			class _xx_ACE_tourniquet {
				name = "ACE_tourniquet";
				count = 16;
			};

			class _xx_ACE_elasticBandage {
				name = "ACE_elasticBandage";
				count = 16;
			};

			class _xx_adv_aceSplint_splint {
				name = "adv_aceSplint_splint";
				count = 8;
			};
		};
	};

//=============================================================================== Flagg =======================================================================================

	class FlagCarrier;
	class Flag_NATO_F;
	class ntf_flag_nor_grn : Flag_NATO_F {
		author = "Christiansen";
		editorPreview = "-";
		_generalMacro = "ntf_flag_nor_grn";
		scope = 2;
		scopeCurator = 2;
		displayName = "Flag (Norway - Green)";
		class EventHandlers {
			init="(_this select 0) setFlagTexture '\ntf_vanilla\data\ntf_flag_nor.paa'";
		};
	};

	class ntf_flag_ntf_grn : Flag_NATO_F {
		author = "Christiansen";
		editorPreview = "-";
		_generalMacro = "ntf_flag_ntf_grn";
		scope = 2;
		scopeCurator = 2;
		displayName = "Flag (NTF- Green)";
		class EventHandlers {
			init="(_this select 0) setFlagTexture '\ntf_vanilla\data\ntf_flag_ntf.paa'";
		};
	};

	class Flag_UK_F;
	class ntf_flag_nor_gray : Flag_UK_F {
		author = "Christiansen";
		editorPreview = "-";
		_generalMacro = "ntf_flag_nor_gray";
		scope = 2;
		scopeCurator = 2;
		displayName = "Flag (Norway - Gray)";
		class EventHandlers {
			init="(_this select 0) setFlagTexture '\ntf_vanilla\data\ntf_flag_nor.paa'";
		};
	};

	class ntf_flag_ntf_gray : Flag_UK_F {
		author = "Christiansen";
		editorPreview = "-";
		_generalMacro = "ntf_flag_ntf_gray";
		scope = 2;
		scopeCurator = 2;
		displayName = "Flag (NTF- Gray)";
		class EventHandlers {
			init="(_this select 0) setFlagTexture '\ntf_vanilla\data\ntf_flag_ntf.paa'";
		};
	};

// ================================================================================ Scania =========================================================================

	class I_Truck_02_covered_F;
	class NTF_log_trans_wdl : I_Truck_02_covered_F {
		scope = 2;
		faction = "NTF";
		side = 1;
		author = "Christiansen";
		displayName = "Scania 93M Transport (Skog)";
		hiddenselectionstextures[] = {"\ntf_vanilla\data\ntf_log_wdl_front.paa", "\ntf_vanilla\data\ntf_log_wdl_can.paa", "\ntf_vanilla\data\ntf_log_int.paa"};
		weapons[] = {"TruckHorn2"};
		magazines[] = {};
	};

	class NTF_log_trans_des : I_Truck_02_covered_F {
		scope = 2;
		faction = "NTF";
		side = 1;
		author = "Christiansen";
		displayName = "Scania 93M Transport (Sand)";
		hiddenselectionstextures[] = {"\ntf_vanilla\data\ntf_log_des_front.paa", "\ntf_vanilla\data\ntf_log_des_can.paa", "\ntf_vanilla\data\ntf_log_int.paa"};
		weapons[] = {"TruckHorn2"};
		magazines[] = {};
	};

	class I_Truck_02_fuel_F;
	class NTF_log_fuel_wdl : I_Truck_02_fuel_F {
		scope = 2;
		faction = "NTF";
		side = 1;
		author = "Christiansen";
		displayName = "Scania 93M Drivstoff (Skog)";
		hiddenselectionstextures[] = {"\ntf_vanilla\data\ntf_log_wdl_front.paa", "\ntf_vanilla\data\ntf_log_wdl_fuel.paa", "\ntf_vanilla\data\ntf_log_int.paa"};
		weapons[] = {"TruckHorn2"};
		magazines[] = {};
	};

	class NTF_log_fuel_des : I_Truck_02_fuel_F {
		scope = 2;
		faction = "NTF";
		side = 1;
		author = "Christiansen";
		displayName = "Scania 93M Drivstoff (Sand)";
		hiddenselectionstextures[] = {"\ntf_vanilla\data\ntf_log_des_front.paa", "\ntf_vanilla\data\ntf_log_des_fuel.paa", "\ntf_vanilla\data\ntf_log_int.paa"};
		weapons[] = {"TruckHorn2"};
		magazines[] = {};
	};

	class I_Truck_02_medical_F;
	class NTF_log_med_wdl : I_Truck_02_medical_F {
		scope = 2;
		faction = "NTF";
		side = 1;
		author = "Christiansen";
		displayName = "Scania 93M Sanitet (Skog)";
		hiddenselectionstextures[] = {"\ntf_vanilla\data\ntf_log_wdl_front.paa", "\ntf_vanilla\data\ntf_log_wdl_can.paa", "\ntf_vanilla\data\ntf_log_int.paa"};
		weapons[] = {"TruckHorn2"};
		magazines[] = {};
	};

	class NTF_log_med_des : I_Truck_02_medical_F {
		scope = 2;
		scopeCurator = 2;
		faction = "NTF";
		side = 1;
		author = "Christiansen";
		displayName = "Scania 93M Sanitet (Sand)";
		hiddenselectionstextures[] = {"\ntf_vanilla\data\ntf_log_des_front.paa", "\ntf_vanilla\data\ntf_log_des_can.paa", "\ntf_vanilla\data\ntf_log_int.paa"};
		weapons[] = {"TruckHorn2"};
		magazines[] = {};
	};


//=============================================================== CV90 ===============================================================

	class I_APC_tracked_03_cannon_F;
	class NTF_CV90_Wdl_Vik : I_APC_tracked_03_cannon_F {
		scope = 2;
		scopeCurator = 2;
		faction = "NTF";
		side = 1;
		author = "Christiansen";
		displayName = "CV90 'Viking' (Skog)";
		hiddenselectionstextures[] = {
			"\ntf_vanilla\data\ntf_cv90_wdl_turret.paa",
			"\ntf_vanilla\data\ntf_cv90_wdl_ext_vik.paa",
			"A3\Armor_F\Data\camonet_AAF_Digi_Jungle_CO.paa",
			"A3\armor_f\data\cage_aaf_co.paa"
		};
		textureList[]= {
			"skog",
			1
		};

		class TextureSources {
			class skog {
				author = "Christiansen";
				displayName = "CV90 'Viking' (Skog)";
				textures[]= {
					"\ntf_vanilla\data\ntf_cv90_wdl_turret.paa",
					"\ntf_vanilla\data\ntf_cv90_wdl_ext_vik.paa",
					"A3\Armor_F\Data\camonet_AAF_Digi_Jungle_CO.paa",
					"A3\armor_f\data\cage_aaf_co.paa"
				};
				factions[]= {
					"BLU_F"
				};
			};
		};

		ace_cargo_space = 5;
		ace_cargo_hasCargo = 1;

		class TransportMagazines {

		};

		class TransportItems {

		};

		class TransportWeapons{

		};

		class Turrets;
		class Turrets : Turrets {
			class MainTurret;
			class MainTurret : MainTurret {
				magazines[]= {
				"NTF_80Rnd_30mm_MP_shells_Tracer_Yellow",
				"NTF_80Rnd_30mm_MP_shells_Tracer_Yellow",
				"NTF_80Rnd_30mm_MP_shells_Tracer_Yellow",
				"NTF_80Rnd_30mm_APFSDS_shells_Tracer_Yellow",
				"NTF_80Rnd_30mm_APFSDS_shells_Tracer_Yellow",
				"200Rnd_762x51_Belt_Yellow",
				"200Rnd_762x51_Belt_Yellow",
				"200Rnd_762x51_Belt_Yellow",
				"200Rnd_762x51_Belt_Yellow",
				"200Rnd_762x51_Belt_Yellow",
				"200Rnd_762x51_Belt_Yellow",
				"200Rnd_762x51_Belt_Yellow",
				"200Rnd_762x51_Belt_Yellow"
				};
			};
		};
	};

	class NTF_CV90_Des_Vik : I_APC_tracked_03_cannon_F {
		scope = 2;
		scopeCurator = 2;
		faction = "NTF";
		side = 1;
		author = "Christiansen";
		displayName = "CV90 'Viking' (Sand)";
		magazines[]= {
			"NTF_80Rnd_30mm_MP_shells_Tracer_Yellow",
			"NTF_80Rnd_30mm_MP_shells_Tracer_Yellow",
			"NTF_80Rnd_30mm_MP_shells_Tracer_Yellow",
			"NTF_80Rnd_30mm_APFSDS_shells_Tracer_Yellow",
			"NTF_80Rnd_30mm_APFSDS_shells_Tracer_Yellow",
			"200Rnd_762x51_Belt_Yellow",
			"200Rnd_762x51_Belt_Yellow",
			"200Rnd_762x51_Belt_Yellow",
			"200Rnd_762x51_Belt_Yellow",
			"200Rnd_762x51_Belt_Yellow",
			"200Rnd_762x51_Belt_Yellow",
			"200Rnd_762x51_Belt_Yellow",
			"200Rnd_762x51_Belt_Yellow"
		};
		hiddenselectionstextures[] = {
			"\ntf_vanilla\data\ntf_cv90_des_turret.paa",
			"\ntf_vanilla\data\ntf_cv90_des_ext_vik.paa",
			"A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa",
			"A3\armor_f\data\cage_G1_co.paa"
		};
		textureList[]= {
			"sand",
			1
		};
		class TextureSources {
			class sand
			{
				author = "Christiansen";
				displayName = "CV90 'Viking' (Sand)";
				textures[]= {
					"\ntf_vanilla\data\ntf_cv90_des_turret.paa",
					"\ntf_vanilla\data\ntf_cv90_des_ext_vik.paa",
					"A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa",
					"A3\armor_f\data\cage_G3_co.paa"
				};
				factions[]= {
					"BLU_F"
				};
			};
		};

		ace_cargo_space = 5;
		ace_cargo_hasCargo = 1;
		class TransportMagazines {

		};
		class TransportItems {

		};
		class TransportWeapons {

		};
	};

	class NTF_CV90_Wdl_Vet : I_APC_tracked_03_cannon_F {
		scope = 2;
		scopeCurator = 2;
		faction = "NTF";
		side = 1;
		author = "Christiansen";
		displayName = "CV90 'Veteran' (Skog)";
		magazines[]= {
			"NTF_80Rnd_30mm_MP_shells_Tracer_Yellow",
			"NTF_80Rnd_30mm_MP_shells_Tracer_Yellow",
			"NTF_80Rnd_30mm_MP_shells_Tracer_Yellow",
			"NTF_80Rnd_30mm_APFSDS_shells_Tracer_Yellow",
			"NTF_80Rnd_30mm_APFSDS_shells_Tracer_Yellow",
			"200Rnd_762x51_Belt_Yellow",
			"200Rnd_762x51_Belt_Yellow",
			"200Rnd_762x51_Belt_Yellow",
			"200Rnd_762x51_Belt_Yellow",
			"200Rnd_762x51_Belt_Yellow",
			"200Rnd_762x51_Belt_Yellow",
			"200Rnd_762x51_Belt_Yellow",
			"200Rnd_762x51_Belt_Yellow"
		};
		hiddenselectionstextures[] = {
			"\ntf_vanilla\data\ntf_cv90_wdl_turret.paa",
			"\ntf_vanilla\data\ntf_cv90_wdl_ext_vet.paa",
			"A3\Armor_F\Data\camonet_AAF_Digi_Jungle_CO.paa",
			"A3\armor_f\data\cage_aaf_co.paa"
		};
		textureList[]= {
			"skog",
			1
		};
		class TextureSources {
			class skog {
				author = "Christiansen";
				displayName = "CV90 'Veteran' (Skog)";
				textures[]= {
					"\ntf_vanilla\data\ntf_cv90_wdl_turret.paa",
					"\ntf_vanilla\data\ntf_cv90_wdl_ext_vet.paa",
					"A3\Armor_F\Data\camonet_AAF_Digi_Jungle_CO.paa",
					"A3\armor_f\data\cage_aaf_co.paa"
				};
				factions[]= {
					"BLU_F"
				};
			};
		};

		ace_cargo_space = 5;
		ace_cargo_hasCargo = 1;
		class TransportMagazines {

		};
		class TransportItems {

		};
		class TransportWeapons {

		};
	};

	class NTF_CV90_Des_Vet : I_APC_tracked_03_cannon_F {
		scope = 2;
		scopeCurator = 2;
		faction = "NTF";
		side = 1;
		author = "Christiansen";
		displayName = "CV90 'Veteran' (Sand)";
		magazines[]= {
			"NTF_80Rnd_30mm_MP_shells_Tracer_Yellow",
			"NTF_80Rnd_30mm_MP_shells_Tracer_Yellow",
			"NTF_80Rnd_30mm_MP_shells_Tracer_Yellow",
			"NTF_80Rnd_30mm_APFSDS_shells_Tracer_Yellow",
			"NTF_80Rnd_30mm_APFSDS_shells_Tracer_Yellow",
			"200Rnd_762x51_Belt_Yellow",
			"200Rnd_762x51_Belt_Yellow",
			"200Rnd_762x51_Belt_Yellow",
			"200Rnd_762x51_Belt_Yellow",
			"200Rnd_762x51_Belt_Yellow",
			"200Rnd_762x51_Belt_Yellow",
			"200Rnd_762x51_Belt_Yellow",
			"200Rnd_762x51_Belt_Yellow"
		};
		hiddenselectionstextures[] = {
			"\ntf_vanilla\data\ntf_cv90_des_turret.paa",
			"\ntf_vanilla\data\ntf_cv90_des_ext_vet.paa",
			"A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa",
			"A3\armor_f\data\cage_G1_co.paa"
		};
		textureList[]= {
			"sand",
			1
		};
		class TextureSources {
			class sand {
				author = "Christiansen";
				displayName = "CV90 'Veteran' (Sand)";
				textures[]= {
					"\ntf_vanilla\data\ntf_cv90_des_turret.paa",
					"\ntf_vanilla\data\ntf_cv90_des_ext_vet.paa",
					"A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa",
					"A3\armor_f\data\cage_G3_co.paa"
				};
				factions[]= {
					"BLU_F"
				};
			};
		};

		ace_cargo_space = 5;
		ace_cargo_hasCargo = 1;
		class TransportMagazines {

		};
		class TransportItems {

		};
		class TransportWeapons {

		};
	};
};
