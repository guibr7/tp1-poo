#ifndef INFANTARIA_H
#define INFANTARIA_H

#include "includes/Unidade.h"

class Infantaria : public Unidade
{

    int forca, velocidade;

public:
    Infantaria();
    int getPoderAtaque() const override;
};

#endif