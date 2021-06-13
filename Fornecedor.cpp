#include "Fornecedor.hpp"

Fornecedor::Fornecedor(string nome, string en, double tel, float valCred, float valDiv)
{
    this->nome = nome;
    this->endereco = en;
    this->telefone = tel;
    this->valorCred = valCred;
    this->valorDiv = valDiv;
}

float Fornecedor::getValorCred()
{
    return valorCred;
}

void Fornecedor::setValorCred(float valCred)
{
    this->valorCred = valCred;
}

float Fornecedor::getValorDiv()
{
    return valorDiv;
}

void Fornecedor::setValorDiv(float valDiv)
{
    this->valorDiv = valDiv;
}

float Fornecedor::obterSaldo()
{
    float saldo;
    saldo = (this->valorCred - this->valorDiv);

    cout << saldo << endl;

    return 0;
}
