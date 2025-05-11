#pragma once
#include "player.h"

class Map 
{
public:
    int width, height;
    char** grid;

    void init(int w, int h); // Inicializa la matriz
    void loadFromConfig(const char* filename); // vacía por ahora
    void display(const Player& player);
    void cleanup();
};
