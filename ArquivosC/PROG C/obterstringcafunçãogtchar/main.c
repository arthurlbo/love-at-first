#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nomeSobrenome[100];
    char caractere;
    int i = 0;

        printf(" Digite seu nome e sobrenome : ");

    do{
        caractere = getchar ();
        nomeSobrenome[i] = caractere;
        ++i;

    }while( caractere != '\n');

    nomeSobrenome[ i - 1] = '\0';

        printf("\n %s\n", nomeSobrenome);

    return 0;
}
