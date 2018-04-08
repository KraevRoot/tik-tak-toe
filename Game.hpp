#pragma once

#include <memory>
#include <SFML/Graphics.hpp>
#include "AssetManager.hpp"
#include "StateMachine.hpp"
#include "InputManager.hpp"

namespace TicTacToe
{
    struct GameData
    {
        StateMachine machine;
        sf::RenderWindow window;
        AssetManager assets;
        InputManager input;
    };

    typedef std::shared_ptr<GameData> GameDataRef;

    class Game
    {
    public:
        Game(int width, int height, std::string gameName);
        ~Game() {}
    private:
        const float dt = 1.0f / 60.0f;
        sf::Clock _clock;
        GameDataRef _data = std::make_shared<GameData>();

        void Run();
    };
}