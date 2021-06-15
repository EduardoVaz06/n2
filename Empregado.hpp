#include <iostream>
#include "Pessoa.hpp"
using namespace std;

#ifndef EMPREGADO_hpp
#define EMPREGADO_hpp


class Empregado : public Pessoa
{
public:
    Empregado(){};
    Empregado(string n, string en, int tel, float salBase, float imp, int codSet);

    void setSalarioBase(float salBase);
    float getSalarioBase();

    void setImposto(float imp);
    float getImposto();

    void setCodigoSetor(int codSet);
    int getCodigoSetor();

    virtual void calculaSalario();

    void imprimeInfo();

protected:
    float salarioBase;
    float imposto;
    int codSetor;
};

#endif
