#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale (LC_ALL, "");

    unsigned int i = 10 ;

    printf("Digite um número != de 5: \n");
    scanf("%i", &i );

    if( i != 5)
    {
        printf("TRUE");

    }else{

        printf("FALSE");

    }

    return 0;
}
