#include "Empregado.hpp"
using namespace std;

#ifndef ADMINISTRADOR_hpp
#define ADMINISTRADOR_hpp


class Administrador : public Empregado
{
public:
    Administrador(){};
    Administrador(string n, string en, double tel, float salBase, float imp, int codSet, float ajuCust);

    void setAjudaCusto(float ajuCust);
    float getAjudaCust();

    void calculaSalario();

protected:
    float ajudaCusto;
};

#endif

