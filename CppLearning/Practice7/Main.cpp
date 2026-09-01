/* Dungeon Menu :
******************
	
1. Enter dungeon
2. Visit shop
3. Leave dungeon
*/

//solution:-
#include <iostream>

int main() {
	int option=0;

	std::cout << "********" << std::endl;
	std::cout << "Dungeon" << std::endl;
	std::cout << "********" << std::endl;
		
	while (option != 3)
	{
		std::cout << "choose:(1-3)" << std::endl;
		std::cout << "1. Enter dungeon" << std::endl;
		std::cout << "2. Visit shop" << std::endl;
		std::cout << "3. Leave dungeon" << std::endl;
		std::cin >> option;
		

		switch (option) {
		case 1:
			std::cout << "You enter the dungeon!" << std::endl;
			break;
		case 2:
			std::cout << "You visit the shop!" << std::endl;
			break;
		case 3:
			std::cout << "You leave the dungeon." << std::endl;
			break;
		default:
			std::cout << "Invalid choice!" << std::endl;
		}
	}
		
}