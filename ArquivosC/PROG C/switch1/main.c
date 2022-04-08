#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale (LC_ALL, "") ;

    short int i ;

        printf("Digite um valor de 1 a 9 : ");
        scanf("%i", &i ) ;

    do{

    switch(i){

    case 0 :

        printf(" \n O valor digitado foi >0< \n ");
        break ;

    case 1 :

        printf(" \n O valor digitado foi >1< \n ");
        break ;

    case 2 :

        printf(" \n O valor digitado foi >2< \n ");
        break ;

    case 3 :

        printf(" \n O valor digitado foi >3< \n ");
        break ;

    case 4 :

        printf(" \n O valor digitado foi >4< \n ");
        break ;

    case 5 :

        printf(" \n O valor digitado foi >5< \n ");
        break ;

    case 6 :

        printf(" \n O valor digitado foi >6< \n ");
        break ;

    case 7 :

        printf(" \n O valor digitado foi >7< \n ");
        break ;

    case 8 :

        printf(" \n O valor digitado foi >8< \n ");
        break ;

    case 9 :

        printf(" \n O valor digitado foi >1< \n ");
        break ;
    }

    }while( i != 0 ) ;

    return 0;
}
