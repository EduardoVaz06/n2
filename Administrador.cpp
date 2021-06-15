#include "Administrador.hpp"

Administrador::Administrador(string n, string en, int tel, float salBase, float imp, int codSet, float ajuCust)
{
    this->nome = n;
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
    float salariofinal;
    salariofinal = (this->salarioBase - this->imposto) + (this->ajudaCusto);

    cout << "Salario de " << nome << " eh: " << salariofinal << endl;
}

void Administrador::imprimeInfo()
{
    cout << " - Nome: " << nome << "\nEndereco: " << endereco << "\nTelefone: " << telefone << "\nSalario base: "
    << salarioBase << "\nValor imposto: " << imposto << "\nSetor: " << codSetor << "\nAjuda de custo: " << ajudaCusto << endl;
}
