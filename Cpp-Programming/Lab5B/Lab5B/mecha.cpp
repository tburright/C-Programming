#include "mecha.h"
#include "mecha_subs.h"
#include "functions.h"
#include "players.h"
#include <vector>



int main() {
	int menuSelection = 0;

	Player player1;
	Player player2;

	std::vector<int> player1Damages;
	std::vector<int> player2Damages;

	int player1Power = 0;
	int player2Power = 0;

	int test = 0;

	// TODO: Create your weapons here. 
	// Don't over think this step... just create weapon objects. One weapon can be used on multiple mechs
	Weapon wpn_Spork("Giant Metal Spork", "Melee", 200, 50);
	Weapon wpn_Pew("Super Pew Pew", "Plasma Rifle", 40, 35);
	Weapon wpn_Useless("Scary Looking Pointy Things", "Accessory", 0, 100);
	Weapon wpn_Leg("Leg made out of some sharp object", "Leg", 20, 10);
	Weapon wpn_Shank("Rusty Shank", "Shank", 35, 20);
	Weapon wpn_LHand("Left Backhand of Doom", "Hand", 35, 20);
	Weapon wpn_RHand("Right Fist of Fury", "Hand", 25, 15);

	// TODO: Create your sub mechs here
	// Ensure you also pass your weapons to your mechs... you can do this via on sub mech creation or through a setter method
	// Don't overthink this one either... reference course and example if needed. 

	//Create Mech 1 object
	MobileSuit Mech1("WALL-E", "1.0", 50);
	bool validHP = Mech1.setHP(500);
	Mech1.set_rightHand_weapon(wpn_Spork);

	//Create Mech 2 object
	NEXT Mech2("Beast-Mode", "n/a", 100);
	Mech2.setHP(1000);
	Mech2.set_rightHand_weapon(wpn_Pew);
	Mech2.set_rightBack_weapon(wpn_Useless);

	//Create Mech 3 object
	Junkyard Mech3("Lumpy", "unknown", 100);
	Mech3.setHP(2000);
	Mech3.set_leftHand_weapon(wpn_Shank);
	Mech3.set_rightLeg_weapon(wpn_Leg);

	//Create Mech 4 object
	Boxer Mech4("Myke Tythun", "1.0", 50);
	Mech4.setHP(500);
	Mech4.set_rightHand_weapon(wpn_RHand);
	Mech4.set_leftHand_weapon(wpn_LHand);


	// Now we can do our main logic
	// This is where our game gets programmed
	// Have fun here 
	// Don't get stuck on requirments... just do it!
	// This is where our game gets programmed. I included one method call from WG (White Glint) to demonstrate without giving away too much

	// Fancy title
	system("cls");  // Clear sreen  // Clear sreen // Clear sreen
	typeIt("INITIALIZING MECH FIGHT CLUB", 50, 0);  // Function to type out char by char
	typeIt("...", 1000, 1);
	system("cls");  // Clear sreen  // Clear sreen // Clear sreen

	typeIt("Player 1", 50, 0);
	typeIt("...", 500, 1);
	std::cout << std::endl;  
	
	// Used for while loop to check if player 1 has selected a mech
	bool p1Selected = false;
	while (!p1Selected)
	{
		int test = 0;

		// Display menu
		std::cout << "Available Mech Models:" << std::endl;
		std::cout << "1.) MobileSuit" << std::endl;
		std::cout << "2.) NEXT" << std::endl;
		std::cout << "3.) Junkyard Special" << std::endl;
		std::cout << "4.) Boxer" << std::endl;
		std::cout << std::endl;

		// Take user input
		std::cout << "Please select a Mech from above to view more information: ";
		std::cin >> menuSelection;

		//handle user input
		if (menuSelection == 1)
		{
			player1.set_Mobile(Mech1);
		}
		else if (menuSelection == 2)
		{
			player1.set_Next(Mech2);
		}
		else if (menuSelection == 3)
		{
			player1.set_Junk(Mech3);
		}
		else if (menuSelection == 4)
		{
			player1.set_Boxer(Mech4);
		}
		else  // Someone is dumb and didn't pick correctly
		{
			std::cout << "We picked for you :D";
			player1.set_Junk(Mech3);
		}

		system("cls");  // Clear sreen

		// Show Mech info
		player1.display_stats();

		// Show mech weapon info
		player1.weaponsReturnMain();

		std::cout << "\nWould you like to select this mech? (1 = yes, 2 = no): ";
		std::cin >> menuSelection;

		switch (menuSelection)
		{
		case 1: {
			p1Selected = true;
			break;
		}
		case 2: {
			system("cls");  // Clear sreen
			break;
		}
		default:  // Fat fingers or dumb and cant follow instructions
			system("cls");  // Clear sreen
			break;
		}

	}

	system("cls");  // Clear sreen

	typeIt("Player 2", 50, 0);
	typeIt("...", 500, 1);
	std::cout << std::endl;

	// Used for while loop to check if player 2 has selected a mech
	bool p2Selected = false;
	while (!p2Selected)
	{
		int test = 0;

		std::cout << "Available Mech Models:" << std::endl;
		std::cout << "1.) MobileSuit" << std::endl;
		std::cout << "2.) NEXT" << std::endl;
		std::cout << "3.) Junkyard Special" << std::endl;
		std::cout << "4.) Boxer" << std::endl;
		std::cout << std::endl;

		// Take in user input
		std::cout << "Please select a Mech from above to view more information: ";
		std::cin >> menuSelection;

		// Handle user input
		if (menuSelection == 1)
		{
			player2.set_Mobile(Mech1);
		}
		else if (menuSelection == 2)
		{
			player2.set_Next(Mech2);
		}
		else if (menuSelection == 3)
		{
			player2.set_Junk(Mech3);
		}
		else if (menuSelection == 4)
		{
			player2.set_Boxer(Mech4);

		}
		else  // Someone is dumb and cant follow instructions
		{
			std::cout << "We picked for you :D";
			player2.set_Boxer(Mech4);
		}
		system("cls");  // Clear sreen

		// Show mech info
		player2.display_stats();

		//Show Mech weapon info
		player2.weaponsReturnMain();

		std::cout << "\nWould you like to select this mech? (1 = yes, 2 = no): ";
		std::cin >> menuSelection;

		switch (menuSelection)
		{
		case 1: {
			p2Selected = true;
			break;
		}
		case 2: {
			system("cls");  // Clear sreen
			break;
		}
		default:  // Fat fingers or can't follow instructions
			system("cls");  // Clear sreen
			break;
		}

	}

	system("cls");  // Clear sreen
	typeIt(player1.getName(), 100, 0);
	typeIt(" VS ", 200, 0);
	typeIt(player2.getName(), 100, 1);
	typeIt("\nFIGHT!\n", 200, 1);
	delay(2000);

	int player = 1;
	int options = 0;
	while ((player1.getHP() >= 0) && (player2.getHP() >= 0))
	{
		switch (player)
		{
		case 1:
			system("cls");  // Clear sreen
			std::cout << "Player " << player << "\n" << std::endl;

			std::cout << "1.) Attack" << std::endl;
			std::cout << "2.) Skip turn" << std::endl;
			std::cout << "3.) Self-destruct" << std::endl;
			std::cout << std::endl;

			std::cout << "Player " << player << " make a selection from above: ";
			std::cin >> menuSelection;

			switch (menuSelection)
			{
			case 1:  // Attack
			{
				system("cls");  // Clear sreen

				player1Power = player1.getPower();
				player1Damages = player1.getDamagesMain();

				while (player2.getHP() > 0 && player1Power > 0)
				{
					std::cout << "Power remaining: " << player1Power << std::endl;
					std::cout << "Enemy Health: " << player2.getHP() << "\n" << std::endl;

					options = player1.weaponsReturnMain();

					test = 0;
					for (int i = 0; i < options; i++)
					{
						if (player1Power >= player1Damages.at(i + 4))
						{
							test++;
						}
					}

					if (test < 1)
					{
						break;
					}
					else
					{
						std::cout << "\n0) End turn" << std::endl;
						std::cout << std::endl;

						std::cout << "\nSelect from the attacks above: ";
						std::cin >> menuSelection;

						if (player1Power <= player1Damages.at(4) && player1Power <= player1Damages.at(5) && player1Power <= player1Damages.at(6) && player1Power <= player1Damages.at(7))
						{
							break;
						}
						else
						{
							switch (menuSelection)
							{
							case 1:
								if (options >= 1)
								{
									if (player1Power >= player1Damages.at(4))
									{
										
											system("cls");  // Clear sreen
											std::cout << "\n" << player1.getName() << " attacks with " << player1Damages.at(0) << " damage.";
											typeIt("..", 500, 0);
											std::cout << " " << player2.getName() << " has " << player2.computeDamageReceivedMain(player1Damages.at(0)) << " health remaining!\n" << std::endl;
											player1Power -= player1Damages.at(4);
									
										break;
									}
									else
									{

										std::cout << "\nNOT ENOUGH POWER!" << std::endl;
										delay(2000);
										system("cls");  // Clear sreen
										break;
									}
								}
								else
								{
									system("cls");  // Clear sreen
									std::cout << player1.getName() << " froze up!" << std::endl;
									player1Power = 0;
								}
								break;
							case 2:
								if (options >= 2)
								{
									if (player1Power >= player1Damages.at(5))
									{
										if (player1Damages.at(1) == 0 && gamble() == 1)
										{
											system("cls");  // Clear sreen
											typeIt("Wait... ", 200, 1);
											delay(1000);
											typeIt("Something is happening O.o", 50, 1);
											std::cout << "\n" << player1.getName() << " attacks with " << 175 << " damage!";
											typeIt("!!", 500, 0);
											std::cout << " " << player2.getName() << " has " << player2.computeDamageReceivedMain(175) << " health remaining!\n" << std::endl;
											player1Power -= player1Damages.at(5);
										}
										else if (player1Damages.at(1) == 0 && gamble() == 0)
										{
											system("cls");  // Clear sreen
											typeIt("Wait... ", 200, 1);
											delay(1000);
											std::cout << "nothing happened" << std::endl;
											delay(1000);
											std::cout << "\n" << player1.getName() << " attacks with " << player1Damages.at(1) << " damage.";
											typeIt("..", 500, 0);
											std::cout << " " << player2.getName() << " has " << player2.computeDamageReceivedMain(player1Damages.at(1)) << " health remaining!\n" << std::endl;
											player1Power -= player1Damages.at(5);
										}

										else
										{
											system("cls");  // Clear sreen
											std::cout << "\n" << player1.getName() << " attacks with " << player1Damages.at(1) << " damage.";
											typeIt("..", 500, 0);
											std::cout << " " << player2.getName() << " has " << player2.computeDamageReceivedMain(player1Damages.at(1)) << " health remaining!\n" << std::endl;
											player1Power -= player1Damages.at(5);
										}
										break;
									}
									else
									{

										std::cout << "\nNOT ENOUGH POWER!" << std::endl;
										delay(2000);
										system("cls");  // Clear sreen
										break;
									}
								}
								else
								{
									system("cls");  // Clear sreen
									std::cout << player1.getName() << " froze up!" << std::endl;
									player1Power = 0;
								}
								break;
							case 3:
								if (options >= 3)
								{
									if (player1Power >= player1Damages.at(6))
									{
										system("cls");  // Clear sreen
										std::cout << "\n" << player1.getName() << " attacks with " << player1Damages.at(2) << " damage.";
										typeIt("..", 500, 0);
										std::cout << " " << player2.getName() << " has " << player2.computeDamageReceivedMain(player1Damages.at(2)) << " health remaining!\n" << std::endl;
										player1Power -= player1Damages.at(6);
									}
									else
									{

										std::cout << "\nNOT ENOUGH POWER!" << std::endl;
										delay(2000);
										system("cls");  // Clear sreen
										break;
									}
								}
								else
								{
									system("cls");  // Clear sreen
									std::cout << player1.getName() << " froze up!" << std::endl;
									player1Power = 0;
								}
								break;
							case 4:
								if (options >= 4)
								{
									if (player1Power >= player1Damages.at(7))
									{
										system("cls");  // Clear sreen
										std::cout << "\n" << player1.getName() << " attacks with " << player1Damages.at(3) << " damage.";
										typeIt("..", 500, 0);
										std::cout << " " << player2.getName() << " has " << player2.computeDamageReceivedMain(player1Damages.at(3)) << " health remaining!\n" << std::endl;
										player1Power -= player1Damages.at(7);
									}
									else
									{

										std::cout << "\nNOT ENOUGH POWER!" << std::endl;
										delay(2000);
										system("cls");  // Clear sreen
										break;
									}
								}
								else
								{
									system("cls");  // Clear sreen
									std::cout << player1.getName() << " froze up!" << std::endl;
									player1Power = 0;
								}
								break;
							case 0:
								system("cls");  // Clear sreen
								player1Power = 0;
								break;
							default:
								system("cls");  // Clear sreen
								std::cout << player1.getName() << " looks confused!" << std::endl;
								break;
							}
							//}
						}
					}

				}
				std::cout << "\nNOT ENOUGH POWER TO CONTINUE!" << std::endl;
				delay(3000);
				system("cls");  // Clear sreen
				break;
			}
			case 2:  // Skip
				system("cls");  // Clear sreen
				break;
			case 3:  // Admit defeat
				system("cls");  // Clear sreen
				player1.computeDamageReceivedMain(100000);

				break;
			default:
				std::cout << "INVALID OPTION! So, we are just skipping your turn." << std::endl;
				break;
			}
			player = 2;
			break;


		case 2:
			std::cout << "Player " << player << "\n" << std::endl;

			std::cout << "1.) Attack" << std::endl;
			std::cout << "2.) Skip turn" << std::endl;
			std::cout << "3.) Self-destruct" << std::endl;
			std::cout << std::endl;

			std::cout << "Player " << player << " make a selection from above: ";
			std::cin >> menuSelection;

			switch (menuSelection)
			{
			case 1:  // Attack
			{
				system("cls");  // Clear sreen

				player2Power = player2.getPower();
				player2Damages = player2.getDamagesMain();

				while (player1.getHP() > 0 && player2Power > 0)
				{
					std::cout << "Power remaining: " << player2Power << std::endl;
					std::cout << "Enemy Health: " << player1.getHP() << "\n" << std::endl;

					options = player2.weaponsReturnMain();


					test = 0;
					for (int i = 0; i < options; i++)
					{
						if (player2Power >= player2Damages.at(i + 4))
						{
							test++;
						}
					}

					if (test < 1)
					{
						break;
					}
					else
					{

						std::cout << "\n0) End turn" << std::endl;
						std::cout << std::endl;

						std::cout << "\nSelect from the attacks above: ";
						std::cin >> menuSelection;

						switch (menuSelection)
						{
						case 1:
							if (options >= 1)
							{
								if (player2Power >= player2Damages.at(4))
								{
									system("cls");  // Clear sreen
									std::cout << player2.getName() << " attacks with " << player2Damages.at(0) << " damage.";
									typeIt("..", 500, 0);
									std::cout << " " << player1.getName() << " has " << player1.computeDamageReceivedMain(player2Damages.at(0)) << " health remaining!\n" << std::endl;
									player2Power -= player2Damages.at(4);
								}
								else
								{

									std::cout << "\nNOT ENOUGH POWER!" << std::endl;
									delay(2000);
									system("cls");  // Clear sreen
									break;
								}
							}
							else
							{
								system("cls");  // Clear sreen
								std::cout << player2.getName() << " froze up!" << std::endl;
								player1Power = 0;
							}
							break;
						case 2:
							if (options >= 2)
							{
								if (player2Power >= player2Damages.at(5))
								{
									if (player2Damages.at(1) == 0 && gamble() == 1)
									{
										system("cls");  // Clear sreen
										typeIt("Wait... ", 200, 1);
										delay(1000);
										typeIt("Something is happening O.o", 50, 1);
										delay(1000);
										std::cout << "\n" << player2.getName() << " attacks with " << 175 << " damage!";
										typeIt("!!", 500, 0);
										std::cout << " " << player1.getName() << " has " << player1.computeDamageReceivedMain(175) << " health remaining!\n" << std::endl;
										player2Power -= player2Damages.at(5);
									}
									else if (player2Damages.at(1) == 0 && gamble() == 0)
									{
										system("cls");  // Clear sreen
										typeIt("Wait... ", 200, 1);
										delay(1000);
										std::cout << "nothing happened" << std::endl;
										delay(1000);
										std::cout << "\n" << player2.getName() << " attacks with " << player2Damages.at(1) << " damage.";
										typeIt("..", 500, 0);
										std::cout << " " << player1.getName() << " has " << player1.computeDamageReceivedMain(player1Damages.at(5)) << " health remaining!\n" << std::endl;
										player2Power -= player2Damages.at(5);
									}
									else
									{
										system("cls");  // Clear sreen
										std::cout << player2.getName() << " attacks with " << player2Damages.at(1) << " damage.";
										typeIt("..", 500, 0);
										std::cout << " " << player1.getName() << " has " << player1.computeDamageReceivedMain(player2Damages.at(1)) << " health remaining!\n" << std::endl;
										player2Power -= player2Damages.at(5);
									}
								}
								else
								{

									std::cout << "\nNOT ENOUGH POWER!" << std::endl;
									delay(2000);
									system("cls");  // Clear sreen
									break;
								}
							}
							else
							{
								system("cls");  // Clear sreen
								std::cout << player2.getName() << " froze up!" << std::endl;
								player2Power = 0;
							}
							break;
						case 3:
							if (options >= 3)
							{
								if (player2Power >= player2Damages.at(6))
								{
									system("cls");  // Clear sreen
									std::cout << player2.getName() << " attacks with " << player2Damages.at(2) << " damage.";
									typeIt("..", 500, 0);
									std::cout << " " << player1.getName() << " has " << player1.computeDamageReceivedMain(player2Damages.at(2)) << " health remaining!\n" << std::endl;
									player2Power -= player2Damages.at(6);
								}
								else
								{

									std::cout << "\nNOT ENOUGH POWER!" << std::endl;
									delay(2000);
									system("cls");  // Clear sreen
									break;
								}
							}
							else
							{
								system("cls");  // Clear sreen
								std::cout << player2.getName() << " froze up!" << std::endl;
								player2Power = 0;
							}
							break;
						case 4:
							if (options >= 4)
							{
								if (player2Power >= player2Damages.at(7))
								{
									system("cls");  // Clear sreen
									std::cout << player2.getName() << " attacks with " << player2Damages.at(3) << " damage.";
									typeIt("..", 500, 0);
									std::cout << " " << player1.getName() << " has " << player1.computeDamageReceivedMain(player2Damages.at(3)) << " health remaining!\n" << std::endl;
									player2Power -= player2Damages.at(7);
								}
								else
								{

									std::cout << "\nNOT ENOUGH POWER!" << std::endl;
									delay(2000);
									system("cls");  // Clear sreen
									break;
								}
							}
							else
							{
								system("cls");  // Clear sreen
								std::cout << player2.getName() << " froze up!" << std::endl;
								player2Power = 0;
							}
							break;
						case 0:
							system("cls");  // Clear sreen
							player2Power = 0;
							break;
						default:
							system("cls");  // Clear sreen
							std::cout << player2.getName() << " looks confused!" << std::endl;
							break;
						}
						//}
					}

				}
				std::cout << "\nNOT ENOUGH POWER TO CONTINUE!" << std::endl;
				delay(3000);
				system("cls");  // Clear sreen
				break;
			}
			case 2:  // Skip
				system("cls");  // Clear sreen
				break;
			case 3:  // Admit defeat
				system("cls");  // Clear sreen
				player2.computeDamageReceivedMain(100000);

				break;
			default:
				std::cout << "INVALID OPTION! So, we are just skipping your turn." << std::endl;
				break;
			}
			player = 1;
			break;


		}
	}

	typeIt(".:*~* : ._. : *~* : ._. : *~* : ._. : *~* : ._. : *~* : ._. : *~* : ._. : *~* : ._. : *~* : ._. : *~* : .", 5, 1);
	std::cout << "                                               ";
	if (player1.getHP() > 0)
	typeIt("PLAYER 1 WINS!!!!", 100, 1);
	else 
	typeIt("PLAYER 2 WINS!!!!", 100, 1);

	typeIt(".:*~* : ._. : *~* : ._. : *~* : ._. : *~* : ._. : *~* : ._. : *~* : ._. : *~* : ._. : *~* : ._. : *~* : .", 5, 1);

	typeIt("\nPress any key to exit", 100, 0);

	getchar();
	getchar();

	return 0;
}

