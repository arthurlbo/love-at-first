#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "" );

    int num, x ;

        printf("Digite uma sequencia de  números inteiros :\n");
        scanf("%i", &num );

    if( num >= 0){

    do{

        x = num % 10;
        printf("%i", x);

        num /= 10 ;

    }while(num != 0);

        printf("\n\n");

    }else{

        num = num * -1;
        printf("-");

    do{

        x = num % 10;
        printf("%i", x);

        num /= 10 ;

    }while(num != 0);

        printf("\n\n");

    }

    return 0;
}
