#include <iostream>
int main() {
	int health = 40;
	int potions = 3;

	while (health < 100 && potions > 0) {
		std::cout << "Drinking Potion... " << std::endl;
		health += 20;
		std::cout << "Health:" << health << std::endl;
		potions--;
		std::cout << "Potion:" << potions<< std::endl;
		if (health >= 100) {
			std::cout << "Full health!" << std::endl;
			health = 100;
		}
		else if (potions == 0) {
			std::cout << "You have no potions left" << std::endl;
		}
	}
}