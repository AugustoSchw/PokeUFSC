#include <iostream>

#include "include/Game.h"
#include "include/Char.h"
/*
    Dentro de shared.h temos todos os "include" do SFML, portanto nao precisamos fazer
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