#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "" );

    int i = 1 ;

    short int iB, iC, iP, ia, iJ, iA, iI ;

        iB = 3 ;

        iC = 11 ;

        iP = 14 ;

        ia = 17 ;

        iJ = 25 ;

        iA = 59 ;

        iI = 60 ;

    short int idade = 0 ;

    char c = 's' ;

    do{

        printf("\n\nDigite \"e\" para iniciar \n\n") ;

        printf("\n\nDigite \"s\" para fechar \n\n");

        c = getch () ;

    if(c != 's')

                printf(" \n\nDigite a idade de uma pessoa : ");
                scanf("%i", &idade) ;

    if(idade <= iB)

        {
                printf("\n\nA idade informada é de um bebê\n\n");
                system ("pause");
                system ("cls");

    }else{
        if(idade <= iC){

                printf("\n\nA idade informada é de uma criança\n\n");
                system ("pause");
                system ("cls");

    }else{
        if(idade <= iP){

                printf("\n\nA idade informada é de um pré-adolescente\n\n");
                system ("pause");
                system ("cls");

    }else{
        if(idade <= ia){

                printf("\n\nA idade informada é de um adolescente\n\n");
                system ("pause");
                system ("cls");

    }else{
        if(idade <= iJ){

                printf("\n\nA idade informada é de um jovem\n\n");
                system ("pause");
                system ("cls");

    }else{
        if(idade <= iA){

                printf("\n\nA idade informada é de um adulto\n\n") ;
                system ("pause");
                system ("cls");

    }else{
        if(idade >= iI){

                printf("\n\nA idade informada é de um idoso\n\n") ;
                system ("pause");
                system ("cls");

                            }

                        }

                    }

                }

            }

        }

    }

    }while( c != 's' );

    ++i ;

    return 0;
}
