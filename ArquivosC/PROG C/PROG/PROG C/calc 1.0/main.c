#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale (LC_ALL, "") ;

    float num1, num2, soma , sub , multi , div, med ;

        printf("\t\t\t\tCALCULADORA\t\t\t\t\n\n");

        printf("Digite o primeiro número:\n");
        scanf("%f", &num1 );

        printf("Digite o segundo número :\n");
        scanf("%f", &num2);

        soma = num1 + num2 ;
        sub= num1 - num2 ;
        multi= num1 * num2 ;
        div= num1 / num2 ;
        med = (num1 + num2) / 2 ;

        printf("A soma é : %f\n\n", soma);
        printf("A subtração é : %f \n\n", sub);
        printf("A multiplicação  é : %f\n\n", multi);
        printf("A divisão é : %f\n\n", div );
        printf("A média é : %f\n\n ", med) ;

    return 0;
}
