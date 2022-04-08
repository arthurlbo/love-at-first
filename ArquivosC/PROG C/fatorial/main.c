#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");

    char c = 's' ;

    do{

    int f, r ;
    r = 1 ;

        printf("\n\nDigite \"e\" para iniciar \n\n") ;

        printf("\n\nDigite \"s\" para fechar \n\n");

        c = getch () ;

    if( c != 's'){

        printf("\nDigite o número que você deseja o fatorial :  ");
        scanf("%i", &f);

    do{

        r *= f ;
        --f;

    }while( f >= 1);

        printf("\n\nO resultado do fatorial é : %i\n\n\n", r );

        system ("pause") ;
        system ("cls") ;

    }

    }while( c != 's');

    return 0 ;
}
