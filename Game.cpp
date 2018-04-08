#include "Game.hpp"

namespace TicTacToe
{

    Game::Game(int width, int height, std::string gameName)
    {
        // TODO add switch to fullscreen
        this->_data->window.create(sf::VideoMode(width, height), gameName, sf::Style::Close | sf::Style::Titlebar);
        this->Run();
    }

    void Game::Run()
    {
        float currentTime = this->_clock.getElapsedTime().asSeconds();
        float accumulator = 0.0f;

        // https://gafferongames.com/post/fix_your_timestep/
        while (this->_data->window.isOpen())
        {
            this->_data->machine.ProcessStateChanges();

            float newTime = this->_clock.getElapsedTime().asSeconds();
            float frameTime = newTime - currentTime;

            if (frameTime > 0.25f)
            {
                frameTime = 0.25f;
            }

            currentTime = newTime;
            accumulator += frameTime;

            while (accumulator >= dt)
            {
                this->_data->machine.GetActiveState()->HandleInput();
                this->_data->machine.GetActiveState()->Update(dt);

                accumulator -= dt;
            }

            float interpolation = accumulator / dt;
            this->_data->machine.GetActiveState()->Draw(interpolation);
        }
    }
}