#ifndef AERONAVE_H
#define AERONAVE_H

#include "includes/Unidade.h"

class Aeronave : public Unidade
{
private:
    int manobrabilidade; // Max range de manobrabilidade(30 - 70)
    int alcance;// Max range de alcance (20 - 50)
public:
    // Construtores e Destrutores da classe Veiculo.
    Aeronave();
    virtual ~Aeronave();
    
    //Sobrescrita do getPoderAtaque
    int getPoderAtaque() override;
};

#endif