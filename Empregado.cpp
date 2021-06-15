#include "Empregado.hpp"

Empregado::Empregado(string n, string en, int tel, float salBase, float imp, int codSet)
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

void Empregado::imprimeInfo()
{
    cout << "Nome: " << nome << "\nEndereco: " << endereco << "\nTelefone: " << telefone << "\nSalario base: "
    << salarioBase << "\nValor imposto: " << imposto << "\n"<< endl;
}

void Empregado::calculaSalario()
{
    float salariofinal;
    salariofinal = (this->salarioBase - this->imposto);

    cout << "Salario de " << nome << "eh: " << salariofinal << endl;
}
