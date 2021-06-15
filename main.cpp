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

    Pessoa p1("Fulano", "Rua Laurindo, 239, Porto Alegre RS", 94958667);
    Pessoa p2("Ciclano", "Rua Carazinho, 546, Porto Alegre RS", 67983553);

    Fornecedor f1("Mutano", "Rua Carazinho, 546, Porto Alegre RS", 67983555, 2000, 3000);

    cout << "INICIO TESTE FORNECEDOR\n" << endl;
    f1.imprimeInfo();
    f1.obterSaldo();
    cout << "\nFIM TESTE\n" << endl;

    Empregado e1("Fernando", "Rua Carazinho, 546, Porto Alegre RS", 67985555, 5000, 1500, 1);

    cout << "INICIO TESTE EMPREGADO\n" << endl;
    e1.imprimeInfo();
    e1.calculaSalario();
    cout << "\nFIM TESTE\n" << endl;

    Administrador a1("Gabriele", "Rua Montenegro, 547, Porto Alegre RS", 78983245, 7000, 2100, 2, 1200);

    cout << "INICIO TESTE ADM\n" << endl;
    a1.imprimeInfo();
    a1.calculaSalario();
    cout << "\nFIM TESTE\n" << endl;

    s1.adicionaPessoa(p1);
    s1.adicionaPessoa(p2);

    s1.listaPessoas();

    Fornecedor f2("Beltrano", "Rua Carazinho, 546, Porto Alegre RS", 67983556, 3500, 500);

    s1.adicionaFornecedor(f1);
    s1.adicionaFornecedor(f2);

    s1.listaFornecedores();



 return 0;
}
