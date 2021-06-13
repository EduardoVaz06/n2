#include "Pessoa.hpp"

Pessoa::Pessoa(string nome, string en, double tel)
{
    this->nome = nome;
    this->endereco = en;
    this->telefone = tel;
}

/*void Pessoa::imprime()
{
    cout << IdPessoa << " - Nome: " << nome << "\n    Categoria: " << Categoria << "\n    Nacionalidade: "
     << Nacionalidade << "\n    Salario Bruto: " << SalarioBruto << "\n    Salario Liquido: " <<
     SalarioLiq << endl;
    cout << "    Data de nascimento: " << dia << "/" << mes << "/" << ano << endl;

}*/

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
