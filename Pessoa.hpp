#include <iostream>

using namespace std;

#ifndef PESSOA_hpp
#define PESSOA_hpp


class Pessoa
{
public:
    Pessoa(){};
    Pessoa(string n, string en, int tel);

    void setNome(string n);
    string getNome();

    void setEndereco(string en);
    string getEndereco();

    void setTelefone(int tel);
    int getTelefone();

    virtual void imprimeInfo();

    void atualizaPessoa();

protected:
    string nome;
    string endereco;
    int telefone;

};

#endif
