/*1. Treasure Chest 💰
***********************
Make a program where :-

* You have a variable gold.
* The player finds a treasure.
* If the treasure is worth 100 or more, print "You found a BIG treasure!"
* Otherwise print "Just a small treasure..."

2. Health Potion ❤️
********************

The player has:
int health = 60;
A potion restores 30 health.
Create a function:int drinkPotion(int health)
If the resulting health is 100 or more, print "Full health!".
Otherwise print the player's new health.*/


// solution

#include <iostream>
#include "treasureChest.h"
#include "HealthPotion.h"

int main() {
	int gold = 150;
	int health = 90;

	treasureChest(gold);

	health = drinkPotion(health);
	if (health >= 100) {
		std::cout << "Full health!" << std::endl;
	}
	else {
		std::cout << "Your new health is: " << health << std::endl;
	}

	return 0;
}

