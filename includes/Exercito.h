#ifndef EXERCITO_H
#define EXERCITO_H

#include <string>
#include "includes/Unidade.h"
#include <vector>

class Exercito
{
private:
    std::string nome;
    std::vector<Unidade *> vetorUnidades;
    int vitorias, derrotas, empates;

public:
    // Construtores e Destrutores da classe Unidade.
    Exercito(std::string nome);
    virtual ~Exercito();

    void AdicionaUnidades(Unidade *);

    // Métodos que vão ser implementados.
    std::string getResultados() const;
    void imprimeUnidades();
};

#endif