#include "includes/Veiculo.h"


    //Aqui iniciamos os valores aleatórios de acordo com o pdf.
    Veiculo::Veiculo()
    {
        poderAtaque = (rand() % 41) + 40; // de 40 - 80
        blindagem = (rand() % 41) + 30;  // de 30 - 70
        potenciaFogo = (rand() % 31) + 20; // de 20 - 50
    }
    //Destrutor que não faz nada.
    Veiculo::~Veiculo(){}

    //Sobrescrita do  para que use a formúla do pdf.
    int Veiculo::getPoderAtaque() const
    {
        return ((poderAtaque *5) + (blindagem * 4) +(potenciaFogo*1))/10;
    }