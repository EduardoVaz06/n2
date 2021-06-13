#include "Empregado.hpp"
using namespace std;

#ifndef OPERARIO_hpp
#define OPERARIO_hpp


class Operario : public Empregado
{
public:
    Operario(){};
    Operario(string n, string en, double tel, float salBase, float imp, int codSet, float valProd, float comiss);

    void setValorProducao(float valProd);
    float getValorProducao();

    void setComissao(float comiss);
    float getComissao();

    void calculaSalario();

protected:
    float valorProducao;
    float comissao;
};

#endif


