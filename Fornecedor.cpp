#include "Fornecedor.hpp"

Fornecedor::Fornecedor(string nome, string en, double tel, float valCred, float valDiv)
{
    this->nome = nome;
    this->endereco = en;
    this->telefone = tel;
    this->valorCred = valCred;
    this->valorDiv = valDiv;
}
//metodos
void Fornecedor::adicionaPessoa()
{
    cout << "adiciona pessoa ok" << endl;

}

void Fornecedor::atualizaPessoa()
{
    cout << "atualiza pessoa ok" << endl;

}

void Fornecedor::imprimeInfo()
{
    cout << nome << endl;

}

float Fornecedor::obterSaldo()
{
    float saldo;
    saldo = (this->valorCred - this->valorDiv);

    cout << "Saldo e: " << saldo << endl;

    return 0;
}

void Fornecedor::listaTodos()
{

}

//gets e sets
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



