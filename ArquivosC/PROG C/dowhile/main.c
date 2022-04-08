#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "") ;

    short int contador = 0 ;

    char c ;

    do
    {
        contador += 1 ;

        printf("\nDigite 0 para sair. \n");

        printf("\nquantidade de vezes >%i< \n", contador) ;

        c = getche () ;

    }while ( c != '0') ;

    return 0;
}
