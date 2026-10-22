#include "includes/Infantaria.h"

using namespace std;

Infantaria::Infantaria() : Unidade()
{
    poderAtaque = (rand() % 31) + 30;  // de 30 - 60
    forca = (rand() % 31) + 20;    // de 20 - 50
    velocidade = (rand() % 31) + 10; // de 10 a 40
}

int Infantaria::getPoderAtaque() const {
    return ((poderAtaque*5) + (forca*3) + (velocidade*2)) / 10;
};