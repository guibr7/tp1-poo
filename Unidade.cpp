#include "includes/Unidade.h"
#include <string>
#include <vector>
#include <iostream>

    //Iniciamos os valores com 0 para não ter lixo na memória.
    Unidade::Unidade(){
        poderAtaque = 0;
        destruicoes = 0;
    }
    //Destrutor que não faz nada.
    Unidade::~Unidade(){}

    void Unidade::somaDestruicao(){
        destruicoes++;

    };