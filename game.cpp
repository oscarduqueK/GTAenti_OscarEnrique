#include "game.h"
#include <iostream>

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
}

void Game::render() 
{
    // Rendering logic
}

void Game::cleanup() 
{
    // Cleanup code
}
