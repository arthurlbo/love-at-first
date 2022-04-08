#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "") ;

        printf("Digite o seu usuário : \n");

    char c ;
        c = getchar () ;

    if(c == '1' )
    {
        printf("\n Usuário correto ! \n") ;

    }else{
        printf("\n Usuário incorreto. \n") ;

        printf("\n O usuário digitado foi: -->%c<--- \n", c ) ;
    }

    return 0;
}
