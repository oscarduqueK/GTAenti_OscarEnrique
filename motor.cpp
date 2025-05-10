#include "motor.h"
#include <windows.h>
#include "player.h"

void Motor::handleInput(Player &player)
{
    if (GetAsyncKeyState(VK_UP)) 
    {
        player.direction = '^'; // Mirando hacia arriba
    } 
    else if (GetAsyncKeyState(VK_DOWN)) 
    {
        player.direction = 'v'; // Mirando hacia abajo
    } 
    else if (GetAsyncKeyState(VK_LEFT)) 
    {
        player.direction = '<'; // Mirando hacia la izquierda
    } 
    else if (GetAsyncKeyState(VK_RIGHT)) 
    {
        player.direction = '>'; // Mirando hacia la derecha
    }
    
    player.move(); // Mover a CJ según la dirección actual
}

void Motor::delay(int milliseconds) 
{
    Sleep(milliseconds);
}
