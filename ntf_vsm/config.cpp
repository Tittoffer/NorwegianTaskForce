
 //===========================================================================================================================================================
 //========================================================================== cfgPatches =================================================================================
 //===========================================================================================================================================================

class CfgPatches {

	class ntf_vsm {
		requiredVersion = 0.1;
		requiredAddons[]={
/*			"VSM_ACU",
			"VSM_Bags",
			"VSM_ColdWeatherGear",
			"VSM_G2",
			"VSM_Zenith_Headgear",
			"VSM_Zenith_Vests"
*/		};
		units[]={
			"ntf_pack_radiosekk_wdl",
			"ntf_pack_radiosekk_des"
		};
		weapons[]={
			"ntf_cap_headset_des",
			"ntf_cap_headset_wdl",
			"ntf_vest_6094_762",
			"ntf_vest_6094_556",
			"ntf_vest_6094c_556",
			"ntf_vest_6094c_762",
			"ntf_vest_chestrig_762",
			"ntf_vest_battlebelt",
			"ntf_vest_ciras_1",
			"ntf_vest_ciras_2",
			"ntf_vest_ciras_3",
			"ntf_uni_m04_wdl",
			"ntf_uni_m04_des",
			"ntf_uni_cwg_win_wdl",
			"ntf_uni_cwg_wdl_win",
			"ntf_uni_cwg_win",
			"ntf_uni_cwg_wdl",
			"ntf_uni_g3_wdl",
			"ntf_uni_g3_roll_wdl",
			"ntf_uni_g3_des",
			"ntf_uni_g3_roll_des"
		};
	};
};


//===================================================================================================================================================================
//========================================================================== cfgWeapons =================================================================================
//===================================================================================================================================================================

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class cfgWeapons {
	class ItemCore;
	class VestItem;
	class InventoryItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class HeadgearItem;
	class H_Beret_Colonel;

//========================================================================== Headgear =================================================================================

	class VSM_HAT_OD;
	class ntf_cap_headset_des: VSM_HAT_OD {
		displayName="[NTF] Baseball Cap (Sand)";
		picture="ntf_vsm\data\ntf_insignia.paa";
		author="T. Andreassen";
		hiddenSelections[]= {
			"_VSMz110T",
			"_vsm_HAT"
		};
		hiddenSelectionsTextures[]= {
			"vsm_zenith_headgear\textures\vsm_z110t.paa",
			"ntf_vsm\data\NTF_cap_DES.paa"
		};
	};
	class ntf_cap_headset_wdl: VSM_HAT_OD {
		displayName="[NTF] Baseball Cap (Skog)";
		picture="ntf_vsm\data\ntf_insignia.paa";
		author="T. Andreassen";
		hiddenSelections[]= {
			"_VSMz110T",
			"_vsm_HAT"
		};
		hiddenSelectionsTextures[]= {
			"vsm_zenith_headgear\textures\vsm_z110t.paa",
			"ntf_vsm\data\NTF_cap_WDL.paa"
		};
	};

//========================================================================== Vests ============================================================================

	class VSM_LBT6094_gen2;
	class ntf_vest_6094_762 : VSM_LBT6094_gen2 {
		author="Christiansen";
		scope=2;
		scopeArsenal = 2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="[NTF] LBT 6094 (7.62)";
		picture="ntf_vsm\data\ntf_insignia.paa";
	};

	class VSM_LBT6094_gen2_556;
	class ntf_vest_6094_556 : VSM_LBT6094_gen2_556 {
		author="Christiansen";
		scope=2;
		scopeArsenal = 2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="[NTF] LBT 6094 (5.56)";
		picture="ntf_vsm\data\ntf_insignia.paa";
	};

	class VSM_Armatus_1;
	class ntf_vest_6094c_556 : VSM_Armatus_1 {
		author="Christiansen";
		scope=2;
		scopeArsenal = 2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="[NTF] LBT 6094c (5.56)";
		picture="ntf_vsm\data\ntf_insignia.paa";
	};

	class VSM_Armatus_2;
	class ntf_vest_6094c_762 : VSM_Armatus_2 {
		author="Christiansen";
		scope=2;
		scopeArsenal = 2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="[NTF] LBT 6094c (7.62)";
		picture="ntf_vsm\data\ntf_insignia.paa";
	};

	class VSM_2017_ChestRig;
	class ntf_vest_chestrig_762 : VSM_2017_ChestRig {
		author="Christiansen";
		scope=2;
		scopeArsenal = 2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="[NTF] Chestrig (7.62)";
		picture="ntf_vsm\data\ntf_insignia.paa";
	};


	class VSM_Gen2_BattleBelt_coyote;
	class ntf_vest_battlebelt : VSM_Gen2_BattleBelt_coyote {
		author="Christiansen";
		scope=2;
		scopeArsenal = 2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="[NTF] Stridsbelte";
		picture="ntf_vsm\data\ntf_insignia.paa";
	};

	class VSM_CIRAS;
	class ntf_vest_ciras_1 : VSM_CIRAS {
		author="Christiansen";
		scope=2;
		scopeArsenal = 2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="[NTF] Ciras 1 (5.56)";
		picture="ntf_vsm\data\ntf_insignia.paa";
	};

	class VSM_CIRAS_2;
	class ntf_vest_ciras_2 : VSM_CIRAS_2 {
		author="Christiansen";
		scope=2;
		scopeArsenal = 2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="[NTF] Ciras 2 (5.56)";
		picture="ntf_vsm\data\ntf_insignia.paa";
	};

	class VSM_ciras_3;
	class ntf_vest_ciras_3 : VSM_ciras_3 {
		author="Christiansen";
		scope=2;
		scopeArsenal = 2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="[NTF] Ciras 3 (5.56)";
		picture="ntf_vsm\data\ntf_insignia.paa";
	};

//========================================================================== Uniforms ============================================================================

	class UniformItem;
	class Uniform_Base;

	class ntf_uni_m04_wdl : Uniform_Base {
        scope = 2;
		scopeArsenal = 2;
		author = "Christiansen";
		picture="ntf_vsm\data\ntf_insignia.paa";
        displayName= "[NTF] Uniform (Skog)";
		modelsides[]={3,2,1,0};
		model="VSM_ACU\Models\VSM_ACU.p3d";
		hiddenSelections[]= {
			"_VSM_ACU_TOP",
			"_VSM_ACU_PANT",
			"_VSM_ACU_Boot",
			"_VSM_ACU_FLAG",
			"insignia"
		};

        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "ntf_acu_wdl"; //would be same as our made soldier class
            containerClass = "Supply50"; //how much it can carry
            mass = 25; //how much it weights
        };
    };

	class ntf_uni_m04_des : Uniform_Base {
        scope = 2;
		scopeArsenal = 2;
		author = "Christiansen";
		picture="ntf_vsm\data\ntf_insignia.paa";
        displayName= "[NTF] Uniform (Sand)";
		modelsides[]={3,2,1,0};
		model="VSM_ACU\Models\VSM_ACU.p3d";
		hiddenSelections[]= {
			"_VSM_ACU_TOP",
			"_VSM_ACU_PANT",
			"_VSM_ACU_Boot",
			"_VSM_ACU_FLAG",
			"insignia"
		};

        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "ntf_acu_des"; //would be same as our made soldier class
            containerClass = "Supply50"; //how much it can carry
            mass = 25; //how much it weights
        };
    };

	class ntf_uni_cwg_win_wdl : Uniform_Base {
        scope = 2;
		scopeArsenal = 2;
		author = "Christiansen";
		picture="ntf_vsm\data\ntf_insignia.paa";
        displayName= "[NTF] Gore-Tex (Sno+Skog)";
		modelsides[]={3,2,1,0};
		model="VSM_ColdWeatherGear\Models\VSM_ColdWeather_1.p3d";
		hiddenSelections[]= {
			"_Gen2Pants",
			"_coat",
			"insignia"
		};
        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "ntf_cwg_win_wdl"; //would be same as our made soldier class
            containerClass = "Supply50"; //how much it can carry
            mass = 25; //how much it weights
        };
    };

	class ntf_uni_cwg_wdl_win : Uniform_Base {
        scope = 2;
		scopeArsenal = 2;
		author = "Christiansen";
		picture="ntf_vsm\data\ntf_insignia.paa";
        displayName= "[NTF] Gore-Tex (Skog+sno)";
		modelsides[]={3,2,1,0};
		model="VSM_ColdWeatherGear\Models\VSM_ColdWeather_1.p3d";
		hiddenSelections[]= {
			"_Gen2Pants",
			"_coat",
			"insignia"
		};
        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "ntf_cwg_wdl_win"; //would be same as our made soldier class
            containerClass = "Supply50"; //how much it can carry
            mass = 25; //how much it weights
        };
    };

	class ntf_uni_cwg_win : Uniform_Base {
        scope = 2;
		scopeArsenal = 2;
		author = "Christiansen";
		picture="ntf_vsm\data\ntf_insignia.paa";
        displayName= "[NTF] Gore-Tex (Sno)";
		modelsides[]={3,2,1,0};
		model="VSM_ColdWeatherGear\Models\VSM_ColdWeather_1.p3d";
		hiddenSelections[]= {
			"_Gen2Pants",
			"_coat",
			"insignia"
		};
        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "ntf_cwg_win"; //would be same as our made soldier class
            containerClass = "Supply50"; //how much it can carry
            mass = 25; //how much it weights
        };
    };

	class ntf_uni_cwg_wdl : Uniform_Base {
        scope = 2;
		scopeArsenal = 2;
		author = "Christiansen";
		picture="ntf_vsm\data\ntf_insignia.paa";
        displayName= "[NTF] Gore-Tex (Skog)";
		modelsides[]={3,2,1,0};
		model="VSM_ColdWeatherGear\Models\VSM_ColdWeather_1.p3d";
		hiddenSelections[]= {
			"_Gen2Pants",
			"_coat",
			"insignia"
		};
        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "ntf_cwg_wdl"; //would be same as our made soldier class
            containerClass = "Supply50"; //how much it can carry
            mass = 25; //how much it weights
        };
    };

	class ntf_uni_g3_wdl : Uniform_Base {
        scope = 2;
		scopeArsenal = 2;
		author = "Christiansen";
		picture="ntf_vsm\data\ntf_insignia.paa";
        displayName= "[NTF] G3 Uniform (Skog)";
		modelsides[]={3,2,1,0};
		model="VSM_G2\Models\VSM_final_Crye_Gen2.p3d";
		hiddenSelections[]= {
			"_MagpulGloves",
			"_Gen2Pants",
			"_Gen2Shirt",
			"_salomonRight",
			"_salomonLeft",
			"insignia"
		};

        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "ntf_g3_wdl"; //would be same as our made soldier class
            containerClass = "Supply50"; //how much it can carry
            mass = 25; //how much it weights
        };
    };

	class ntf_uni_g3_roll_wdl : Uniform_Base {
        scope = 2;
		scopeArsenal = 2;
		author = "Christiansen";
		picture="ntf_vsm\data\ntf_insignia.paa";
        displayName= "[NTF] G3 Uniform (Brettet / Skog)";
		modelsides[]={3,2,1,0};
		model="VSM_G2\Models\VSM_final_Crye_Gen2_rolled.p3d";
		hiddenSelections[]= {
			"_MagpulGloves",
			"_Gen2Pants",
			"_Gen2Shirt",
			"_salomonRight",
			"_salomonLeft",
			"insignia"
		};

        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "ntf_g3_roll_wdl"; //would be same as our made soldier class
            containerClass = "Supply50"; //how much it can carry
            mass = 25; //how much it weights
        };
    };

		class ntf_uni_g3_wdl_od : Uniform_Base {
        scope = 2;
		scopeArsenal = 2;
		author = "Christiansen";
		picture="ntf_vsm\data\ntf_insignia.paa";
        displayName= "[NTF] G3 Uniform (OD+Skog)";
		modelsides[]={3,2,1,0};
		model="VSM_G2\Models\VSM_final_Crye_Gen2.p3d";
		hiddenSelections[]= {
			"_MagpulGloves",
			"_Gen2Pants",
			"_Gen2Shirt",
			"_salomonRight",
			"_salomonLeft",
			"insignia"
		};

        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "ntf_g3_wdl_od"; //would be same as our made soldier class
            containerClass = "Supply50"; //how much it can carry
            mass = 25; //how much it weights
        };
    };

	class ntf_uni_g3_roll_wdl_od : Uniform_Base {
        scope = 2;
		scopeArsenal = 2;
		author = "Christiansen";
		picture="ntf_vsm\data\ntf_insignia.paa";
        displayName= "[NTF] G3 Uniform (Brettet / OD+Skog)";
		modelsides[]={3,2,1,0};
		model="VSM_G2\Models\VSM_final_Crye_Gen2_rolled.p3d";
		hiddenSelections[]= {
			"_MagpulGloves",
			"_Gen2Pants",
			"_Gen2Shirt",
			"_salomonRight",
			"_salomonLeft",
			"insignia"
		};

        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "ntf_g3_roll_wdl_od"; //would be same as our made soldier class
            containerClass = "Supply50"; //how much it can carry
            mass = 25; //how much it weights
        };
    };

	class ntf_uni_g3_des : Uniform_Base {
        scope = 2;
		scopeArsenal = 2;
		author = "Christiansen";
		picture="ntf_vsm\data\ntf_insignia.paa";
        displayName= "[NTF] G3 Uniform (Sand)";
		modelsides[]={3,2,1,0};
		model="VSM_G2\Models\VSM_final_Crye_Gen2.p3d";
		hiddenSelections[]= {
			"_MagpulGloves",
			"_Gen2Pants",
			"_Gen2Shirt",
			"_salomonRight",
			"_salomonLeft",
			"insignia"
		};

        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "ntf_g3_des"; //would be same as our made soldier class
            containerClass = "Supply50"; //how much it can carry
            mass = 25; //how much it weights
        };
    };

	class ntf_uni_g3_roll_des : Uniform_Base {
        scope = 2;
		scopeArsenal = 2;
		author = "Christiansen";
		picture="ntf_vsm\data\ntf_insignia.paa";
        displayName= "[NTF] G3 Uniform (Brettet / Sand)";
		modelsides[]={3,2,1,0};
		model="VSM_G2\Models\VSM_final_Crye_Gen2_rolled.p3d";
		hiddenSelections[]= {
			"_MagpulGloves",
			"_Gen2Pants",
			"_Gen2Shirt",
			"_salomonRight",
			"_salomonLeft",
			"insignia"
		};

        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "ntf_g3_roll_des"; //would be same as our made soldier class
            containerClass = "Supply50"; //how much it can carry
            mass = 25; //how much it weights
        };
    };
};

//==============================================================================================================================
//========================================================================== cfgVehicles =================================================================================
//==============================================================================================================================
class CfgVehicles {
//========================================================================== Uniform (cfgVehicles) =======================================================================================

	class B_Soldier_F;
	class ntf_acu_wdl : B_Soldier_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 1;
        displayName= "[NTF] uniform (Skog)";
        uniformAccessories[] = {};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "ntf_acu_wdl"; //the uniform item
		model = "VSM_ACU\Models\VSM_ACU.p3d";
        hiddenSelections[] = {"_VSM_ACU_TOP", "_VSM_ACU_PANT", "_VSM_ACU_Boot", "_VSM_ACU_FLAG", "insignia"};
        hiddenSelectionsTextures[] = {"ntf_vsm\data\ntf_acu_wdl.paa", "ntf_vsm\data\ntf_acu_wdl.paa", "ntf_vsm\data\ntf_bts_blk.paa"};
    };

	class ntf_acu_des : B_Soldier_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 1;
        displayName= "[NTF] uniform (Sand)";
        uniformAccessories[] = {};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "ntf_acu_des"; //the uniform item
		model = "VSM_ACU\Models\VSM_ACU.p3d";
        hiddenSelections[] = {"_VSM_ACU_TOP", "_VSM_ACU_PANT", "_VSM_ACU_Boot", "_VSM_ACU_FLAG", "insignia"};
        hiddenSelectionsTextures[] = {"ntf_vsm\data\ntf_acu_des.paa", "ntf_vsm\data\ntf_acu_des.paa", "ntf_vsm\data\ntf_bts_des.paa"};
    };

	class ntf_cwg_win_wdl : B_Soldier_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 1;
        displayName= "[NTF] Gore-Tex (Sno+Skog)";
        uniformAccessories[] = {};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "ntf_cwg_win_wdl"; //the uniform item
		model="VSM_ColdWeatherGear\Models\VSM_ColdWeather_1.p3d";
        hiddenSelections[] = {"_Gen2Pants", "_coat", "insignia"};
        hiddenSelectionsTextures[] = {"ntf_vsm\data\ntf_g3_pant_wdl.paa", "ntf_vsm\data\ntf_coat_win.paa"};
    };

	class ntf_cwg_wdl_win : B_Soldier_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 1;
        displayName= "[NTF] Gore-Tex (Skog+sno)";
        uniformAccessories[] = {};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "ntf_cwg_wdl_win"; //the uniform item
		model="VSM_ColdWeatherGear\Models\VSM_ColdWeather_1.p3d";
        hiddenSelections[] = {"_Gen2Pants", "_coat", "insignia"};
        hiddenSelectionsTextures[] = {"ntf_vsm\data\ntf_g3_pant_win.paa", "ntf_vsm\data\ntf_coat_wdl.paa"};
    };

	class ntf_cwg_win : B_Soldier_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 1;
        displayName= "[NTF] Gore-Tex (Sno+Skog)";
        uniformAccessories[] = {};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "ntf_cwg_win"; //the uniform item
		model="VSM_ColdWeatherGear\Models\VSM_ColdWeather_1.p3d";
        hiddenSelections[] = {"_Gen2Pants", "_coat", "insignia"};
        hiddenSelectionsTextures[] = {"ntf_vsm\data\ntf_g3_pant_win.paa", "ntf_vsm\data\ntf_coat_win.paa"};
    };

	class ntf_cwg_wdl : B_Soldier_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 1;
        displayName= "[NTF] Gore-Tex (Skog)";
        uniformAccessories[] = {};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "ntf_cwg_wdl"; //the uniform item
		model="VSM_ColdWeatherGear\Models\VSM_ColdWeather_1.p3d";
        hiddenSelections[] = {"_Gen2Pants", "_coat", "insignia"};
        hiddenSelectionsTextures[] = {"ntf_vsm\data\ntf_g3_pant_wdl.paa", "ntf_vsm\data\ntf_coat_wdl.paa"};
    };

	class ntf_g3_wdl : B_Soldier_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 1;
        displayName= "[NTF] G3 Uniform (Skog)";
        uniformAccessories[] = {};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "ntf_g3_wdl"; //the uniform item
		model="VSM_G2\Models\VSM_final_Crye_Gen2.p3d";
        hiddenSelections[] = {"_MagpulGloves", "_Gen2Pants", "_Gen2Shirt", "_salomonRight", "_salomonLeft", "insignia"};
        hiddenSelectionsTextures[] = {"ntf_vsm\data\ntf_g3_gloves_blk.paa", "ntf_vsm\data\ntf_g3_pant_wdl.paa", "ntf_vsm\data\ntf_g3_shirt_wdl.paa", "ntf_vsm\data\ntf_g3_shoe_r.paa", "ntf_vsm\data\ntf_g3_shoe_l.paa"};
    };

	class ntf_g3_roll_wdl : B_Soldier_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 1;
        displayName= "[NTF] G3 Uniform (Brettet / Skog)";
        uniformAccessories[] = {};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "ntf_g3_roll_wdl"; //the uniform item
		model="VSM_G2\Models\VSM_final_Crye_Gen2_rolled.p3d";
        hiddenSelections[] = {"_MagpulGloves", "_Gen2Pants", "_Gen2Shirt", "_salomonRight", "_salomonLeft", "insignia"};
        hiddenSelectionsTextures[] = {"ntf_vsm\data\ntf_g3_gloves_blk.paa", "ntf_vsm\data\ntf_g3_pant_wdl.paa", "ntf_vsm\data\ntf_g3_shirt_wdl.paa", "ntf_vsm\data\ntf_g3_shoe_r.paa", "ntf_vsm\data\ntf_g3_shoe_l.paa"};
    };

	class ntf_g3_wdl_od : B_Soldier_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 1;
        displayName= "[NTF] G3 Uniform (OD+Skog)";
        uniformAccessories[] = {};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "ntf_g3_wdl"; //the uniform item
		model="VSM_G2\Models\VSM_final_Crye_Gen2.p3d";
        hiddenSelections[] = {"_MagpulGloves", "_Gen2Pants", "_Gen2Shirt", "_salomonRight", "_salomonLeft", "insignia"};
        hiddenSelectionsTextures[] = {"ntf_vsm\data\ntf_g3_gloves_blk.paa", "ntf_vsm\data\ntf_g3_pant_od.paa", "ntf_vsm\data\ntf_g3_shirt_wdl.paa", "ntf_vsm\data\ntf_g3_shoe_r.paa", "ntf_vsm\data\ntf_g3_shoe_l.paa"};
    };

	class ntf_g3_roll_wdl_od : B_Soldier_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 1;
        displayName= "[NTF] G3 Uniform (Brettet / OD+Skog)";
        uniformAccessories[] = {};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "ntf_g3_roll_wdl"; //the uniform item
		model="VSM_G2\Models\VSM_final_Crye_Gen2_rolled.p3d";
        hiddenSelections[] = {"_MagpulGloves", "_Gen2Pants", "_Gen2Shirt", "_salomonRight", "_salomonLeft", "insignia"};
        hiddenSelectionsTextures[] = {"ntf_vsm\data\ntf_g3_gloves_blk.paa", "ntf_vsm\data\ntf_g3_pant_od.paa", "ntf_vsm\data\ntf_g3_shirt_wdl.paa", "ntf_vsm\data\ntf_g3_shoe_r.paa", "ntf_vsm\data\ntf_g3_shoe_l.paa"};
    };

	class ntf_g3_des : B_Soldier_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 1;
        displayName= "[NTF] G3 Uniform (Sand)";
        uniformAccessories[] = {};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "ntf_g3_des"; //the uniform item
		model="VSM_G2\Models\VSM_final_Crye_Gen2.p3d";
        hiddenSelections[] = {"_MagpulGloves", "_Gen2Pants", "_Gen2Shirt", "_salomonRight", "_salomonLeft", "insignia"};
        hiddenSelectionsTextures[] = {"ntf_vsm\data\ntf_g3_gloves_blk.paa", "ntf_vsm\data\ntf_g3_pant_des.paa", "ntf_vsm\data\ntf_g3_shirt_des.paa", "ntf_vsm\data\ntf_g3_shoe_r.paa", "ntf_vsm\data\ntf_g3_shoe_l.paa"};
    };

	class ntf_g3_roll_des : B_Soldier_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 1;
        displayName= "[NTF] G3 Uniform (Brettet / Sand)";
        uniformAccessories[] = {};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "ntf_g3_roll_des"; //the uniform item
		model="VSM_G2\Models\VSM_final_Crye_Gen2_rolled.p3d";
        hiddenSelections[] = {"_MagpulGloves", "_Gen2Pants", "_Gen2Shirt", "_salomonRight", "_salomonLeft", "insignia"};
        hiddenSelectionsTextures[] = {"ntf_vsm\data\ntf_g3_gloves_blk.paa", "ntf_vsm\data\ntf_g3_pant_des.paa", "ntf_vsm\data\ntf_g3_shirt_des.paa", "ntf_vsm\data\ntf_g3_shoe_r.paa", "ntf_vsm\data\ntf_g3_shoe_l.paa"};
    };


//============================================================== Kitbag =============================================================================================

	class VSM_RadarJammer_Coyote;
	class ntf_pack_radiosekk_des: VSM_RadarJammer_Coyote {
        author = "Christiansen";
        scope = 2;
		scopeArsenal = 2;
        displayName= "[NTF] Radiosekk (Sand)";
		picture = "";
    };

	class VSM_RadarJammer_Ranger;
	class ntf_pack_radiosekk_wdl: VSM_RadarJammer_Ranger {
        author = "Christiansen";
        scope = 2;
		scopeArsenal = 2;
        displayName= "[NTF] Radiosekk (Skog)";
		hiddenSelectionsTextures[] = {"ntf_vsm\data\ntf_pack_radiosekk_wdl.paa"};
		picture = "";
    };
};