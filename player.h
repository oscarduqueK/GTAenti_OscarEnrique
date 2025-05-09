#pragma once

struct Player 
{
    int x, y;
    char direction;

    void move();
    void attack();
};
