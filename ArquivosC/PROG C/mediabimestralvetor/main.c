#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale (LC_ALL,"");

    char c = 's' ;

    do{

        printf("\n\nDigite \"e\" para iniciar \n\n") ;

        printf("\n\nDigite \"s\" para fechar \n\n");

        c = getch () ;

    if(c != 's'){

    float notas [4] = {0} ;

    float med = 0 ;

        printf("Digite suas respectivas notas : \n\n");

    for( int i = 0 ; i < 4 ; ++i ){

        scanf("\n\n%f", &notas [i] );

        med += (notas [i] / 4);

    }

        printf("\nSua média foi : %f\n", med ) ;

    if(med >= 70 ){

        printf("\nVocê foi aprovado !\n\n") ;

    }else{

        printf("\nVocê foi reprovado !\n\n") ;
    }

        system("pause");
        system("cls");

    }

    }while( c != 's' );

    return 0;
}
