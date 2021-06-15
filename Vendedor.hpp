#include "Empregado.hpp"
using namespace std;

#ifndef VENDEDOR_hpp
#define VENDEDOR_hpp


class Vendedor : public Empregado
{
public:
    Vendedor(){};
    Vendedor(string n, string en, int tel, float salBase, float imp, int codSet, float comiss, float valVend);

    void setValorVendas(float valVend);
    float getValorVendas();

    void setComissao(float comiss);
    float getComissao();

    void calculaSalario();

protected:
    float valorVendas;
    float comissao;
};

#endif
