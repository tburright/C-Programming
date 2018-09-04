#pragma once
#include "mecha_subs.h"

class Player {
private:
	MobileSuit Mech1;
	NEXT Mech2;
	Junkyard Mech3;
	Boxer Mech4;
	int type = 0;

public:
	Player() {}
	/*Player(std::string name, std::string type, int dmg, int ct) {
	}*/

	int attack1;
	int attack2;
	int attack3;
	int attack4;

	void set_Mobile(MobileSuit it) {
		type = 1;
		Mech1 = it;
	}
	void set_Next(NEXT it) {
		type = 2;
		Mech2 = it;
	}
	void set_Junk(Junkyard it) {
		type = 3;
		Mech3 = it;
	}
	void set_Boxer(Boxer it) {
		type = 4;
		Mech4 = it;
	}
	void display_stats() {
		std::cout << "Displaying Stats" << std::endl;
		if (type == 1)
			Mech1.display_main_stats();
		else if (type == 2)
			Mech2.display_main_stats();
		else if (type == 3)
			Mech3.display_main_stats();
		else if (type == 4)
			Mech4.display_main_stats();
	}

	int weaponsReturnMain()
	{
		int options = 0;

		std::cout << "Displaying Weapons:" << std::endl;
		if (type == 1)
			options = Mech1.weaponsReturn();
		else if (type == 2)
			options = Mech2.weaponsReturn();
		else if (type == 3)
			options = Mech3.weaponsReturn();
		else if (type == 4)
			options = Mech4.weaponsReturn();

		return options;
	}

	int getHP()
	{
		if (type == 1)
			return Mech1.getHP();
		else if (type == 2)
			return Mech2.getHP();
		else if (type == 3)
			return Mech3.getHP();
		else if (type == 4)
			return Mech4.getHP();
	}

	std::string getName()
	{
		if (type == 1)
			return Mech1.getName();
		else if (type == 2)
			return Mech2.getName();
		else if (type == 3)
			return Mech3.getName();
		else if (type == 4)
			return Mech4.getName();
	}

	std::vector<int> getDamagesMain()
	{
		std::vector<int> damages;
		if (type == 1)
			return damages = Mech1.damageReturn();
		else if (type == 2)
			return damages = Mech2.damageReturn();
		else if (type == 3)
			return damages = Mech3.damageReturn();
		else if (type == 4)
			return damages = Mech4.damageReturn();
	}

	virtual int computeDamageReceivedMain(int damagePts) {
		if (type == 1)
			return Mech1.computeDamageReceived(damagePts);
		else if (type == 2)
			return Mech2.computeDamageReceived(damagePts);
		else if (type == 3)
			return Mech3.computeDamageReceived(damagePts);
		else if (type == 4)
			return Mech4.computeDamageReceived(damagePts);
	}

	int getPower()
	{
		if (type == 1)
			return Mech1.getPower();
		else if (type == 2)
			return Mech2.getPower();
		else if (type == 3)
			return Mech3.getPower();
		else if (type == 4)
			return Mech4.getPower();
	}
};

