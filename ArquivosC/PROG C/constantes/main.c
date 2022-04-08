#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#define x  8

int main()
{
    setlocale (LC_ALL, "" );

    const int i = 9 ;

        printf("%i\n", i );

        printf("\n%i\n", x + i );

    return 0;
}
