#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale (LC_ALL, "" );

    short int i = 1 ;

        printf("%i \n ", i );

        ++i ;

        printf("%i \n ", i );

        --i ;

        printf("%i \n ", i );

        printf("%i \n ", i++ );

        printf("%i \n ", i );

        printf("%i \n ", i-- );

        printf("%i \n ", i );

    return 0;
}
