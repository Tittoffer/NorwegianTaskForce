 //===========================================================================================================================================================
 //========================================================================== Patches =================================================================================
 //===========================================================================================================================================================

class CfgPatches {

	class ntf_lmv_rws {
		units[] = {"ntf_iveco_rws"};
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

 class cfgFactionClasses {

	class NTF {
		displayName = "Norwegian Task Force"; //Faction name in-game
		author = "NTF_Saetre";
		icon = "ntf_iveco\data\ntf_insignia.paa"; //Path to texture
		priority = 1; //How far down it is on the menu
		side = 1; // 1 Blufor 2 opfor 3 independant
	};
};

//===========================================================================================================================================================
//========================================================================== CfgAmmo =================================================================================
//===========================================================================================================================================================

class CfgAmmo
{
	class B_127x99_Ball;
	class ntf_127_ball: B_127x99_Ball
	{
		hit=30;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_127";
		visibleFire=8;
		audibleFire=120;
		dangerRadiusBulletClose=12;
		dangerRadiusHit=16;
		suppressionRadiusBulletClose=8;
		suppressionRadiusHit=12;
		cost=5;
		airLock=1;
		caliber=2.5999999;
		typicalSpeed=880;
		timeToLive=10;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale=1.2;
		tracerStartTime=0.075000003;
		tracerEndTime=1;
		airFriction=-0.00085999997;
		class CamShakeExplode
		{
			power=3.6055501;
			duration=0.80000001;
			frequency=20;
			distance=10.8167;
		};
		class CamShakeHit
		{
			power=13;
			duration=0.40000001;
			frequency=20;
			distance=1;
		};
	};
	class ntf_127_ball_tracer: ntf_127_ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_127x108_Ball;
	class ntf_127_mpt: B_127x108_Ball
	{
		hit=60;
		indirectHit=2;
		indirectHitRange=1;
		caliber=3.5999999;
		explosionEffects="ExploAmmoExplosion";
		explosionTime=-1;
		explosive=0.050000001;
		typicalSpeed=1060;
		airFriction=-0.00036000001;
		cost=15;
		class CamShakeExplode
		{
			power=4.4721398;
			duration=0.80000001;
			frequency=20;
			distance=13.4164;
		};
		class CamShakeHit
		{
			power=20;
			duration=0.40000001;
			frequency=20;
			distance=1;
		};
	};
};

//===========================================================================================================================================================
//========================================================================== CfgMagazines =================================================================================
//===========================================================================================================================================================

class CfgMagazines
{
	class 500Rnd_127x99_mag;
	class ntf_100Rnd_127_mag: 500Rnd_127x99_mag
	{
		author="Christiansen";
		scope=2;
		count=100;
		ammo="ntf_127_ball";
		initSpeed=910;
		maxLeadSpeed=36.111099;
		tracersEvery=0;
		nameSound="mgun";
		displayName="100rnd 12.7 Ball";
		descriptionShort="12.7 Ballistic (No Tracer)";
		muzzleImpulseFactor[]={0.050000001,0.050000001};
	};
	class ntf_100Rnd_127_tracer_mag: ntf_100Rnd_127_mag
	{
		author="Christiansen";
		scope=2;
		count=100;
		ammo="ntf_127_ball_tracer";
		initSpeed=910;
		maxLeadSpeed=36.111099;
		tracersEvery=5;
		nameSound="mgun";
		displayName="100rnd 12.7 Ball (Mixed)";
		descriptionShort="12.7 Ballistic (Mixed)";
		muzzleImpulseFactor[]={0.050000001,0.050000001};
	};
	class 450Rnd_127x108_Ball;
	class ntf_100Rnd_127_mpt_mag: 450Rnd_127x108_Ball
	{
		author="Christiansen";
		scope=2;
		count=100;
		ammo="ntf_127_mpt";
		initSpeed=845;
		maxLeadSpeed=36.111099;
		tracersEvery=5;
		nameSound="mgun";
		displayName="100rnd 12.7 MP-T";
		muzzleImpulseFactor[]={0.050000001,0.050000001};
	};
};

//===========================================================================================================================================================
//========================================================================== cfgWeapons =================================================================================
//===========================================================================================================================================================

class cfgWeapons
{
	class player;
	class MGun;
	class HMG_127;
	class ntf_127_rws: HMG_127
	{
		class player: player
		{
			reloadTime=0.050000001;
		};
		displayName="Protector Lite M2";
		magazines[]=
		{
			"ntf_100Rnd_127_mag",
			"ntf_100Rnd_127_tracer_mag",
			"ntf_100Rnd_127_mpt_mag"
		};
		magazineReloadTime=8;
	};
};

//========================================================================== VEHICLES =================================================================================

class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class Turrets;
	};
	class burnes_panther_base: Car_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class burnes_panther: burnes_panther_base
	{
	};
	class ntf_iveco_rws: burnes_panther
	{
		scope=2;
		faction="NTF";
		side=1;
		author="Christiansen";
		displayName="Iveco LMV (RWS)";
		crew="";
		typicalCargo[]=
		{
			""
		};
		hiddenselectionstextures[]=
		{
			""
		};
		weapons[]=
		{
			"TruckHorn"
		};
		magazines[]={};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Long-Range 1";
				shortName="LR1";
				componentName="ACRE_VRC103";
				allowedPositions[]=
				{
					"driver",
					"commander"
				};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC117F";
				isRadioRemovable=0;
				intercom[]={};
			};
			class Rack_2
			{
				displayName="Long-Range 2";
				shortName="LR2";
				componentName="ACRE_VRC103";
				allowedPositions[]=
				{
					"driver",
					"commander"
				};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC117F";
				isRadioRemovable=0;
				intercom[]={};
			};
			class Rack_3
			{
				displayName="Long-Range 3";
				shortName="LR3";
				componentName="ACRE_VRC103";
				allowedPositions[]=
				{
					"driver",
					"commander"
				};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC117F";
				isRadioRemovable=0;
				intercom[]={};
			};
		};
		class TransportItems
		{
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"ntf_127_rws"
				};
				magazines[]=
				{
					"ntf_100Rnd_127_mpt_mag",
					"ntf_100Rnd_127_mpt_mag",
					"ntf_100Rnd_127_mpt_mag",
					"ntf_100Rnd_127_mpt_mag",
					"ntf_100Rnd_127_mpt_mag",
					"ntf_100Rnd_127_tracer_mag",
					"ntf_100Rnd_127_tracer_mag",
					"ntf_100Rnd_127_mag"
				};
			};
		};
	};
};