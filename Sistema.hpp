#include <iostream>
#include <vector>

#include "Pessoa.hpp"
#include "Fornecedor.hpp"
#include "Empregado.hpp"
#include "Administrador.hpp"
#include "Operario.hpp"
#include "Vendedor.hpp"


using namespace std;

#ifndef SISTEMA_hpp
#define SISTEMA_hpp


class Sistema
{
public:
    Sistema(){};
    Sistema(string nome);

    vector<Pessoa> getPessoa();
    vector<Fornecedor> getFornecedor();
    vector<Empregado> getEmpregado();
    vector<Administrador> getAdm();
    vector<Operario> getOperario();
    vector<Vendedor> getVendedor();

    void listaPessoas();
    void listaFornecedores();
    void listaEmpregados();
    void listaAdministradores();
    void listaOperarios();
    void listaVendedores();

    void adicionaPessoa(Pessoa pessoa);
    void adicionaFornecedor(Fornecedor fornecedor);
    void adicionaEmpregado(Empregado empregado);
    void adicionaAdm(Administrador adm);
    void adicionaOperario(Operario operario);
    void adicionaVendedor(Vendedor vendedor);

protected:
    vector<Pessoa> pessoas;
    vector<Fornecedor> fornecedores;
    vector<Empregado> empregados;
    vector<Administrador> administradores;
    vector<Operario> operarios;
    vector<Vendedor> vendedores;

    string nome;

};

#endif

