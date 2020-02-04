#include "Player.h"

Player::Player(std::string name, int money) : name(name), money(money)
{
	
}

Player::Player(std::string name) : name(name)
{
	money = 100;
}

Player::~Player()
{

}

Player::Player()
{
	money = 100;
}