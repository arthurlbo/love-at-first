#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale (LC_ALL,"");

    void concatenarStrings (char string1[], char string2[], char string3[]);

    char palavra1[] = { 'p', 'ã', 'o', ' ' };
    char palavra2[] = { 'm', 'o', 'r', 't', 'a', 'd', 'e', 'l', 'a' };
    char novaPalavra[13];

    concatenarStrings(palavra1, palavra2, novaPalavra);

    int x;

    for(x = 0; x < 13; ++x){

        printf("%c", novaPalavra[x] );
    }
        printf("\n\n");

//outra maneira não vista ainda
/* char teste[] = "pão moratadela" ;
    printf("%s", teste);
    printf("\n"); */

    return 0;
}
void concatenarStrings (char string1[], char string2[], char string3[]){

    int i, j;

    for(i = 0; i < 4; ++i){

        string3[i] = string1[i];
    }

    for(j = 0; j < 9; ++j){

        string3[4 + j] = string2[j];
    }

}
