#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale (LC_ALL,"");

    int vetor [10] = {10,5,6,14,7,90,7,6,1,12321};

    for( int i = 0 ; i < 10 ; ++i){

        printf("%i\n", vetor [i] );
    }

    return 0;
}
