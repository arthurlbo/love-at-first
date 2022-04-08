#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
char senha [] = "acl161607" ;
char senhaUsuario [20];

int main()
{
    setlocale (LC_ALL, "");

    _Bool stringsIguais (char senha1 [], char senha2 []);

    int t;

    for( t = 1; t < 6; ++t){

        printf("\n Digite a sua senha : ");
        scanf("%s", &senhaUsuario );

   if(stringsIguais(senha, senhaUsuario)){
        printf("\n Senha  correta. \n ");
        break;

   }else{
        printf("\n Senha incorreta. \n \nTentativa %i de 5 \n \a", t);
        getch ();
        system ("cls");
   }

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
