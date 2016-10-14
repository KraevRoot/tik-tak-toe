#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include "PlayField.hpp"

class Player {
private:
    std::string name;
    int favorite_number;
public:
    Player(std::string name, int favorite_number);
    std::string getName();
    int getFavoriteNumber();
    void makeStep(PlayField * pf, int x, int y);
    bool operator == (const Player &player);
};

#endif // PLAYER_H
