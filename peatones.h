#pragma once

struct peaton 
{
    int x, y;
    bool alive;

    void move(char** grid, int width, int height);
}; 
