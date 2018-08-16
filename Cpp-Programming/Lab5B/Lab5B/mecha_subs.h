#pragma once
#include "weapon.h"
#include "functions.h"
#include <vector>

// WARNING
/*
There is an example subclass included... delete it if you want to try it without reference
Please note, this is a bare bones subclass. It only includes enough to get you started
*/



// Sub Classes
class NEXT : public Mecha {
private:
	Weapon LHandW;
	Weapon RHandW;
	Weapon LBackW;
	Weapon RBackW;
	int attacks = 2;
	int attack1 = 0;
	int attack2 = 0;
	int attack3 = 0;
	int attack4 = 0;
	int cost1 = 0;
	int cost2 = 0;
	int cost3 = 0;
	int cost4 = 0;

public:
	// Default Constructor
	NEXT() {
		mechaName = "TASERFACE";
		variant = "N/A";
		type = "NEXT";
		power = 100;
	}
	// Constructor
	NEXT(std::string mn, std::string va, int pwr = 100) {
		mechaName = mn;
		variant = va;
		type = "NEXT";
		power = pwr;
	}
	// Below sets weapons, take weapon object
	void set_leftHand_weapon(Weapon wp) {
		LHandW = wp;
	}
	void set_rightHand_weapon(Weapon wp) {
		RHandW = wp;
	}
	void set_leftBack_weapon(Weapon wp) {
		LBackW = wp;
	}
	void set_rightBack_weapon(Weapon wp) {
		RBackW = wp;
	}
	bool setHP(int hp) {
			hitPoints = hp;
			return true;
	}
	void display_stats() {
		std::cout << "Displaying Stats" << std::endl;
		display_main_stats();
		std::cout << "\n===== WEAPONS =====" << std::endl;
		delay(1500);
		//std::cout << "Left Hand Weapon:" << std::endl;
		//delay(1000);
		//LHandW.display_weapon_stats();
		//delay(2000);
		std::cout << "\nRight Hand Weapon:" << std::endl;
		delay(1000);
		RHandW.display_weapon_stats();
		delay(2000);
		std::cout << "\nLeft Back Weapon: " << std::endl;
		delay(1000);
		LBackW.display_weapon_stats();
		delay(2000);
		//std::cout << "\nRight Back Weapon: " << std::endl;
		//delay(1000);
		//RBackW.display_weapon_stats();
		//delay(1500);
		std::cout << "\n\n";

	}
	int weaponsReturn() {
		//std::cout << "1) ";
		//attack1 = LHandW.display_weapon_line();
		//cost1 = LHandW.display_weapon_lineCost();
		//delay(1000);
		std::cout << "1) ";
		attack1 = RHandW.display_weapon_line();
		cost1 = RHandW.display_weapon_lineCost();
		delay(1000);
		//std::cout << "3) ";
		//attack3 = LBackW.display_weapon_line();
		//cost3 = LBackW.display_weapon_lineCost();
		//delay(1000);
		std::cout << "2) ";
		attack2 = RBackW.display_weapon_line();
		cost2 = RBackW.display_weapon_lineCost();
	
		delay(1000);

		return 4;
	}

	std::vector<int> damageReturn() {
		std::vector<int> damages;
		//for (int i = 0; i > attacks; i++)
		//{
		damages.push_back(attack1);
		damages.push_back(attack2);
		damages.push_back(attack3);
		damages.push_back(attack4);
		//}

		damages.push_back(cost1);
		damages.push_back(cost2);
		damages.push_back(cost3);
		damages.push_back(cost4);

		return damages;
	}



};

class Junkyard : public Mecha {
	// This mech only has two weapons
private:
	Weapon LHandW;
	Weapon RLegW;
	int attacks = 2;
	int attack1 = 0;
	int attack2 = 0;
	int attack3 = 0;
	int attack4 = 0;
	int cost1 = 0;
	int cost2 = 0;
	int cost3 = 0;
	int cost4 = 0;

public:
	// Default Constructor
	Junkyard() {
		mechaName = "Lumpy";
		variant = "No clue";
		type = "Something we found in a junkyard";
		power = 100;
	}
	// Constructor
	Junkyard(std::string mn, std::string va, int pwr = 100) {
		mechaName = mn;
		variant = va;
		type = "Something we found in a junkyard";
		power = pwr;
	}
	// Below sets weapons, take weapon object
	void set_leftHand_weapon(Weapon wp) {
		LHandW = wp;
	}
	void set_rightLeg_weapon(Weapon wp) {
		RLegW = wp;
	}
	bool setHP(int hp) {
			hitPoints = hp;
			return true;
	}

	void display_stats() {
		std::cout << "Displaying Stats:" << std::endl;
		display_main_stats();
		std::cout << "\n===== WEAPONS =====" << std::endl;
		delay(1500);
		std::cout << "Left Hand Weapon:" << std::endl;
		delay(1000);
		LHandW.display_weapon_stats();
		delay(2000);
		std::cout << "\nRight Leg... Weapon?:" << std::endl;
		delay(1000);
		RLegW.display_weapon_stats();
		delay(2000);

		std::cout << "\n\n";

	}
	int weaponsReturn() {
		std::cout << "1) ";
		attack1 = LHandW.display_weapon_line();
		cost1 = LHandW.display_weapon_lineCost();
		delay(1000);
		std::cout << "2) ";
		attack2 = RLegW.display_weapon_line();
		cost2 = RLegW.display_weapon_lineCost();

		delay(1000);


		return 2;
	}

	std::vector<int> damageReturn() {
		std::vector<int> damages;

		damages.push_back(attack1);
		damages.push_back(attack2);
		damages.push_back(attack3);
		damages.push_back(attack4);

		damages.push_back(cost1);
		damages.push_back(cost2);
		damages.push_back(cost3);
		damages.push_back(cost4);
	

		return damages;
	}



};

class MobileSuit : public Mecha {
private:
	Weapon RHandW;
	int attacks = 1;
	int attack1 = 0;
	int attack2 = 0;
	int attack3 = 0;
	int attack4 = 0;
	int cost1 = 0;
	int cost2 = 0;
	int cost3 = 0;
	int cost4 = 0;

public:
	// Default Constructor
	MobileSuit() {
		mechaName = "Nomad";
		variant = "N/A";
		type = "Mobile Suit";
		power = 100;
	}
	// Constructor
	MobileSuit(std::string mn, std::string va, int pwr = 100) {
		mechaName = mn;
		variant = va;
		type = "Mobile Suit";
		power = pwr;
	}
	// Below sets weapons, take weapon object
	//void set_leftHand_weapon(Weapon wp) {
	//	LHandW = wp;
	//}
	void set_rightHand_weapon(Weapon wp) {
		RHandW = wp;
	}
	bool setHP(int hp) {
		hitPoints = hp;
		return true;
	}

	void display_stats() {
		std::cout << "Displaying Stats:" << std::endl;
		display_main_stats();
		std::cout << "\n===== WEAPONS =====" << std::endl;
		delay(1500);
		//std::cout << "Left Hand Weapon:" << std::endl;
		//delay(1000);
		//LHandW.display_weapon_stats();
		//delay(2000);
		std::cout << "\nRight Hand Weapon:" << std::endl;
		delay(1000);
		RHandW.display_weapon_stats();
		delay(2000);

		std::cout << "\n\n";

	}
	int weaponsReturn() {
		std::cout << "1) ";
		attack1 = RHandW.display_weapon_line();
		cost1 = RHandW.display_weapon_lineCost();
		delay(1000);


		return 1;
	}


	std::vector<int> damageReturn() {
		std::vector<int> damages;

		damages.push_back(attack1);
		damages.push_back(attack2);
		damages.push_back(attack3);
		damages.push_back(attack4);

		damages.push_back(cost1);
		damages.push_back(cost2);
		damages.push_back(cost3);
		damages.push_back(cost4);


		return damages;
	}

};

class Boxer : public Mecha {
	// This mech only has two weapons
private:
	Weapon LHandW;
	Weapon RHandW;
	int attacks = 2;
	int attack1 = 0;
	int attack2 = 0;
	int attack3 = 0;
	int attack4 = 0;
	int cost1 = 0;
	int cost2 = 0;
	int cost3 = 0;
	int cost4 = 0;

public:
	// Default Constructor
	Boxer() {
		mechaName = "Nomad";
		variant = "N/A";
		type = "Mobile Suit";
		power = 100;
	}
	// Constructor
	Boxer(std::string mn, std::string va, int pwr = 100) {
		mechaName = mn;
		variant = va;
		type = "Boxer";
		power = pwr;
	}
	// Below sets weapons, take weapon object
	void set_leftHand_weapon(Weapon wp) {
		LHandW = wp;
	}
	void set_rightHand_weapon(Weapon wp) {
		RHandW = wp;
	}
	bool setHP(int hp) {

		hitPoints = hp;
		return true;

	}

	void display_stats() {
		std::cout << "Displaying Stats:" << std::endl;
		display_main_stats();
		std::cout << "===== WEAPONS =====" << std::endl;
		delay(1500);
		std::cout << "Left Hand Weapon:" << std::endl;
		delay(1000);
		LHandW.display_weapon_stats();
		delay(2000);
		std::cout << "\nRight Hand Weapon:" << std::endl;
		delay(1000);
		RHandW.display_weapon_stats();
		delay(2000);

		std::cout << "\n\n";

	}
	int weaponsReturn() {
		std::cout << "1) ";
		attack1 = LHandW.display_weapon_line();
		cost1 = LHandW.display_weapon_lineCost();
		delay(1000);;
		std::cout << "2) ";
		attack2 = RHandW.display_weapon_line();
		cost2 = RHandW.display_weapon_lineCost();
		delay(1000);

		return 2;
	}

	std::vector<int> damageReturn() {
		std::vector<int> damages;

		damages.push_back(attack1);
		damages.push_back(attack2);
		damages.push_back(attack3);
		damages.push_back(attack4);

		damages.push_back(cost1);
		damages.push_back(cost2);
		damages.push_back(cost3);
		damages.push_back(cost4);


		return damages;
	}

};


