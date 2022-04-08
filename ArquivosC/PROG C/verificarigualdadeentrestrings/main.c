#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");

   _Bool stringsIguais (char st1 [], char st2 []);

    char string1 [20];
    char string2 [20];

        printf(" Digite a 1 string e a 2 string : ");
        scanf("%s %s", &string1, &string2);


   if(stringsIguais(string1, string2)){
        printf("\n As strings são iguais. \n ");

   }else{
        printf("\n As strings são diferentes. \n ");

   }

    return 0;
}
_Bool stringsIguais (char st1 [], char st2 []){

    int i = 0;

      while( st1[i] == st2[i] && st1[i] != '\0' && st2[i] != '\0'){
        ++i;
    }

    if( st1[i] == '\0' && st2[i] == '\0'){
        return 1;
    }else{
        return 0;
    }

}
