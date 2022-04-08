#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");

    char x ;

        printf("Digite um caracter em minuscula: ") ;
        scanf("%c", &x ) ;

    if (x >= 'a')

    {
        printf("A letra que vc digitou em maiuscula : >%c< \n", toupper(x));
    }

    return 0;
}
