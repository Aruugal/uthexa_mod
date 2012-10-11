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
		model = "\ca\air\Mi8Wreck.p3d"";
		icon = "\ca\air2\data\UI\icon_UH1Y_CA.paa";
		mapSize = 15;
		displayName = "Crashed Mi8";
		vehicleClass = "Wrecks";
	};
};
class CfgBuildingLoot {
	class Default;
	class Military;
	class Mi8Wreck_HEX : Military {
		zombieClass[] = {"z_soldier_pilot", "z_soldier_heavy"};
		zombieChance = 0;
		lootChance = 0;
		minRoaming = 4;
		maxRoaming = 8;
		lootPos[] = {};
	};
};
