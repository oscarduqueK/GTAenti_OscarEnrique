#include "game.h"
#include <iostream>
#include "motor.h"
#include "player.h"

void Game::run() 
{
    init();
    while (true) 
    {
        update();
        render();
        // break condition needed in the future
    }
    cleanup();
}

void Game::init() 
{
    // Initialization code
}

void Game::update() 
{
    // Game logic
    motor.handleInput(player); // Manejar la entrada y mover a CJ
}

void Game::render() 
{
    // Rendering logic
}

void Game::cleanup() 
{
    // Cleanup code
}
