#pragma once

#include <string>

class Player
{
private:
	std::string name;
	int money;

public:
	Player(std::string name, int money);
	Player(std::string name);
	Player();
	~Player();

	int getMoney() const { return money; };
	std::string getName() const { return name; };

	void addMoney(int money) { this->money += money; };
	void removeMoney(int money) { this->money -= money; };
};

