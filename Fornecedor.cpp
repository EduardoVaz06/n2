#include "Fornecedor.hpp"

Fornecedor::Fornecedor(string nome, string en, int tel, float valCred, float valDiv)
{
    this->nome = nome;
    this->endereco = en;
    this->telefone = tel;
    this->valorCred = valCred;
    this->valorDiv = valDiv;
}
//metodos
/*
void Fornecedor::atualizaPessoa()
{
    cout << "atualiza pessoa ok" << endl;

}
*/
void Fornecedor::imprimeInfo()
{
    cout << "Nome: " << nome << "\nEndereco: " << endereco << "\nTelefone: " << telefone << "\nValor de Credito: "
    << valorCred << "\nValor de Divida: " << valorDiv << "\n"<< endl;
}

float Fornecedor::obterSaldo()
{
    float saldo;
    saldo = (this->valorCred - this->valorDiv);

    cout << "Saldo eh: " << saldo << endl;

    if(saldo < 0)
    {
        cout << "Fornecedor esta devendo!" << endl;
    }

    return 0;
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
