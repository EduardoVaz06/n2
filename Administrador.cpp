#include "Administrador.hpp"

Administrador::Administrador(string n, string en, double tel, float salBase, float imp, int codSet, float ajuCust)
{
    this->nome = nome;
    this->endereco = en;
    this->telefone = tel;
    this->salarioBase = salBase;
    this->imposto = imp;
    this->codSetor = codSet;
    this->ajudaCusto = ajuCust;
}

float Administrador::getAjudaCust()
{
    return ajudaCusto;
}

void Administrador::setAjudaCusto(float ajuCust)
{
    this->ajudaCusto = ajuCust;
}

void Administrador::calculaSalario()
 {

 }
