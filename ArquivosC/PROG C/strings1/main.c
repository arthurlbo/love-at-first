#include <stdio.h>
#include <stdlib.h>
int main()
{
    char teste [] = {'b', 'r', 'a', 's', 'i', 'l'};

    int i;

    for(i = 0; i < 6; ++i){

        printf("%c", teste[i] );
    }
    printf("\n");

    return 0;
}
