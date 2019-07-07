 //===========================================================================================================================================================
 //========================================================================== Patches =================================================================================
 //===========================================================================================================================================================

class CfgPatches {
	class NTF_NH90 {
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"hafm_nh90", "hafm_nh90_config"};
		units[] = {"ntf_nh90_gray", "ntf_nh90_green"};
    };
};

//===========================================================================================================================================================
//========================================================================== FactionClass =================================================================================
//===========================================================================================================================================================

 class cfgFactionClasses {
	 
	class NTF {
		displayName = "Norwegian Task Force"; //Faction name in-game
		author = "Christiansen";
		icon = "\ntf_nh90\data\ntf_insignia.paa"; //Path to texture
		priority = 1; //How far down it is on the menu
		side = 1; // 1 Blufor 2 opfor 3 independant
	};
};

//========================================================================== VEHICLES =================================================================================

class CfgVehicles {

	class NH90;
	class ntf_nh90_gray : NH90 {
		scope = 2;
		faction = "NTF";
		side = 1;
		author = "Christiansen";
		displayName = "NH90 (Marine)";
		picture = "ntf_nh90\data\ntf_insignia.paa";
		editorPreview = "";
		hiddenselectionstextures[] = {
			"ntf_nh90\data\ntf_nh90_gray_ext1.paa",
			"ntf_nh90\data\ntf_nh90_gray_ext2.paa",
			"ntf_nh90\data\ntf_nh90_gray_misc.paa",
			"ntf_nh90\data\ntf_nh90_gray_ext3.paa"
			};
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"300Rnd_CMFlare_Chaff_Magazine"};
		
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
	};

	class ntf_nh90_green : NH90 {
		scope = 2;
		faction = "NTF";
		side = 1;
		author = "Christiansen";
		displayName = "NH90 (Skog)";
		editorPreview = "";
		hiddenselectionstextures[] = {
			"ntf_nh90\data\ntf_nh90_grn_ext1.paa",
			"ntf_nh90\data\ntf_nh90_grn_ext2.paa",
			"ntf_nh90\data\ntf_nh90_grn_misc.paa",
			"ntf_nh90\data\ntf_nh90_grn_ext3.paa"
			};
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"300Rnd_CMFlare_Chaff_Magazine"};
		
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
	};
};