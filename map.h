#pragma once
#include "player.h"
#include "peatones.h"

class Map 
{
public:
    int width, height;
    char** grid;

    void init(int w, int h); // Inicializa la matriz
    void placeEntities(Player& player, peaton* peatones, int numPeatones); 
    void display(const Player& player);
    void cleanup();
};
