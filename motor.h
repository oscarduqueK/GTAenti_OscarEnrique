#pragma once
#include "player.h" 

class Motor 
{
public:
    void handleInput(Player& player);
    void delay(int milliseconds);
};
