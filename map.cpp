#include "map.h"
#include "player.h"
#include <iostream>
#include "utilidad.h"

void Map::init(int w, int h)
{
    width = w;
    height = h;

    grid = new char*[height];
    for (int i = 0; i < height; ++i)
    {
        grid[i] = new char[width];
        for (int j = 0; j < width; ++j)
        {
            grid[i][j] = ' '; //empieza como vacio
        }
    }
}


void Map::display(const Player& player)
{
    clearScreen();

    const int viewHeight = 10;
    const int viewWidth = 20;

    int top = player.y - viewHeight / 2;
    int left = player.x - viewWidth / 2;

    if (top < 0) top = 0;
    if (left < 0) left = 0;
    if (top + viewHeight > height) top = height - viewHeight;
    if (left + viewWidth > width) left = width - viewWidth;

    for (int i = 0; i < viewHeight; ++i)
    {
        for (int j = 0; j < viewWidth; ++j)
        {
            int y = top + i;
            int x = left + j;

            if (y == player.y && x == player.x)
                std::cout << player.direction;
            else
                std::cout << grid[y][x];
        }
        std::cout << '\n';
    }
}

void Map::cleanup()
{
    for (int i = 0; i < height; ++i)
        delete[] grid[i];
    delete[] grid;
}
