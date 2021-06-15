#include "Pessoa.hpp"

Pessoa::Pessoa(string n, string en, int tel)
{
    this->nome = n;
    this->endereco = en;
    this->telefone = tel;
}

//metodos
void Pessoa::imprimeInfo()
{
    cout << " - Nome: " << nome << "\nEndereco: " << endereco << "\nTelefone: " << telefone << "\n" << endl;
}

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
