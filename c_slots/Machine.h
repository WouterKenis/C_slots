#pragma once

#include <string>
#include "Player.h"
#include <vector>

class Machine
{
private:
	std::string gamename;
	Player player;
	std::vector<int> arr;
	std::vector<int> matches;

public:
	Machine(std::string gamename, Player player);
	Machine();
	~Machine();

	std::string getGameName() const { return gamename; };
	Player getPlayer() const { return player; };
	std::vector<int> getNumbers() const { return arr; };
	void generate();
	int getRandomNumber();
	std::string output(std::vector<int> a, int matched);
};

