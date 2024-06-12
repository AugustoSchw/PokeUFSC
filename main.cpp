#include <SFML/Graphics.hpp>
#include "include/char.h"


int main(int argc, char const *argv[]) {
    sf::RenderWindow window(sf::VideoMode(1200, 900), "PokeUFSC");
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::Num1) {
                    // Fazer algo (teste)
                }
            }
        }
        window.display();
        
    }

    return 0;
}