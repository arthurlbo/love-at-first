#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale (LC_ALL, "" );

    int num1, num2 ;

        printf("\nInforme um número : ");
        scanf("%i", &num1 );

   /* if( num1 < 0){
        num2 = 1 ;
    }else{
    num2 = num1 ;
    }
    printf("%i\n", num2 );*/

        num2 = (num1 < 0) ? 0 : num1 ;

        printf("%i\n", num2 );

    return 0;
}
