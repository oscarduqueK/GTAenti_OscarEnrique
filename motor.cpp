#include "motor.h"
#include <windows.h>
#include "player.h"

void Motor::handleInput(Player &player)
{
    if (GetAsyncKeyState(VK_UP)) 
    {
        player.direction = '^'; 
    } 
    else if (GetAsyncKeyState(VK_DOWN)) 
    {
        player.direction = 'v'; 
    } 
    else if (GetAsyncKeyState(VK_LEFT)) 
    {
        player.direction = '<'; 
    } 
    else if (GetAsyncKeyState(VK_RIGHT)) 
    {
        player.direction = '>'; 
    }
    
    player.move(); 
}

void Motor::delay(int milliseconds) 
{
    Sleep(milliseconds);
}
