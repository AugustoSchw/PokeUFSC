#include "../include/Game.h"

void Game::initVariables() {
    this->window = nullptr;

}

void Game::initWindow() {
    this->videoM.height = gameHeight;
    this->videoM.width = gameWidth;
    
    this->window = new sf::RenderWindow(this->videoM, "PokeUFSC", sf::Style::Titlebar | sf::Style::Close);
}

Game::Game() {  // Construtor
    this->initVariables();
    this->initWindow();
}

Game::~Game() {  // Desconstrutor 
    delete this->window;
}

const bool Game::getWindowIsOpen() const {
    return this->window->isOpen();  // Argumento do While em main.cpp
}

void Game::updateEvents() {
    while (this->window->pollEvent(this->evento)) {
            switch(this->evento.type) {
                case sf::Event::Closed:
                    this->window->close(); // Fecha o jogo
                    break;

                case sf::Event::KeyPressed:
                    if (this->evento.key.code == sf::Keyboard::Escape) {
                        this->window->close(); // Fecha o jogo
                    }
                    break;
            }
        }
}

void Game::update() {
    this->updateEvents();
}


void Game::render() {
    this->window->clear();  // Apaga frame anterior

    this->window->display();    // Mostra frame atual
}