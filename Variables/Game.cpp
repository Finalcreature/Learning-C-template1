#include "Game.h"
#include <iostream>

/*Implemention of the constructor*/

Game::Game(std::string name, std::string rating, int played)
    : name{ name }, rating{ rating }, played{ played }{
}

/*implemention of the copy constructor*/
Game::Game(const Game& source)
    : Game{ source.name,source.rating,source.played } {

}

/*implemention of the destructor*/
Game::~Game() {

}

/*implemention of the display method
//should just insert the game attribues to cout*/

void Game::display() const {
    std::cout << name << "," << rating << "," << played << std::endl;
}



