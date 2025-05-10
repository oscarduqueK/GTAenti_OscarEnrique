#include "map.h"
#include "player.h"
#include <iostream>

void Map::display(Player &player)
{
    // Asumiendo que tienes una representación del mapa como matriz
    // Aquí dibujaremos a CJ en la pantalla basado en su dirección y posición.
    
    for (int i = 0; i < height; i++) 
    {
        for (int j = 0; j < width; j++) 
        {
            if (i == player.y && j == player.x)
            {
                std::cout << player.direction; // Mostrar CJ según su dirección
            } 
            else 
            {
                // Mostrar el mapa (paredes, peatones, etc.)
                std::cout << ".";
            }
        }
        std::cout << std::endl;
    }
}
