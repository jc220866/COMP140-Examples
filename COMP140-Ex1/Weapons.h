#pragma once

class Weapons
{
public:

	Weapons();
	~Weapons();

	//Create Weapon with the values passed in
	void CreateWeapon(const std::string name, float reloadTime, int ammo, int strength);

	//Display Weapons, print using cout
	void DisplayWeapon();

private:

	/*
	struct WeaponStats
	{
		std::string name;
		float reloadTime;
		int ammo;
		int strength;
	};
	*/

	std::string CurrentWeaponName;
	float CurrentReloadTime;
	int CurrentAmmo;
	int CurrentWeaponStrength;
};
