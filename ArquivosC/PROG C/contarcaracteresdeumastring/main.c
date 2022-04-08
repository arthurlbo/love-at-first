#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int gnumCaracteres = 0;

int main()
{
    setlocale (LC_ALL, "");

    int tamanhoString (char string []);

    char stringUsuario [20];

        printf(" Digite um nome : ");
        scanf("%s", stringUsuario);

    tamanhoString (stringUsuario);

        printf("\n O nome digitado foi : %s, ele possui %i letras e %i caracteres. \n", stringUsuario, gnumCaracteres, gnumCaracteres + 1);

    return 0;
}
int tamanhoString (char string []){

    while(string [gnumCaracteres] != '\0'){

        ++gnumCaracteres;
    }

    return gnumCaracteres;

}
