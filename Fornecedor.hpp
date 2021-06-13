#include <iostream>
#include "Pessoa.hpp"
using namespace std;

#ifndef FORNECEDOR_hpp
#define FORNECEDOR_hpp


class Fornecedor : public Pessoa
{
public:
    Fornecedor(){};
    Fornecedor(string n, string en, double tel, float valCred, float valDiv);

    void setValorCred(float valCred);
    float getValorCred();

    void setValorDiv(float valDiv);
    float getValorDiv();

    float obterSaldo();

protected:
    float valorCred;
    float valorDiv;
};

#endif

