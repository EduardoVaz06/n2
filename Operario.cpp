#include "Operario.hpp"

Operario::Operario(string n, string en, int tel, float salBase, float imp, int codSet, float valProd, float comiss)
{
    this->nome = n;
    this->endereco = en;
    this->telefone = tel;
    this->salarioBase = salBase;
    this->imposto = imp;
    this->codSetor = codSet;
    this->valorProducao = valProd;
    this->comissao = comiss;
}

float Operario::getValorProducao()
{
    return valorProducao;
}

void Operario::setValorProducao(float valProd)
{
    this->valorProducao = valProd;
}

float Operario::getComissao()
{
    return comissao;
}

void Operario::setComissao(float comiss)
{
    this->comissao = comiss;
}

void Operario::calculaSalario()
{
    float salariofinal;
    salariofinal = (this->salarioBase - this->imposto) + this->comissao;

    cout << "Salario de " << nome << " eh: " << salariofinal << endl;
}

void Operario::imprimeInfo()
{
    cout << " - Nome: " << nome << "\nEndereco: " << endereco << "\nTelefone: " << telefone << "\nSalario base: "
    << salarioBase << "\nValor imposto: " << imposto << "\nSetor: " << codSetor << "\nValor de producao: " << valorProducao << "\nComissao: " <<
    comissao << endl;
}

