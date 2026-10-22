#include "includes/Exercito.h"

// Aqui iniciamos os valores aleatórios de acordo com o pdf.
Exercito::Exercito(std::string nome) : nome(nome), vitorias(0), derrotas(0), empates(0) {
    // construtor vazio
}
// Destrutor que não faz nada.
Exercito::~Exercito() {}

/* Sobrescrita do  para que use a formúla do pdf.
int Exercito::getPoderAtaque() const
{
    return ((poderAtaque * 5) + (manobrabilidade * 3) + (alcance * 2)) / 10;
}*/