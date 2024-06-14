#pragma once    // Para evitar duplicamento
#include "shared.h"

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
        sf::RenderWindow* getWindow();
};


