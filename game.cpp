#include "game.h"
#include <iostream>
#include "motor.h"
#include "player.h"
#include "peatones.h"
#include "motor.cpp"
#include "utilidad.h"

//algunas variables
peaton* peatones;
int numPeatones = 10; 

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
    //Initializacion de codigo
    //PArte de peatones
    // Asignar memoria dinámica para los peatones
    peatones = new peaton[numPeatones];

    // Inicializar peatones con posiciones aleatorias
    for (int i = 0; i < numPeatones; i++)
    {
        peatones[i].x = getRandomInt(0, 69); // Posición aleatoria en el mapa
        peatones[i].y = getRandomInt(0, 49);
        peatones[i].alive = true;
    }
}

void Game::update() 
{
    // Game logic
    motor.handleInput(player); // Manejar la entrada y mover a CJ

    // Mover a cada peaton
    for (int i = 0; i < numPeatones; i++)
    {
        peatones[i].move(); // Mover cada peaton
    }

    
}

void Game::render() 
{
    
}

void Game::cleanup() 
{
    // Cleanup code
    // Liberar la memoria de los peatones
    delete[] peatones;
}
