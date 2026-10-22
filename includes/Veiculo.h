#ifndef VEICULO_H
#define VEICULO_H

#include "includes/Unidade.h"

class Veiculo : public Unidade
{
private:
    int blindagem; // Max range de blindagem(30 - 70)
    int potenciaFogo;// Max range de potenciaFogo (20 - 50)
public:
    // Construtores e Destrutores da classe Veiculo.
    Veiculo();
    virtual ~Veiculo();

    //Sobrescrita do getPoderAtaque
    int getPoderAtaque() const override;
};

#endif