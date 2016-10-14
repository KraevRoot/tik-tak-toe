#include "Player.hpp"
#include <iostream>

Player::Player(std::string name, int favorite_number)
{
    this->name = name;
    this->favorite_number = favorite_number;
}

std::string Player::getName()
{
    return this->name;
}

void Player::makeStep(PlayField * pf, int x, int y)
{
    pf->setFieldCell(x, y, this->getFavoriteNumber());
}

int Player::getFavoriteNumber()
{
    return this->favorite_number;
}

bool Player::operator ==(const Player &player)
{
    return name == player.name;
}
