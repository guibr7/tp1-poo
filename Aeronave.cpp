#include "includes/Aeronave.h"

// Aqui iniciamos os valores aleatórios de acordo com o pdf.
Aeronave::Aeronave()
{
    poderAtaque = (rand() % 41) + 50;     // de 50 - 90
    manobrabilidade = (rand() % 41) + 30; // de 30 - 70
    alcance = (rand() % 31) + 20;         // de 20 - 50
}
// Destrutor que não faz nada.
Aeronave::~Aeronave() {}

// Sobrescrita do  para que use a formúla do pdf.
int Aeronave::getPoderAtaque() const
{
    return ((poderAtaque * 5) + (manobrabilidade * 3) + (alcance * 2)) / 10;
}