#include <iostream>
#include "PlayField.hpp"
#include "Player.hpp"
#include "PlayersConnector.hpp"

int main() {
    PlayField pf(3, 3);

    int value = -9;
    for (PlayField::index i = 0; i != 3; ++i){
        for (PlayField::index j = 0; j != 3; ++j){
            pf.setFieldCell(i, j, value++);
        }
    }

    std::string player1_name;
    std::string player2_name;
    int player1_favorite_number = 0;
    int player2_favorite_number = 0;

    std::cout << "Input player1 name and favorite number through space: ";
    std::cin >> player1_name >> player1_favorite_number;
    std::cout << "Player1 name : " << player1_name << " number: " << player1_favorite_number << std::endl;

    std::cout << "Input player2 name and favorite number through space: ";
    std::cin >> player2_name >> player2_favorite_number;
    std::cout << "Player2 name : " << player2_name << " number: " << player2_favorite_number << std::endl;

    std::cout << "Initial field:\n";
    pf.printField();

    Player player1(player1_name, player1_favorite_number);
    Player player2(player2_name, player2_favorite_number);
    PlayersConnector players_connector(player1, player2);
    Player current_player {players_connector.setCurrentPlayer()};
    int x, y;

    while(!pf.checkWIn()) {
        current_player = players_connector.setCurrentPlayer();
        std::cout << current_player.getName() << "'s step is: ";
        std::cin >> x >> y;
        current_player.makeStep(&pf, x, y);
        pf.printField();
    }
    std::cout << current_player.getName() << " wins" << std::endl;

    return 0;
}
