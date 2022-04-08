#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "") ;

    int iB, iC, iP, ia, iJ, iA, iI ;

        iB = 3 ;

        iC = 11 ;

        iP = 14 ;

        ia = 17 ;

        iJ = 25 ;

        iA = 59 ;

        iI = 60 ;

    int idade = 0 ;

        printf("Digite a idade de uma pessoa : \n");
        scanf("%i", &idade) ;

    if(idade <= iB)
        {

        printf("A idade informada é de um bebê");

    }else{

        if(idade <= iC){
        printf("A idade informada é de uma criança");

    }else{

        if(idade <= iP){
        printf("A idade informada é de um pré-adolescente");

    }else{

        if(idade <= ia){
        printf("A idade informada é de um adolescente");
    }else{

        if(idade <= iJ){
        printf("A idade informada é de um jovem");

    }else{

        if(idade <= iA){
        printf("A idade informada é de um adulto") ;

    }else{

        if(idade >= iI){
        printf("A idade informada é de um idoso") ;


                        }

                    }

                }

            }

        }

    }

}

    return 0;
}
