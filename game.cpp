#include "game.h"
#include <iostream>
#include "motor.h"
#include "player.h"
#include "peatones.h"
#include "utilidad.h"
#include "map.h"
#include "config.h"

//algunas variables
int numPeatones = 10; 

Map map;
Player player;
peaton* peatones = nullptr; 
int totalPeatones = 0;
ConfigData config;
Motor motor; 

void Game::run() 
{
    init();
    while (true) 
    {
        update();
        render();
       //queda por poner llamada a algun break
    }
    cleanup();
}

void Game::init() 
{
    config = loadConfig("config.txt");
    totalPeatones = config.numPeds[0] + config.numPeds[1];
    peatones = new peaton[totalPeatones];

    map.init(config.width, config.height);
    map.placeEntities(player, peatones, totalPeatones);
}

void Game::update() 
{
    // Game logic
    motor.handleInput(player); // Manejar la entrada y mover a CJ

    for (int i = 0; i < totalPeatones; ++i)
    {
        peatones[i].move(map.grid, map.width, map.height);
    }

    for (int i = 0; i < totalPeatones; ++i)
    {
        if (peatones[i].alive && peatones[i].x == player.x && peatones[i].y == player.y)
        {
            peatones[i].alive = false;
        }
    }
    
}

void Game::render() 
{
    map.display(player); 
}

void Game::cleanup() 
{
    // Cleanup code
    // Liberar la memoria de los peatones
    delete[] peatones;
}
