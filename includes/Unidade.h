#ifndef UNIDADE_H
#define UNIDADE_H

#include <string>

class Unidade
{
protected:
    int poderAtaque, destruicoes; // Declarações dos atributos da classe Base

public:
    // Construtores e Destrutores da classe Unidade.
    Unidade();
    virtual ~Unidade();

    // Métodos que vão ser implementados.
    virtual int getPoderAtaque() const = 0;
    void somaDestruicao();
    int getDestruicoes() const;
};

#endif