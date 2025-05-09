#pragma once

struct ConfigData 
{
    int width, height;
    int numPeds[3];
    int tolls[2];
    int maxMoney[3];
};

ConfigData loadConfig(const char* filename);
