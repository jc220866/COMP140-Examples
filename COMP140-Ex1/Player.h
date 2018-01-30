#pragma once



class Player
{
public:
	Player();
	~Player();

	//Set Health
	void SetHealth(int health);
	//Get Health
	int GetHealth();

	//Take Damage
	void TakeDamage(int damage);
	//Heal Damage
	void HealDamage(int health);

	//Set Name
	void SetName(const std::string& name);
	//Get Name
	const std::string& GetName();

	//Randomise States between 1 - 20
	void RandomiseStats();
	//Display Stats, print using cout
	void DisplayStats();

	//Create Weapon with the values passed in
	void CreateWeapon(const std::string name, float reloadTime, int ammo, int strength);
	//Display Weapons, print using cout
	void DisplayWeapon();

private:
	int Health;
	int Strength;
	int Dexterity;
	int Constitution;
	int Intelligence;
	int Wisdom;
	int Charisma;

	std::string Name;

	std::string CurrentWeaponName;
	float CurrentReloadTime;
	int CurrentAmmo;
	int CurrentWeaponStrength;
};