// Ghozt
// Lab 3B
// Mech Fight Club

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

	int player1Health;
	int player2Health;

	int test = 0;

	// TODO: Create your weapons here. 
	// Don't over think this step... just create weapon objects. One weapon can be used on multiple mechs
	Weapon wpn_Spork("Giant Metal Spork", "Melee", 120, 50);
	Weapon wpn_Pew("Super Pew Pew", "Plasma Rifle", 40, 35);
	Weapon wpn_Useless("Scary Looking Pointy Things", "Accessory", 0, 100);
	Weapon wpn_Leg("Leg made out of some sharp object", "Leg", 20, 20);
	Weapon wpn_Shank("Rusty Shank", "Shank", 35, 25);
	Weapon wpn_LHand("Left Backhand of Doom", "Hand", 45, 25);
	Weapon wpn_RHand("Right Fist of Fury", "Hand", 25, 15);

	// TODO: Create your sub mechs here
	// Ensure you also pass your weapons to your mechs... you can do this via on sub mech creation or through a setter method
	// Don't overthink this one either... reference course and example if needed. 

	//Create Mech 1 object
	MobileSuit Mech1("WALL-E", "1.0", 50);
	bool validHP = Mech1.setHP(750);
	Mech1.set_rightHand_weapon(wpn_Spork);

	//Create Mech 2 object
	NEXT Mech2("Beast-Mode", "n/a", 100);
	Mech2.setHP(750);
	Mech2.set_rightHand_weapon(wpn_Pew);
	Mech2.set_rightBack_weapon(wpn_Useless);

	//Create Mech 3 object
	Junkyard Mech3("Lumpy", "unknown", 100);
	Mech3.setHP(1000);
	Mech3.set_leftHand_weapon(wpn_Shank);
	Mech3.set_rightLeg_weapon(wpn_Leg);

	//Create Mech 4 object
	Boxer Mech4("Myke Tythun", "1.0", 75);
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
	typeIt("...", 500, 1);

	fancyMech2();  //'Nuff said.
	
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
		case 1: {  // Yes
			p2Selected = true;
			break;
		}
		case 2: {  // No. go back to start of loop.
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

	// Initial values for modifying
	player1Health = player1.getHP();
	player2Health = player2.getHP();

	int player = 1;
	int options = 0;
	// Loop until one Mech dead
	while ((player1.getHP() >= 0) && (player2.getHP() >= 0))
	{
		// Player 1 menu
		switch (player)
		{
		case 1:  // Player 1 turn
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

				// While enemy not dead and we still have power
				while (player2.getHP() > 0 && player1Power > 0)
				{
					system("cls");
					std::cout << "Enemy Health: [";
					// Loop through to make fancy health bar: [|||||||||||||     ]
					for (int i = 25; i < player2.getHP(); i++)
					{
						std::cout << "|" << std::flush;
						i = i + 24;
					}
					for (int i = player2.getHP(); i < player2Health; i++)
					{
						std::cout << " " << std::flush;
						i = i + 24;
					}
					std::cout << "] " << player2.getHP() << "\n" << std::endl;

					// Loop through to make fancy health bar: [|||||||||||||     ]
					std::cout << "Your Health: [";
					for (int i = 25; i < player1.getHP(); i++)
					{
						std::cout << "|" << std::flush;
						i = i + 24;
					}
					for (int i = player1.getHP(); i < player1Health; i++)
					{
						std::cout << " " << std::flush;
						i = i + 24;
					}
					std::cout << "] " << player1.getHP() << std::endl;

					// Loop through to make fancy power bar: [|||||||||||||     ]
					std::cout << "Power remaining: [";
					for (int i = 5; i < player1Power; i++)
					{
						std::cout << "|" << std::flush;
						i = i + 4;
					}
					for (int i = player1Power; i < player1.getPower(); i++)
					{
						std::cout << " " << std::flush;
						i = i + 4;
					}
					std::cout << "] " << player1Power << std::endl;
					std::cout << "\n" << std::endl;

					options = player1.weaponsReturnMain();

					// Used to check if they can afford any of the availble weapons
					test = 0;
					for (int i = 0; i < options; i++)
					{
						if (player1Power >= player1Damages.at(i + 4))
							test++;
					}

					// Can't afford any of the avail attacks
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
							case 1:  // Attack 1
								if (options >= 1)  //Verify valid move against total weapons returned from mech class
								{
									if (player1Power >= player1Damages.at(4))
									{
										std::cout << "\n" << player1.getName() << " attacks with " << player1Damages.at(0) << " damage.";
										typeIt("..", 500, 0);
										std::cout << " " << player2.getName() << " has " << player2.computeDamageReceivedMain(player1Damages.at(0)) << " health remaining!\n" << std::endl;
										player1Power -= player1Damages.at(4);  // Reduce power
										delay(2000);
									
										break;
									}
									else
									{
										std::cout << "\nNOT ENOUGH POWER!" << std::endl;
										delay(2000);
										break;
									}
								}
								else  // Punish for invalid move
								{
									std::cout << "\n" << player1.getName() << " froze up!" << std::endl;
									player1Power = 0;
									delay(2000);
								}
								break;
							case 2:  // Attack 2
								if (options >= 2)  //Verify valid move against total weapons returned from mech class
								{
									if (player1Power >= player1Damages.at(5))
									{
										// Sneaking in a little bit of fun logic for NEXT special weapon
										if (player1Damages.at(1) == 0 && gamble() == 1)  // Call gamble() to return with 50% rate
										{
											typeIt("\nWait... ", 200, 1);
											delay(1000);
											typeIt("Something is happening O.o", 50, 1);
											std::cout << "\n" << player1.getName() << " attacks with " << 175 << " damage!";
											typeIt("!!", 500, 0);
											std::cout << " " << player2.getName() << " has " << player2.computeDamageReceivedMain(175) << " health remaining!\n" << std::endl;
											player1Power -= player1Damages.at(5);  // Reduce power
											delay(2000);
										}
										else if (player1Damages.at(1) == 0 && gamble() == 0)
										{
											typeIt("\nWait... ", 200, 1);
											delay(1000);
											std::cout << "nothing happened." << std::endl;
											delay(2000);
											player1Power -= player1Damages.at(5);  // Reduce power
											delay(3000);
										}
										else  // Mech doesn't have special attack
										{
											std::cout << "\n" << player1.getName() << " attacks with " << player1Damages.at(1) << " damage.";
											typeIt("..", 500, 0);
											std::cout << " " << player2.getName() << " has " << player2.computeDamageReceivedMain(player1Damages.at(1)) << " health remaining!\n" << std::endl;
											player1Power -= player1Damages.at(5);  // Reduce power
											delay(2000);
										}
										break;
									}
									else  // Not enough power for move
									{
										std::cout << "\nNOT ENOUGH POWER!" << std::endl;
										delay(2000);
										break;
									}
								}
								else  // Punish them for incorrect move
								{
									std::cout << player1.getName() << " froze up!" << std::endl;
									player1Power = 0;
									delay(2000);
								}
								break;
							case 3:  // Atatck 3
								if (options >= 3)  //Verify valid move against total weapons returned from mech class
								{
									if (player1Power >= player1Damages.at(6))
									{
										std::cout << "\n" << player1.getName() << " attacks with " << player1Damages.at(2) << " damage.";
										typeIt("..", 500, 0);
										std::cout << " " << player2.getName() << " has " << player2.computeDamageReceivedMain(player1Damages.at(2)) << " health remaining!\n" << std::endl;
										player1Power -= player1Damages.at(6);  // Reduce power
										delay(2000);
									}
									else
									{
										std::cout << "\nNOT ENOUGH POWER!" << std::endl;
										delay(2000);
										break;
									}
								}
								else
								{
									// Punish for incorrect move
									std::cout << player1.getName() << " froze up!" << std::endl;
									player1Power = 0;  // Reduce power to 0; end turn.
									delay(2000);
								}
								break;
							case 4:  // Atatck 4
								if (options >= 4)  //Verify valid move against total weapons returned from mech class
								{
									if (player1Power >= player1Damages.at(7))
									{
										std::cout << "\n" << player1.getName() << " attacks with " << player1Damages.at(3) << " damage.";
										typeIt("..", 500, 0);
										std::cout << " " << player2.getName() << " has " << player2.computeDamageReceivedMain(player1Damages.at(3)) << " health remaining!\n" << std::endl;
										player1Power -= player1Damages.at(7);  // Reduce power
										delay(2000);
									}
									else
									{
										std::cout << "\nNOT ENOUGH POWER!" << std::endl;
										delay(2000);
										break;
									}
								}
								else  
								{
									// Punish for invalid move
									std::cout << player1.getName() << " froze up!" << std::endl;
									player1Power = 0;
									delay(2000);
								}
								break;
							case 0:  // End turn
								system("cls");  // Clear sreen
								player1Power = 0;
								break;
							default:  // Punish for invalid move.
								std::cout << player1.getName() << " looks confused!" << std::endl;
								player1Power -= 20;
								delay(2000);
								break;
							}
						}
					}
				}
				std::cout << "\nNOT ENOUGH POWER TO CONTINUE!" << std::endl;
				delay(3000);
				system("cls");  // Clear sreen
				break;
			}
			case 2:  // Skip
				std::cout << "\nSKIPPING TURN" << std::endl;
				delay(2000);
				system("cls");  // Clear sreen
				break;
			case 3:  // Admit defeat
				system("cls");  // Clear sreen
				player1.computeDamageReceivedMain(100000);

				break;
			default:  // Entered invalid option
				std::cout << "INVALID OPTION! So, we are just skipping your turn." << std::endl;
				break;
			}
			player = 2;
			break;


		case 2:  // Player 2 turn
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

				// While enemy not dead and we still have power
				while (player1.getHP() > 0 && player2Power > 0)
				{
					system("cls");
					// Loop through to make fancy health bar: [|||||||||||||     ]
					std::cout << "Enemy Health: [";
					for (int i = 25; i < player1.getHP(); i++)
					{
						std::cout << "|" << std::flush;
						i = i + 24;
					}
					for (int i = player1.getHP(); i < player1Health; i++)
					{
						std::cout << " " << std::flush;
						i = i + 24;
					}
					std::cout << "] " << player1.getHP() << "\n" << std::endl;

					// Loop through to make fancy health bar: [|||||||||||||     ]
					std::cout << "Your Health: [";
					for (int i = 25; i < player2.getHP(); i++)
					{
						std::cout << "|" << std::flush;
						i = i + 24;
					}
					for (int i = player2.getHP(); i < player2Health; i++)
					{
						std::cout << " " << std::flush;
						i = i + 24;
					}
					std::cout << "] " << player2.getHP() << std::endl;
					// Loop through to make fancy power bar: [|||||||||||||     ]
					std::cout << "Power remaining: [";
					for (int i = 5; i < player2Power; i++)
					{
						std::cout << "|" << std::flush;
						i = i + 4;
					}
					for (int i = player2Power; i < player2.getPower(); i++)
					{
						std::cout << " " << std::flush;
						i = i + 4;
					}
					std::cout << "] " << player2Power << std::endl;
					std::cout << "\n" << std::endl;

					//Set options as total amount of weapons avail
					options = player2.weaponsReturnMain();

					test = 0;  // Used to count total possible moves and what they can afford
					for (int i = 0; i < options; i++)
					{
						if (player2Power >= player2Damages.at(i + 4))
							test++;
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
						case 1:  // Attack 1
							if (options >= 1)  //Verify valid move against total weapons returned from mech class
							{
								if (player2Power >= player2Damages.at(4))
								{
									std::cout << "\n" << player2.getName() << " attacks with " << player2Damages.at(0) << " damage.";
									typeIt("..", 500, 0);
									std::cout << " " << player1.getName() << " has " << player1.computeDamageReceivedMain(player2Damages.at(0)) << " health remaining!\n" << std::endl;
									player2Power -= player2Damages.at(4);
									delay(2000);
								}
								else
								{
									std::cout << "\nNOT ENOUGH POWER!" << std::endl;
									delay(2000);
									break;
								}
							}
							else  // Punish for invalid move
							{
								std::cout << "\n" << player2.getName() << " froze up!" << std::endl;
								player1Power = 0;
								delay(2000);
							}
							break;
						case 2:  // Attack 2
							if (options >= 2)  //Verify valid move against total weapons returned from mech class
							{
								if (player2Power >= player2Damages.at(5))
								{
									// I'm just gunna sneak a little bit of fun login in here for the NEXT spike attack
									if (player2Damages.at(1) == 0 && gamble() == 1)  // Call gamble to determine if success or not
									{
										typeIt("\nWait... ", 200, 1);
										delay(1000);
										typeIt("Something is happening O.o", 50, 1);
										delay(1000);
										std::cout << "\n" << player2.getName() << " attacks with " << 175 << " damage!";
										typeIt("!!", 500, 0);
										std::cout << " " << player1.getName() << " has " << player1.computeDamageReceivedMain(175) << " health remaining!\n" << std::endl;
										player2Power -= player2Damages.at(5);
										delay(2000);
									}
									else if (player2Damages.at(1) == 0 && gamble() == 0)  // No luck.
									{
										typeIt("\nWait... ", 200, 1);
										delay(1000);
										std::cout << "nothing happened." << std::endl;
										delay(2000);
										player2Power -= player2Damages.at(5);
										delay(3000);
									}
									else  // Mech doesnt have special gamble move
									{
										std::cout << "\n" << player2.getName() << " attacks with " << player2Damages.at(1) << " damage.";
										typeIt("..", 500, 0);
										std::cout << " " << player1.getName() << " has " << player1.computeDamageReceivedMain(player2Damages.at(1)) << " health remaining!\n" << std::endl;
										player2Power -= player2Damages.at(5);
										delay(2000);
									}
								}
								else
								{
									// Can't afford the attack
									std::cout << "\nNOT ENOUGH POWER!" << std::endl;
									delay(2000);
									break;
								}
							}
							else
							{
								// Didn't select a valid weapon
								std::cout << player2.getName() << " froze up!" << std::endl;
								player2Power = 0;
								delay(2000);
							}
							break;
						case 3:  // Attack 3
							if (options >= 3)  //Verify valid move against total weapons returned from mech class
							{
								if (player2Power >= player2Damages.at(6))
								{
									std::cout << "\n" << player2.getName() << " attacks with " << player2Damages.at(2) << " damage.";
									typeIt("..", 500, 0);
									std::cout << " " << player1.getName() << " has " << player1.computeDamageReceivedMain(player2Damages.at(2)) << " health remaining!\n" << std::endl;
									player2Power -= player2Damages.at(6);
									delay(2000);
									//system("cls");  // Clear sreen
								}
								else
								{

									std::cout << "\nNOT ENOUGH POWER!" << std::endl;
									delay(2000);
									//system("cls");  // Clear sreen
									break;
								}
							}
							else
							{
								std::cout << "\n" << player2.getName() << " froze up!" << std::endl;
								player2Power = 0;
								delay(2000);
								//system("cls");  // Clear sreen
							}
							break;
						case 4:
							if (options >= 4)  //Verify valid move against total weapons returned from mech class
							{
								if (player2Power >= player2Damages.at(7))
								{
									std::cout << "\n" << player2.getName() << " attacks with " << player2Damages.at(3) << " damage.";
									typeIt("..", 500, 0);
									std::cout << " " << player1.getName() << " has " << player1.computeDamageReceivedMain(player2Damages.at(3)) << " health remaining!\n" << std::endl;
									player2Power -= player2Damages.at(7);
									delay(2000);
									//system("cls");  // Clear sreen
								}
								else
								{
									std::cout << "\nNOT ENOUGH POWER!" << std::endl;
									delay(2000);
									//system("cls");  // Clear sreen
									break;
								}
							}
							else
							{
								std::cout << "\n" << player2.getName() << " froze up!" << std::endl;
								player2Power = 0;
								delay(2000);
								//system("cls");  // Clear sreen
							}
							break;
						case 0:
							system("cls");  // Clear sreen
							player2Power = 0;
							break;
						default:
							std::cout << "\n" << player2.getName() << " looks confused!" << std::endl;
							player2Power -= 20;
							delay(2000);
							//system("cls");  // Clear sreen
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
				std::cout << "\nSKIPPING TURN" << std::endl;
				delay(2000);
				system("cls");  // Clear sreen
				break;
			case 3:  // Admit defeat
				system("cls");  // Clear sreen
				player2.computeDamageReceivedMain(100000);

				break;
			default:
				std::cout << "\nINVALID OPTION! So, we are just skipping your turn." << std::endl;
				delay(1000);
				system("cls");  // Clear sreen
				break;
			}
			player = 1;
			break;

		}
	}

	typeIt(".:*~* : ._. : *~* : ._. : *~* : ._. : *~* : ._. : *~* : ._. : *~* : ._. : *~* : ._. : *~* : ._. : *~* : .", 5, 1);
	std::cout << "                                            ";
	if (player1.getHP() > 0)
	typeIt("PLAYER 1 WINS!!!!", 100, 1);
	else 
	typeIt("PLAYER 2 WINS!!!!", 100, 1);

	typeIt(".:*~* : ._. : *~* : ._. : *~* : ._. : *~* : ._. : *~* : ._. : *~* : ._. : *~* : ._. : *~* : ._. : *~* : .", 5, 1);
	fancyMech2();  //'Nuff said.

	typeIt("\nPress any key to exit", 100, 0);

	getchar();
	getchar();

	return 0;
}

