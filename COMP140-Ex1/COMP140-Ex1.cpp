// COMP140-Ex1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Player.h"
#include "Weapons.h"

int main()
{
	//Create Player on the Stack 
	Player player1;
	Weapons player1Weapon;

	//Create Player on the Heap, remeber to delete this!!!
	Player* player2 = new Player();
	Weapons* player2Weapon = new Weapons();

	//Randomise Player 1 Stats and initialise
	player1.RandomiseStats();
	player1.SetName("Jeff the Barbarian");
	player1Weapon.CreateWeapon("Sword of Doom", 1.0f, 0, 10);

	//Randomise Player 2 Stats and initialise
	player2->RandomiseStats();
	player2->SetName("Sneaky Pete");
	player2Weapon->CreateWeapon("Bow and Arrow... of DOOM", 2.0f, 100, 9000);

	//Print Player 1
	std::cout << "\nPlayer 1" << std::endl;
	player1.DisplayStats();
	player1Weapon.DisplayWeapon();

	//Print Player 2
	std::cout << "\nPlayer 2" << std::endl;
	player2->DisplayStats();
	player2Weapon->DisplayWeapon();

	//Press q to quit
	std::cout << "\nPress q to quit" << std::endl;
	std::string input;

	//Do a while loop to pause execution until q is pressed
	do
	{
		//Read from standard input and store in a string
		std::cin >> input;
	} while (input != "q");

	//Player 2 was created with the new keyword, make sure you delete
	if (player2)
	{
		delete player2;
		player2 = nullptr;
	}
    return 0;
}
