#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale (LC_ALL, "");

    char c = 0 ;

    int cod = 0 ;

        printf("\nDigite uma letra de A até G : ");
        scanf("%c", &c );

    cod = (c == 'A') ? 65 :
        (c == 'B') ? 66 :
        (c == 'C') ? 67 :
        (c == 'D') ? 68 :
        (c == 'E') ? 69 :
        (c == 'F') ? 70 :
        (c == 'G') ? 71 : -1 ;

        printf("\nO codígo da letra é : %i\n ", cod );

    return 0;
}
