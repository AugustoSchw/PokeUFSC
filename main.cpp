#include <iostream>


#include "include/Game.h"
/*
    Dentro de Game.h temos todos os "include" do SFML, portanto nao precisamos fazer
    o include deles novamente.
*/



int main(int argc, char const *argv[]) {
    Game game;

    while (game.getWindowIsOpen()) {
        game.update();

        game.render();        
    }

    return 0;
}