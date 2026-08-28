/* Boss Challenge — Dragon Battle 🐉

Create:

int playerHealth = 100;
int playerDamage = 30;

int dragonHealth = 120;
int dragonDamage = 25;

bool hasShield = true;

Create two functions :

int playerAttack(int enemyHealth, int damage);
int dragonAttack(int playerHealth, int damage);

Then in main() :

	Player attacks the dragon.
	Check if the dragon is defeated.
	If not, the dragon attacks.
	If the player has a shield, reduce the damage.
	Check if the player is defeated.
	Print the appropriate result.*/

// solution:
#include <iostream>
using namespace std;


int playerAttack(int enemyHealth, int playerDamage) {
	enemyHealth -= playerDamage;
	return enemyHealth;
}


int dragonAttack(int playerHealth, int dragonDamage) {
	bool hasShield = true;
	if (hasShield) {
		int damage = dragonDamage / 2;
		playerHealth -= damage;
	}
	else
	{
		playerHealth -= dragonDamage;
	}
	return playerHealth;
}

int main() {
	int playerHealth = 100;
	int playerDamage = 30;

	int dragonHealth = 120;
	int dragonDamage = 25;

	cout <<	"Player attacks the dragon!" << endl;
	dragonHealth = playerAttack(dragonHealth, playerDamage);
	cout << "dragonHealth: " << dragonHealth << endl;

	if (dragonHealth>0) {
		cout << "Dragon attacks the player!" << endl;
		playerHealth = dragonAttack(playerHealth, dragonDamage);
		cout << "playerHealth: " << playerHealth << endl;
	}
	else
	{
		cout << "Dragon is defeated!" << endl;
	}
	if (playerHealth > 0) {
		cout << "Player is still alive!" << endl;

	}
	else
	{
		cout << "Player is defeated!" << endl;
	}
}