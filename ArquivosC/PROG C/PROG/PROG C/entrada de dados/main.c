#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale (LC_ALL, "");

    int num1, num2 ;

        printf("Digite o primeiro número:");
        scanf("%i", &num1 );

        printf("Digite o segundo número:");
        scanf("%i", &num2 ) ;

        printf("O primeiro numero é: %i\n", num1);
        printf("O segundo número é: %i\n", num2);

    return 0;
}
