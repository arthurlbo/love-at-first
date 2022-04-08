#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");

    void alfabeto (char var);

    char palavra[40];

        printf(" Digite uma palavra : ");
        scanf("%s", palavra);

    int i = 0;
    while(palavra [i] != '\0'){
        alfabeto(palavra [i]);
        ++i;
    }

    return 0;
}
void alfabeto (char var){

    if( (var >= 'a' && var <= 'z') || (var >= 'A' && var <= 'Z')){

        printf(" O caracter %c é uma letra . \n", var);
    }else{
        printf(" O caracter %c não é uma letra . \n", var);
    }
}
