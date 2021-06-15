#include "Sistema.hpp"

Sistema::Sistema(string nome)
{
    this->nome = nome;
}

vector<Pessoa> Sistema::getPessoa()
{
    return pessoas;
}

vector<Fornecedor> Sistema::getFornecedor()
{
    return fornecedores;
}

vector<Empregado> Sistema::getEmpregado()
{
    return empregados;
}

vector<Administrador> Sistema::getAdm()
{
    return administradores;
}

vector<Operario> Sistema::getOperario()
{
    return operarios;
}

vector<Vendedor> Sistema::getVendedor()
{
    return vendedores;
}

void Sistema::adicionaPessoa(Pessoa pessoa)
{
    pessoas.push_back(pessoa);
}

void Sistema::adicionaFornecedor(Fornecedor fornecedor)
{
    fornecedores.push_back(fornecedor);
}

void Sistema::adicionaEmpregado(Empregado empregado)
{
    empregados.push_back(empregado);
}

void Sistema::adicionaAdm(Administrador adm)
{
    administradores.push_back(adm);
}

void Sistema::adicionaOperario(Operario operario)
{
    operarios.push_back(operario);
}

void Sistema::adicionaVendedor(Vendedor vendedor)
{
    vendedores.push_back(vendedor);
}


void Sistema::listaPessoas()
{
    cout << "Pessoas cadastradas: " << endl;

 for (int j = 0; j < pessoas.size(); j++)
    {
        pessoas[j].imprimeInfo();
    }
}

void Sistema::listaFornecedores()
{
    cout << "Fornecedores cadastrados: " << endl;

 for (int j = 0; j < fornecedores.size(); j++)
    {
        fornecedores[j].imprimeInfo();
    }
}

void Sistema::listaEmpregados()
{
    cout << "Empregados cadastrados: " << endl;

 for (int j = 0; j < empregados.size(); j++)
    {
        empregados[j].imprimeInfo();
    }
}

void Sistema::listaAdministradores()
{
    cout << "Administradores cadastrados: " << endl;

 for (int j = 0; j < administradores.size(); j++)
    {
        administradores[j].imprimeInfo();
    }
}

void Sistema::listaOperarios()
{
    cout << "Operarios cadastrados: " << endl;

 for (int j = 0; j < operarios.size(); j++)
    {
        operarios[j].imprimeInfo();
    }
}

void Sistema::listaVendedores()
{
    cout << "Vendedores cadastrados: " << endl;

 for (int j = 0; j < vendedores.size(); j++)
    {
        vendedores[j].imprimeInfo();
    }
}
