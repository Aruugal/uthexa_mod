class CfgVehicles {
	class House {
		class DestructionEffects;	// External class reference
	};
	
	class UH1Wreck_HEX : House {
		model = "\ca\air2\UH1Y\UH1Y_Crashed.p3d";
		icon = "\ca\air2\data\UI\icon_UH1Y_CA.paa";
		mapSize = 15;
		displayName = "Crashed UH-1Y";
		vehicleClass = "Wrecks";
	};
};
class CfgBuildingLoot {
	class Default;
	class Military;	// External class reference
	
	class UH1Wreck_HEX : Military {
		zombieClass[] = {"z_soldier_pilot", "z_soldier_heavy"};
		zombieChance = 0;
		lootChance = 0;
		minRoaming = 4;
		maxRoaming = 8;
		lootPos[] = {};
	};
};