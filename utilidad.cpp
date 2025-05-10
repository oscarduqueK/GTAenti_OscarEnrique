#include "utilidad.h"
#include <cstdlib>
#include <ctime>
#include <windows.h>

//numeros random para todo
void initRandom() {
    std::srand(static_cast<unsigned int>(std::time(0)));
}

int getRandomInt(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

void clearScreen() 
{
    system("cls");
}
