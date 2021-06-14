#include "Pessoa.hpp"
#include "Fornecedor.hpp"
#include "Empregado.hpp"
#include "Administrador.hpp"
#include "Operario.hpp"
#include "Vendedor.hpp"

int main()
{
    Pessoa p1("Fulano", "Rua Laurindo, 239, Porto Alegre RS", 51994958667);

    p1.imprimeInfo();

    p1.atualizaPessoa(Pessoa pessoa);

    p1.imprimeInfo();
/*
    Fornecedor f1("Eduardo","Rua Carazinho, 546, Porto Alegre RS", 51993983502, 5000, 2345);

    f1.obterSaldo();

    f1.imprimeInfo();
*/

 return 0;
}
