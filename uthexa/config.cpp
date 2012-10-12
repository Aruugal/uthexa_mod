class CfgPatches {
	class uthexa {
		units[]={};
		weapons[]={};
		requiredVersion = 0.1;
		requiredAddons[]= {dayz_anim,dayz_code,dayz_weapons,dayz_equip,dayz_vehicles};
	};
};
class CfgVehicles {
	class House;
	class Mi8Wreck_HEX : House {
		model = "\ca\air\Mi8Wreck.p3d";
		icon = "\ca\air2\data\UI\icon_UH1Y_CA.paa";
		mapSize = 15;
		displayName = "Crashed Mi8";
		vehicleClass = "Wrecks";
	};
	class Cargo1_HEX : House {
		model = "\ca\misc\Misc_cargo_cont_net1.p3d";
		icon = "\ca\air2\data\UI\icon_UH1Y_CA.paa";
		mapSize = 15;
		displayName = "Cargo1";
		vehicleClass = "Wrecks";
	};
	class Cargo2_HEX : House {
		model = "\ca\misc\Misc_cargo_cont_net2.p3d";
		icon = "\ca\air2\data\UI\icon_UH1Y_CA.paa";
		mapSize = 15;
		displayName = "Cargo2";
		vehicleClass = "Wrecks";
	};
	class Cargo3_HEX : House {
		model = "\ca\misc\Misc_cargo_cont_net3.p3d";
		icon = "\ca\air2\data\UI\icon_UH1Y_CA.paa";
		mapSize = 15;
		displayName = "Cargo3";
		vehicleClass = "Wrecks";
	};
};
class CfgBuildingLoot {
	class Default;
	class Military;
	class Residential;
	class Mi8Wreck_HEX : Military {
		zombieClass[] = {"z_soldier_pilot", "z_soldier_heavy"};
		zombieChance = 0;
		lootChance = 0;
		minRoaming = 4;
		maxRoaming = 8;
		lootPos[] = {};
	};
	class Cargo1_HEX : Residential {
		zombieChance = 0;
		minRoaming = 1;
		maxRoaming = 3;
		lootChance = 0;
		lootPos[] = {};
	};
	class Cargo2_HEX : Residential {
		zombieChance = 0;
		minRoaming = 3;
		maxRoaming = 6;
		lootChance = 0;
		lootPos[] = {};
	};
	class Cargo3_HEX : Residential {
		zombieChance = 0;
		minRoaming = 4;
		maxRoaming = 8;
		lootChance = 0;
		lootPos[] = {};
	};
	
};
