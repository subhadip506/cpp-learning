#include <iostream>

int main() {
    int playerHealth = 100;
    int playerDamage = 30;

    int goblinHealth = 80;
    int goblinDamage = 20;

    while (goblinHealth > 0 && playerHealth > 0) {

        std::cout << "Player attacks!" << std::endl;

        goblinHealth -= playerDamage;

        if (goblinHealth > 0) {

            std::cout << "Goblin health: "
                << goblinHealth << std::endl;

            std::cout << "Goblin attacks!" << std::endl;

            playerHealth -= goblinDamage;

            if (playerHealth > 0) {
                std::cout << "Player health: "
                    << playerHealth << std::endl;
            }
            else {
                std::cout << "Player is defeated!" << std::endl;
            }

        }
        else {
            std::cout << "Goblin is defeated!" << std::endl;
        }
    }

    return 0;
}