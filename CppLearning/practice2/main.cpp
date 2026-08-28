/*1. Goblin Battle ⚔️
********************** 
You have :

int playerAttack = 25;
int goblinHealth = 40;

Create a function :

int attackGoblin(int health, int damage)
The function should subtract the damage from the goblin's health.
Then use if / else:
    Goblin defeated!
or
    Goblin still has 15 HP!

Bonus: Add playerHealth and check whether the player is still alive.

2. Magic Door 🚪✨
A dungeon door requires a magic key.

Create :

    bool hasKey = true;

Then:

If the player has the key :
"The magical door opens!"
Otherwise :
    "You need a magic key!"

    Bonus : Add another condition :

bool hasMagicPower = true;

The door opens only when the player has both the key AND magic power.*/

//solution  

#include <iostream>
#include "AttackGoblin.h"

int main() {
    int playerAttack = 25;
    int goblinHealth = 40;
	int playerHealth = 100;
	attackGoblin(goblinHealth, playerAttack);

	if (playerHealth <= 0) {
		std::cout << "Player is defeated!" << std::endl;
	}
	else {
		std::cout << "player has " << playerHealth << " HP!" << std::endl;
	}

	bool hasKey = true;
	bool hasMagicPower = true;

	if (hasKey && hasMagicPower) {
		std::cout << "The magical door opens!" << std::endl;
	}
	else {
		std::cout << "You need a magic key and magic power!" << std::endl;
	}
}

