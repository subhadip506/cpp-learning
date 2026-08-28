int drinkPotion(int health) {
	int newHealth = health + 30;
	if (newHealth >= 100) {
		newHealth = 100;
	}
	return newHealth;
}