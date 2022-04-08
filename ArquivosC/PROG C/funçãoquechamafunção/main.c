#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL , "");

    char c = 's' ;

    do{

        printf("\nDigite \"e\" para iniciar \n") ;

        printf("\nDigite \"s\" para fechar \n");

        c = getch () ;

    if(c != 's'){

    float somaDeDigitos (float num1, float num2 );

    float a, b, soma;

        printf("\nDigite 2 números : \n\n");

        scanf("%f", &a );
        scanf("%f", &b);

        soma = somaDeDigitos (a, b);
        printf("A soma é : %f \n\n", soma);

        system("pause");
        system("cls");

    }

    }while( c != 's' );

    return 0;
}
float somaDeDigitos (float num1, float num2 ){

    float valorAbsoluto (float x );

    if(num1 < 0){

        num1 = valorAbsoluto(num1);

    }
    if(num2 < 0){

        num2 = valorAbsoluto(num2);
    }

    return num1 + num2 ;
}
float valorAbsoluto (float x ){

        x *= -1;

    return x ;
}

