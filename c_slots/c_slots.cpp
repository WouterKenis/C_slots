
#include <iostream>
#include "Machine.h"
#include <algorithm>


int main()
{

	std::string name;
	std::string gamename;

	std::cout << "Hi, what's your name?" << std::endl;
	std::cin >> name;
	
	std::cout << "Do you wish to start a new game? Please enter a name for your new machine." << std::endl;
	std::cin >> gamename;
	
	Player p(name);
	Machine machine(gamename, p);
	std::string command;

	std::cout << "Welcome to " + machine.getGameName() + ", " + machine.getPlayer().getName() + " is playing.";

	std::cout << std::endl << "Available commands are: stop, play, money." << std::endl;
	std::cin >> command;

	while ((command.compare("play")) == 0 || (command.compare("money")) == 0)
	{
		if ((command.compare("money")) == 0)
		{
			std::cout << "You currently have " + std::to_string(machine.getPlayer().getMoney()) + "." << std::endl;
		}
		else
		{
			machine.generate();
		}
		std::cin >> command;
	}

	return 0;
}
