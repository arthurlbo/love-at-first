#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(void)
{
    // int main () é msm coisa q int main (void)

    setlocale (LC_ALL, "");

    int x [10];

        x [0] = 17 ;
        x [1] = 12 ;
        x [2] = 1 ;
        x [3] = 7 ;
        x [4] = 77 ;
        x [5] = 89 ;
        x [6] = 15 ;
        x [7] = 123 ;
        x [8] = 24 ;
        x [9] = 132 ;

   // ++i [7];

   // i [8] -= i[3];

        printf("%i\n", x [0] );
        printf("%i\n", x [1] );
        printf("%i\n", x [2] );
        printf("%i\n", x [3] );
        printf("%i\n", x [4] );
        printf("%i\n", x [5] );
        printf("%i\n", x [6] );
        printf("%i\n", x [7] );
        printf("%i\n", x [8] );
        printf("%i\n", x [9] );

        printf("\n\n---------------------------------------------------------------\n\n");

    // MANEIRA USADA PARA DECLARAR VETORES COM NUMEROS GRANDES

    int vetor [ 10 ] = {17,12,1,7,77,89,15,123,23,132} ;

    for( int i = 0 ; i < 10 ; ++i ){

        printf("%i\n", vetor [ i ] ) ;

    }

    return 0;
}
