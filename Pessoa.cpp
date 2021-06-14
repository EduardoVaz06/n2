#include "Pessoa.hpp"

Pessoa::Pessoa(string nome, string en, double tel)
{
    this->nome = nome;
    this->endereco = en;
    this->telefone = tel;
}

//metodos
void Pessoa::imprimeInfo()
{
    cout << nome << endl;
}

void Pessoa::atualizaPessoa(Pessoa pessoa)
{
    cout << "Informe nome: " << endl;
    cin << pessoa.setNome() << endl;

    cout << "Informe endereço: " << endl;
    cin << pessoa.setEndereco() << endl;

    cout << "Informe telefone: " << endl;
    cin << pessoa.setTelefone() << endl;

}
/*
void Pessoa::listaTodos()
{
    cout << "Pessoas cadastradas: "<< endl;

 for (int j = 0; j < pessoasCadastradas.size(); j++)
    {
        pessoasCadastradas[j].imprimeInfo();
        cout << "\n" << endl;
    }
}
*/
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

double Pessoa::getTelefone()
{
    return telefone;
}

void Pessoa::setTelefone(double tel)
{
    this->telefone = tel;
}
