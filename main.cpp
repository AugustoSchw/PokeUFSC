#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Network.hpp>
#include "include/Char.h"


int main(int argc, char const *argv[]) {

    sf::RenderWindow window(sf::VideoMode(800, 600), "PokeUFSC", sf::Style::Titlebar | sf::Style::Close);
    sf::Event evento;
    while (window.isOpen()) {
        while (window.pollEvent(evento)) {
            switch(evento.type) {
                case sf::Event::Closed:
                    window.close(); // Fecha o jogo
                    break;

                case sf::Event::KeyPressed:
                    if (evento.key.code == sf::Keyboard::Escape) {
                        window.close(); // Fecha o jogo
                    }
                    break;
            }
        }

        window.clear(); // Limpa a tela

        window.display(); // Atualiza a tela

        
    }

    return 0;
}