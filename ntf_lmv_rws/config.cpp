 //===========================================================================================================================================================
 //========================================================================== Patches =================================================================================
 //===========================================================================================================================================================

class CfgPatches {
	
	class ntf_lmv_rws {
		units[] = {"ntf_iveco_m240"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			
			"burnes_panther"
			
		};
	};
};

//===========================================================================================================================================================
//========================================================================== FactionClass =================================================================================
//===========================================================================================================================================================

 class cfgFactionClasses
 {
	class NTF
	{
		displayName = "Norwegian Task Force"; //Faction name in-game
		author = "NTF_Saetre";
		icon = "ntf_iveco\data\ntf_insignia.paa"; //Path to texture
		priority = 1; //How far down it is on the menu
		side = 1; // 1 Blufor 2 opfor 3 independant
	};
};

//========================================================================== VEHICLES =================================================================================

class CfgVehicles
{
		
	class burnes_panther;
	class ntf_iveco_rws : burnes_panther
		{
			scope = 2;
			faction = "NTF";
			side = 1;
			author = "Christiansen";
			displayName = "Iveco LMV (RWS)";
			crew="";
			typicalCargo[]=
			{
				""
			};
			hiddenselectionstextures[] = {""};
			weapons[] = {"TruckHorn"};
			magazines[] = {};
				class AcreIntercoms {};
				class AcreRacks {
				class Rack_1 {
				   displayName = Long-Range 1; // Name is displayed in the interaction menu.
				   shortName = LR1;
				   componentName = "ACRE_VRC103";
				   allowedPositions[] = {"driver", "commander"}; // Who has access. "inside" - anyone inside, "external" - provides access upto 10m away, "driver", "gunner", "copilot", "commander"
				   disabledPositions[] = {};
				   defaultComponents[] = {};
				   mountedRadio = "ACRE_PRC117F";                 // Predefined mounted radio
				   isRadioRemovable = 0;
				   intercom[] = {};  
			   };
			   class Rack_2 {
				   displayName = Long-Range 2; // Name is displayed in the interaction menu.
				   shortName = LR2;
				   componentName = "ACRE_VRC103";
				   allowedPositions[] = {"driver", "commander"}; // Who has access. "inside" - anyone inside, "external" - provides access upto 10m away, "driver", "gunner", "copilot", "commander"
				   disabledPositions[] = {};
				   defaultComponents[] = {};
				   mountedRadio = "ACRE_PRC117F";                 // Predefined mounted radio
				   isRadioRemovable = 0;
				   intercom[] = {};  
			   };
			};
			class TransportItems
			{};
			class TransportWeapons
			{};
			class TransportMagazines
			{};
		};
};