/*1.Choose Your Weapon 🗡️🏹

Create three variables :

int swordDamage = 30;
int bowDamage = 20;
int enemyHealth = 50;

Pretend the player selected a weapon :
int weapon = 1;
Use if / else:
1 → Sword
2 → Bow
If the player chooses the sword, subtract swordDamage.
If they choose the bow, subtract bowDamage.

Then check :
Enemy defeated!
or
Enemy has X HP remaining!*/

// solution

#include <iostream>
using namespace std;

int main() {
	int swordDamage = 30;
	int bowDamage = 20;
	int enemyHealth = 50;

	int weapon = 2;

	if (weapon == 1) {
		enemyHealth -= swordDamage;
	}
	else if (weapon == 2) {
		enemyHealth -= bowDamage;
	}

	if (enemyHealth <= 0) {
		cout << "Enemy defeated!" << endl;
	}
	else {
		cout << "Enemy has " << enemyHealth << " HP remaining!" << endl;
	}
}