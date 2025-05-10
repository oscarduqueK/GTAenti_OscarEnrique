#include "config.h"
#include <fstream>
#include <sstream>
#include <iostream>

ConfigData loadConfig(const char* filename) 
{
    ConfigData config = {};

    std::ifstream file(filename);
    if (!file.is_open()) 
    {
        std::cerr << "Error: No se pudo abrir el archivo de configuración.\n";
        return config;
    }

    std::string line;

    // Línea 1: ancho;alto;
    if (std::getline(file, line)) 
    {
        std::stringstream ss(line);
        std::string item;
        std::getline(ss, item, ';');
        config.width = std::stoi(item);
        std::getline(ss, item, ';');
        config.height = std::stoi(item);
    }

    // Línea 2: numPeds[0];toll[0];maxMoney[0];
    if (std::getline(file, line)) 
    {
        std::stringstream ss(line);
        std::string item;
        std::getline(ss, item, ';');
        config.numPeds[0] = std::stoi(item);
        std::getline(ss, item, ';');
        config.tolls[0] = std::stoi(item);
        std::getline(ss, item, ';');
        config.maxMoney[0] = std::stoi(item);
    }

    // Línea 3: numPeds[1];toll[1];maxMoney[1];
    if (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string item;
        std::getline(ss, item, ';');
        config.numPeds[1] = std::stoi(item);
        std::getline(ss, item, ';');
        config.tolls[1] = std::stoi(item);
        std::getline(ss, item, ';');
        config.maxMoney[1] = std::stoi(item);
    }

    // Los valores de la tercera isla se pueden inicializar como constantes si es necesario

    return config;
}
