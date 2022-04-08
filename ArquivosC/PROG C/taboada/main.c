#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale (LC_ALL, " " );

    int taboada,x ;

    printf("=================================TABOADA========================================");

    printf(" \n\n Digite o número que você deseja : ") ;
    scanf("%i", &x );

    printf(" \n\nDigite a taboada que você deseja : ");
    scanf("%i", &taboada );

    while( x <= taboada ) {

    printf("%i x %i", x, taboada,  x * taboada );

    ++x ;

    }

    return 0;
}
