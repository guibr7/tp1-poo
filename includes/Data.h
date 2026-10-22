#ifndef DATA_H
#define DATA_H
#include <string>

class Data
{
private:
    int dia, mes, ano;
    bool validaData();
public:
    Data(int, int, int);
    virtual ~Data();
    void printData();
};

#endif
