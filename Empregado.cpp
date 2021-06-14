#include "Empregado.hpp"

Empregado::Empregado(string n, string en, double tel, float salBase, float imp, int codSet)
{
    this->nome = nome;
    this->endereco = en;
    this->telefone = tel;
    this->salarioBase = salBase;
    this->imposto = imp;
    this->codSetor = codSet;
}

float Empregado::getSalarioBase()
{
    return salarioBase;
}

void Empregado::setSalarioBase(float salBase)
{
    this->salarioBase = salBase;
}

float Empregado::getImposto()
{
    return imposto;
}

void Empregado::setImposto(float imp)
{
    this->imposto = imp;
}

int Empregado::getCodigoSetor()
{
    return codSetor;
}

void Empregado::setCodigoSetor(int codSet)
{
    this->codSetor = codSet;
}

//
