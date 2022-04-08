#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "") ;

    unsigned int i = 1 ;

    unsigned int valDigitado = 0 ;

        printf("Informe a quantidade que você deseja repetir a instrução : \n\n");
        scanf("%i", &valDigitado);

    while(i <= valDigitado)

    {
        printf("%i\n\n", i * 10) ;
        i += 1 ;
        //++i ;
    }

    return 0;
}
