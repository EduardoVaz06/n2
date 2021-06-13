#include <iostream>
using namespace std;

#ifndef PESSOA_hpp
#define PESSOA_hpp


class Pessoa
{
public:
    Pessoa(){};
    Pessoa(string n, string en, double tel);

    void setNome(string n);
    string getNome();

    void setEndereco(string en);
    string getEndereco();

    void setTelefone(double tel);
    double getTelefone();


protected:
    string nome;
    string endereco;
    double telefone;
};

#endif
