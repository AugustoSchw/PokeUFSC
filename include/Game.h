#pragma once    // Para evitar duplicamento

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Network.hpp>

class Game {
    private:
        sf::RenderWindow* window;
        sf::Event evento;
        sf::VideoMode videoM;

        void initVariables();
        void initWindow();

    public:
        // Construtor e destrutor
        Game();
        virtual ~Game();
        //

        const bool getWindowIsOpen() const;

        // Funcoes
        void updateEvents();
        void update();
        void render();


};


