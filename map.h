#pragma once
#include "player.h"
#include "peatones.h"

class Map 
{
public:

    Map();           
    ~Map(); 

    char** grid;
    int width, height;

    void init(int w, int h); // Inicializa la matriz
    void placeEntities(Player& player, peaton* peatones, int numPeatones); 
    void display(const Player& player);
    void cleanup();

private:
    
};
