#include "map.h"
#include "player.h"
#include <iostream>

void Map::display(Player &player)
{
    
    //CJ por pantalla
    
    for (int i = 0; i < height; i++) 
    {
        for (int j = 0; j < width; j++) 
        {
            if (i == player.y && j == player.x)
            {
                std::cout << player.direction; 
            } 
            else 
            {
              
                std::cout << ".";
            }
        }
        std::cout << std::endl;
    }
}
