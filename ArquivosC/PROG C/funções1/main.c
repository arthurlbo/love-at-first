#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define x 7

int main()
{
    setlocale (LC_ALL, "");

    int i = 4;

        printf(" %i  %i ", x, i);

    void teste(void);
        teste();

    return 0;
}
void teste(void){

    int num1,num2 = 0 ;

        printf("\n\nDigite o 1 número :\n\n");
        scanf("%i", &num1);

        printf("\n\nDigite o 2 número :\n\n");
        scanf("%i", &num2);

    if(num1 != num2 ){

        printf("\n\nVocê digitou dois números distintos !\n\n");

    }else{

        printf("\n\nVocê digitou números iguais !\n\n");
    }
}
