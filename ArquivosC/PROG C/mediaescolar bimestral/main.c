#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "") ;

    float nota1 , nota2 , nota3 , nota4 , med ;

        nota1=nota2=nota3=nota4=med=0 ;

        printf("=======Média escolar bimestral=======\n\n");

        printf("Digite a sua primeira nota : \n");
        scanf("%f",&nota1 );

        printf("Digite a sua segunda nota : \n");
        scanf("%f", &nota2 );

        printf("Digite a sua terceira nota : \n ");
        scanf("%f", &nota3 );

        printf("Digite sua quarta nota : \n");
        scanf("%f", &nota4 );

        med = (nota1+nota2+nota3+nota4) / 4 ;
        printf("A sua média foi de : %f \n", med) ;

    if( med >= 70 )
    {
        printf("Você foi aprovado ! \n");

    }else
    {
        printf("Você foi reprovado !\n");
    }

    return 0;
}
