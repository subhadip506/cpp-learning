#include <iostream>

void treasureChest(int gold) {
	if (gold >= 100) {
		std::cout << "you found a Big treasure!" << std::endl;
	}
	else {
		std::cout << "Just a small treasure..." << std::endl;
	}
}