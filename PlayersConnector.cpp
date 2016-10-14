#include "PlayersConnector.hpp"


PlayersConnector::PlayersConnector(Player player1, Player player2)
{
    this->player1 = player1;
    this->player2 = player2;
    current_player = player1;
}

Player PlayersConnector::setCurrentPlayer()
{
    if (current_player == player1) {
        current_player = player2;
    }
    else {
        current_player = player1;
    }
    return current_player;
}
