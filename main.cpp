#include "Pessoa.hpp"
#include "Fornecedor.hpp"
#include "Empregado.hpp"
#include "Administrador.hpp"
#include "Operario.hpp"
#include "Vendedor.hpp"
#include "Sistema.hpp"

int main()
{
    Sistema s1("Casas Bahia");

//incluindo pessoas

    Pessoa p1("Fulano", "Rua Laurindo, 239, Porto Alegre RS", 94958667);
    Pessoa p2("Ciclano", "Rua Carazinho, 546, Porto Alegre RS", 67983553);

    cout << "INICIO TESTE PESSOAS CRIADAS\n" << endl;
    p1.imprimeInfo();
    cout << "\nFIM TESTE\n" << endl;

//atualizando pessoas

    cout << "INICIO TESTE ATUALIZAR PESSOAS\n" << endl;
    p1.setNome("Eduardo");
    p1.setEndereco("Av Ipiranga, 2500, Porto Alegre RS");
    p1.setTelefone(30223075);
    p1.imprimeInfo();
    cout << "\nFIM TESTE\n" << endl;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

    Fornecedor f1("Mutano", "Rua Carazinho, 546, Porto Alegre RS", 67983555, 2000, 3000);

    cout << "INICIO TESTE FORNECEDOR\n" << endl;
    f1.imprimeInfo();
    f1.obterSaldo();
    cout << "\nFIM TESTE\n" << endl;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

    Empregado e1("Fernando", "Rua Carazinho, 546, Porto Alegre RS", 67985555, 5000, 1500, 1);

    cout << "INICIO TESTE EMPREGADO\n" << endl;
    e1.imprimeInfo();
    e1.calculaSalario();
    cout << "\nFIM TESTE\n" << endl;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

    Administrador a1("Gabriele", "Rua Montenegro, 547, Porto Alegre RS", 78983245, 7000, 2100, 2, 1200);

    cout << "INICIO TESTE ADM\n" << endl;
    a1.imprimeInfo();
    a1.calculaSalario();
    cout << "\nFIM TESTE\n" << endl;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

    Operario o1("Carlos", "Rua Sao Benedito, 303, Porto Alegre RS", 75026583, 2500, 800, 1, 3000, 1000);

    cout << "INICIO TESTE OPERARIO\n" << endl;
    o1.imprimeInfo();
    o1.calculaSalario();
    cout << "\nFIM TESTE\n" << endl;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

    Vendedor v1("Phil", "Rua Petropolis, 2555, Porto Alegre RS", 13894476, 3000, 950, 2, 5000, 1890);

    cout << "INICIO TESTE VENDEDOR\n" << endl;
    v1.imprimeInfo();
    v1.calculaSalario();
    cout << "\nFIM TESTE\n" << endl;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

    s1.adicionaPessoa(p1);
    s1.adicionaPessoa(p2);

    s1.listaPessoas();

    Fornecedor f2("Beltrano", "Rua Carazinho, 546, Porto Alegre RS", 67983556, 3500, 500);
    Empregado e2("Alberto", "Rua Amanhecer, 1000, Porto Alegre RS", 84074070, 3500, 500, 2);

    s1.adicionaFornecedor(f1);
    s1.adicionaFornecedor(f2);

    s1.listaFornecedores();

    s1.adicionaEmpregado(e1);
    s1.adicionaEmpregado(e2);
    s1.adicionaAdm(a1);
    s1.adicionaOperario(o1);
    s1.adicionaVendedor(v1);

    s1.listaEmpregados();
    s1.listaAdministradores();
    s1.listaOperarios();
    s1.listaVendedores();

 return 0;
}
