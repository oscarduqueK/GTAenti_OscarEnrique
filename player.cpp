#include "player.h"
#include <iostream>

void Player::move() {
    // Move logic
    switch (direction)
    {
        case '^': // Arriba
            y--;
            break;
        case 'v': // Abajo
        y++;
            break;
        case '<': // Izquierda
            x--;
            break;
        case '>': // Derecha
            x++;
            break;
        default:
            break;
    }
    
}

void Player::attack() {
    // Attack logic
}
