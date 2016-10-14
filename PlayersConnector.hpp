#ifndef PLAYERSCONNECTOR_H
#define PLAYERSCONNECTOR_H

#include "Player.hpp"

class PlayersConnector {
private:
    Player player1 {"", 1};
    Player player2 {"", 2};
    Player current_player {"", 1};

public:
    PlayersConnector(Player player1, Player player2);
    Player setCurrentPlayer();
};

#endif // PLAYERSCONNECTOR_H
