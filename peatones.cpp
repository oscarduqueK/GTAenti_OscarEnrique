#include "peatones.h"
#include <iostream>
#include "utilidad.h"

void peaton::move() 
{
    //logica peaton
    if (!alive) return;

    // Dirección aleatoria para el movimiento
    int direction = getRandomInt(0, 3); // 0 up, 1 down, 2 left, 3 right

    switch (direction)
    {
    case 0: //up
        y--;
        break;
    case 1: // down
        y++;
        break;
    case 2: // left
        x--;
        break;
    case 3: // right
        x++;
        break;
    }

    
    if (x < 0 || x >= 70 || y < 0 || y >= 50) 
    {
        alive = false;
    }
}
