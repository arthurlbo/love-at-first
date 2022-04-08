#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");

    short int cont = 0 ;

    float senha = 161607 ;

    do
    {
        cont += 1 ;

        printf("\n Digite a senha correta :  ");
        scanf("%f", &senha);

        printf("\n %i tentativas \n ", cont) ;

    }while ( senha != 161607 ) ;

    return 0;
}
