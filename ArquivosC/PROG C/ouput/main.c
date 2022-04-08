#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var = 99999999 ;

    int var2 = 10 ;

    double var3 = 100.123456789 ;

        // formatação de variaveis inteiras

        printf("Variavel inteira %%d = %8d\n", var2 );
        // "%8d" p/ definir onde começar a colocar

        printf("Variavel inteira %%d = %d\n", var );

        printf("Variavel inteira %%i = %i\n", var );

        printf("Variavel inteira %%x = %x\n", var );
        // numeros em base 16

        printf("Variavel inteira %%o = %o\n", var );
        // numeros em base 8

        printf("\n");

        // formatação de variaveis float e double

        printf("Variavel double %%f = %.2f\n", var3 );
        // o "%.2f" define a quantidade de casas decimais que vc deseja

        printf("Variavel double %%f = %f\n", var3 );
        // tem um limite de casas decimais e arredonda o numero

        printf("Variavel double %%e = %e\n", var3 );
        // escreve o numero em notação cientifica

        printf("Variavel double %%g = %g\n", var3 );
        // tem menor precisão de casas decimais e n arredonda

        printf("Variavel double %%a = %a\n", var3 );
        // escreve o numero em notação cientifica com virgula tbem

        printf("\n");

    return 0;
}
