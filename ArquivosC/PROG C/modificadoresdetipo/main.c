#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "") ;

    int d = 5 ;

    short int i = 10 ;

    unsigned short int x = 2 ;

        printf(" Variável d : %i \n", sizeof (d) ) ;

        printf(" variável i : %i \n", sizeof (i) );

        printf(" variável x: %i \n", sizeof (x) ) ;

    return 0;
}
