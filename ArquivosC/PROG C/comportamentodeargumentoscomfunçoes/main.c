#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");

    int x = 10;
    int vetor [3] = {10};

    void funcaoPrint (int x, int vetor []);
    funcaoPrint (x, vetor);

        printf(" Var int na função principal : %i\n", x );
        printf(" Vetor na função principal : %i\n", vetor [1]);

    return 0;
}
void funcaoPrint (int x, int vetor []){

    x += 10;
    vetor [1] = 20;

        printf(" Var int na função print : %i\n", x );
        printf(" Vetor na função print : %i\n", vetor [1]);

}
