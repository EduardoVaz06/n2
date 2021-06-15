#include "Pessoa.hpp"

Pessoa::Pessoa(string nome, string en, int tel)
{
    this->nome = nome;
    this->endereco = en;
    this->telefone = tel;
}

//metodos
void Pessoa::imprimeInfo()
{
    cout << "Nome: " << nome << "\nEndereco: " << endereco << "\nTelefone: " << telefone << "\n" << endl;
}
/*
void Pessoa::atualizaPessoa()
{
    cout << "Informe nome: " << endl;
    cin << p1.setNome();

    cout << "Informe endereço: " << endl;
    cin << p1.setEndereco();

    cout << "Informe telefone: " << endl;
    cin << p1.setTelefone();

}*/

//gets e sets
string Pessoa::getNome()
{
    return nome;
}

void Pessoa::setNome(string nome)
{
    this->nome = nome;
}

string Pessoa::getEndereco()
{
    return endereco;
}

void Pessoa::setEndereco(string en)
{
    this->endereco = en;
}

int Pessoa::getTelefone()
{
    return telefone;
}

void Pessoa::setTelefone(int tel)
{
    this->telefone = tel;
}
