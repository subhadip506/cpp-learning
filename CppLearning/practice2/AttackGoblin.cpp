#include <iostream>

int attackGoblin(int goblinhealth, int playerattack) {
	goblinhealth -= playerattack;
	if (goblinhealth <= 0){
		std::cout << "Goblin defeated!" << std::endl;
	}
	else {
		std::cout << "Goblin still has " << goblinhealth << " HP!" << std::endl;
	}
	return goblinhealth;
}