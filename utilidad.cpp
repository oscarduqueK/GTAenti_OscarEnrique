#include "utilidad.h"
#include <cstdlib>
#include <ctime>
#include <windows.h>

int getRandomInt(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

void clearScreen() 
{
    system("cls");
}
