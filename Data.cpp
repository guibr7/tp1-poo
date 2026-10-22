#include "includes/Data.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

//Construtor
Data::Data(int d, int m, int a)
{
    this->dia = d;
    this->mes = m;
    this->ano = a;
    if (!this->validaData())
    {
        this->dia = 28;
        this->mes = 07;
        this->ano = 1914;
    }
}

//Função destrutora
Data::~Data(){};

//Função Validar Data
bool Data::validaData()
{
    if (this->ano >= 1)
    {
        if (this->mes >= 1 && this->mes <= 12)
        {
            if (this->dia >= 1 && this->dia <= 31)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
};

//Printar data por extenso
void Data::printData()
{
    vector<string> meses = {"nulo", "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    
    cout << "Dia " << this->dia << " de " << meses[this->mes] << " de " << this->ano;
};

