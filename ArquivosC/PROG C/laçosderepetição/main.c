#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");

      /*  int i = 5 ;

        while(i < 10)
        {
            printf("%i\n", i );
        }*/

    int i = 1 ;

    while( i <= 10)
    {
        printf("%i\n", i );
        i += 1 ;
        // ++i ;
    }

    return 0 ;
}
