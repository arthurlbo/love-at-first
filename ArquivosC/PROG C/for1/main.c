#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
int main()
{
    setlocale (LC_ALL, " " );

    for(int i = 1 ; i <= 100 ; ++i ){

        printf("%i\n\n", i * 4 );

    }

    return 0;
}
