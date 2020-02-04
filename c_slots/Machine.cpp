#include "Machine.h"
#include <stdlib.h>
#include <time.h>   
#include <iostream>
#include <algorithm>
#include <random>

Machine::Machine()
{

}

Machine::~Machine()
{
}

Machine::Machine(std::string gamename, Player player) : gamename(gamename), player(player)
{

}

void Machine::generate()
{
	
	arr.clear();
	matches.clear();
	int highest = 0;

	arr.insert(arr.end(), { getRandomNumber(), getRandomNumber(), getRandomNumber() });

	matches.push_back(std::count(arr.begin(), arr.end(), arr[0]));
	matches.push_back(std::count(arr.begin(), arr.end(), arr[1]));
	matches.push_back(std::count(arr.begin(), arr.end(), arr[2]));

	highest = *max_element(std::begin(matches), std::end(matches));
	
	std::cout << std::to_string(arr[0]) + " - ";
	std::cout << std::to_string(arr[1]) + " - ";
	std::cout << std::to_string(arr[2]) << std::endl;

	std::cout << std::endl << output(arr, highest) << std::endl;
}

int Machine::getRandomNumber()
{
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> dist(1, 5);

	return dist(mt);
}

std::string Machine::output(std::vector<int> a, int matched)
{
	if (matched == 1)
	{
		player.removeMoney(20);
		return "Ya lost €20.";
	}
	else {
		if (matched == 2) {
			player.addMoney(200);
			return "You won €200.";
		}
		else {
			player.addMoney(1000);
			return "Jackpot €1000.";
		}
	}
}