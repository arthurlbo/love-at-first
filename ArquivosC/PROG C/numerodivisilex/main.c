#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");

    int num1, num2 = 0;

        printf("Digite dois números inteiros : \n");
        scanf("%i %i", &num1, &num2 );

    if(num1 % num2 == 0){

        printf("\nO número %i é divisivel pelo número %i !", num1, num2 );

    }else{

        printf("\nO número %i não é divisivel pelo número %i !", num1, num2 );
    }

    return 0;
}
