#include "map.h"
#include "player.h"
#include <iostream>
#include "utilidad.h"
#include "constantes.h"
#include "peatones.h" 

Map::Map() : grid(nullptr), width(0), height(0) {}

Map::~Map() 
{
    if (grid) 
    {
        for (int i = 0; i < height; ++i) 
        {
            delete[] grid[i];
        }
        delete[] grid;
    }
}

void Map::init(int w, int h) 
{
    width = w;
    height = h;
    grid = new char* [height];
    for (int i = 0; i < height; ++i)
    {
        grid[i] = new char[width];
        for (int j = 0; j < width; ++j)
        {
            grid[i][j] = ' ';
        }
    }
}

void Map::placeEntities(Player& player, peaton* peatones, int numPeatones) 
{
    // Coloca el jugador
    player.x = getRandomInt(0, width - 1);
    player.y = getRandomInt(0, height - 1);
    grid[player.y][player.x] = player.direction;  // Asignamos al jugador en la matriz

    // Coloca los peatones
    for (int i = 0; i < numPeatones; ++i) 
    {
        int x, y;
        do 
        {
            x = getRandomInt(0, width - 1);
            y = getRandomInt(0, height - 1);
        } while (grid[y][x] != ' ');  // Evitar solapamientos

        peatones[i].x = x;
        peatones[i].y = y;
        peatones[i].alive = true;
        grid[y][x] = PEDESTRIAN;  // Asignamos a los peatones en la matriz
    }
}

void Map::display(const Player& player)
{
    clearScreen();
    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < width; ++j)
        {
            std::cout << grid[i][j];
        }
        std::cout << std::endl; 
    }
}

void Map::cleanup() 
{
    // Liberar la memoria de la matriz de forma segura
    if (grid) 
    {
        for (int i = 0; i < height; ++i) 
        {
            delete[] grid[i];  // Liberar cada fila
        }
        delete[] grid;  // Liberar la matriz completa
        grid = nullptr;  // Opcional: Establecer a nullptr para evitar acceso accidental
    }
}