#include "stdafx.h"
#include "Player.h"

Player::Player()
{
	Health = 100;
	Strength = 10;
	Dexterity = 10;
	Constitution = 10;
	Intelligence = 10;
	Wisdom = 10;
	Charisma = 10;
	Name = "Player";
}

Player::~Player()
{
}

void Player::SetHealth(int health)
{
	Health = health;
}

int Player::GetHealth()
{
	return Health;
}

void Player::TakeDamage(int damage)
{
	Health -= damage;
}

void Player::HealDamage(int health)
{
	Health += health;
}

void Player::SetName(const std::string & name)
{
	Name = name;
}

const std::string & Player::GetName()
{
	return Name;
}

void Player::RandomiseStats()
{
	srand(time(NULL));

	Strength = rand() % 20;
	Dexterity = rand() % 20;
	Constitution = rand() % 20;
	Intelligence = rand() % 20;
	Wisdom = rand() % 20;
	Charisma = rand() % 20;
}

void Player::DisplayStats()
{
	std::cout << "Strength " << Strength << std::endl;
	std::cout << "Dexterity " << Dexterity << std::endl;
	std::cout << "Constitution " << Constitution << std::endl;
	std::cout << "Intelligence " << Intelligence << std::endl;
	std::cout << "Wisdom " << Wisdom << std::endl;
	std::cout << "Charisma " << Charisma << std::endl;

}

void Player::CreateWeapon(const std::string name, float reloadTime, int ammo, int strength)
{
	CurrentWeaponName = name;
	CurrentReloadTime = reloadTime;
	CurrentAmmo = ammo;
	CurrentWeaponStrength = strength;
}

void Player::DisplayWeapon()
{
	std::cout << "Name " << CurrentWeaponName << std::endl;
	std::cout << "Reload Time " << CurrentReloadTime << std::endl;
	std::cout << "Ammo " << CurrentAmmo << std::endl;
	std::cout << "Strength " << CurrentWeaponStrength << std::endl;
}
