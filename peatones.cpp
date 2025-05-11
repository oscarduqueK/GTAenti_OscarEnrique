#include "peatones.h"
#include <iostream>
#include "utilidad.h"
#include "constantes.h"

void peaton::move(char** grid, int width, int height)
{
    if (!alive) return;

    int dx = 0, dy = 0;
    int dir = getRandomInt(0, 3); // 0 = up, 1 = down, 2 = left, 3 = right

    switch (dir)
    {
    case 0: dy = -1; break;
    case 1: dy = 1; break;
    case 2: dx = -1; break;
    case 3: dx = 1; break;
    }

    int newX = x + dx;
    int newY = y + dy;

    if (newX >= 0 && newX < width && newY >= 0 && newY < height && grid[newY][newX] == ' ')
    {
        grid[y][x] = ' ';
        x = newX;
        y = newY;
        grid[y][x] = PEDESTRIAN;
    }
}
