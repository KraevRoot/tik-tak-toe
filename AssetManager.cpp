#include "AssetManager.hpp"

namespace TicTacToe
{
    void TicTacToe::AssetManager::LoadTexture(std::string textureName, std::string filePath)
    {
        sf::Texture texture;
        if (texture.loadFromFile(filePath))
        {
            this->_textures[textureName] = texture;
        }

    }

    sf::Texture &TicTacToe::AssetManager::GetTexture(std::string textureName)
    {
        return this->_textures.at(textureName);
    }

    void TicTacToe::AssetManager::LoadFont(std::string fontName, std::string filePath)
    {
        sf::Font font;
        if (font.loadFromFile(filePath))
        {
            this->_fonts[fontName] = font;
        }
    }

    sf::Font &TicTacToe::AssetManager::GetFont(std::string fontName)
    {
        return this->_fonts.at(fontName);
    }

}