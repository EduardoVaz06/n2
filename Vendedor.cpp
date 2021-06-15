#include "Vendedor.hpp"

Vendedor::Vendedor(string n, string en, int tel, float salBase, float imp, int codSet, float valVend, float comiss)
{
    this->nome = n;
    this->endereco = en;
    this->telefone = tel;
    this->salarioBase = salBase;
    this->imposto = imp;
    this->codSetor = codSet;
    this->valorVendas = valVend;
    this->comissao = comiss;
}

float Vendedor::getValorVendas()
{
    return valorVendas;
}

void Vendedor::setValorVendas(float valVend)
{
    this->valorVendas = valVend;
}

float Vendedor::getComissao()
{
    return comissao;
}

void Vendedor::setComissao(float comiss)
{
    this->comissao = comiss;
}

void Vendedor::calculaSalario()
{
    float salariofinal;
    salariofinal = (this->salarioBase - this->imposto) + this->comissao;

    cout << "Salario de " << nome << " eh: " << salariofinal << endl;
}

void Vendedor::imprimeInfo()
{
    cout << " - Nome: " << nome << "\nEndereco: " << endereco << "\nTelefone: " << telefone << "\nSalario base: "
    << salarioBase << "\nValor imposto: " << imposto << "\nSetor: " << codSetor << "\nValor de vendas: " << valorVendas << "\nComissao: " <<
    comissao << endl;
}
