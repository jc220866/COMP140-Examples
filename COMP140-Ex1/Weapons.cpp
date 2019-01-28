#include "stdafx.h"
#include "Weapons.h"



Weapons::Weapons()
{
	/*
	WeaponStats defaultWeapon;

	defaultWeapon.name = "Default Weapon";
	defaultWeapon.reloadTime = 0.0f;
	defaultWeapon.ammo = 0;
	defaultWeapon.strength = 0;
	*/

	CurrentWeaponName = "Default Weapon";
	CurrentReloadTime = 0.0f;
	CurrentAmmo = 0;
	CurrentWeaponStrength = 0;
}

Weapons::~Weapons()
{
}

void Weapons::CreateWeapon(const std::string name, float reloadTime, int ammo, int strength)
{
	/*
	WeaponStats WeaponStats;

	WeaponStats.name = name;
	WeaponStats.reloadTime = reloadTime;
	WeaponStats.ammo = ammo;
	WeaponStats.strength = strength;
	*/

	CurrentWeaponName = name;
	CurrentReloadTime = reloadTime;
	CurrentAmmo = ammo;
	CurrentWeaponStrength = strength;
}

void Weapons::DisplayWeapon()
{
	// TODO learn how to store structs in separate instances and display them from a different class

	std::cout << "Name " << CurrentWeaponName << std::endl;
	std::cout << "Reload Time " << CurrentReloadTime << std::endl;
	std::cout << "Ammo " << CurrentAmmo << std::endl;
	std::cout << "Strength " << CurrentWeaponStrength << std::endl;
}
