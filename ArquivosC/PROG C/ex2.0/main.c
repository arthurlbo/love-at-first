#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale (LC_ALL, "");

    //receber e armazenar nomes e valores em vetores e depois informar ao usuario o que se pede
    char inicio ;

        printf(" \nDigite >a< para o exercício A \n" );
        printf(" \nDigite >b< para o exercício B \n");
        printf(" \nDigite >c< para o exercício C \n");
        printf(" \nDigite >d< para o exercício D \n");
        printf(" \nDigite >s< para sair\n");

        inicio = getch ();

        system ("cls");

    // vendedores
    char vend1[] = "raissa";
    char vend2[] = "marcelo";
    char vend3[] = "arthur";
    char vend4[] = "paula";
    char vend5[] = "camila";
    char vend6[] = "daniel";
    char vend7[] = "thais";
    char vend8[] = "lucas";
    char vend9[] = "manu";
    char vend10[] = "ana";

    //total de vendas de cada vendedor
    int vendas [10] = {20, 40, 50, 60, 70, 30, 80, 10, 90, 130} ;

    //30% de cada venda
    //valor com  comissão
    float comissao[10] = {(vendas[0]*0.30), (vendas[1]*0.30), (vendas[2]*0.30), (vendas[3]*0.30),(vendas[4]*0.30),
                          (vendas[5]*0.30), (vendas[6]*0.30), (vendas[7]*0.30), (vendas[8]*0.30), (vendas[9]*0.30) } ;

    //numero total de vendas
    int totalVendas = (20+40+50+60+70+30+80+10+90+130);

    if(inicio == 's')

    {
            system ("cls");

    }else{
    if(inicio == 'a'){


            printf("\n O nome do 1 vendedor é : %s e seu valor a receber de comissão é : %.0f\n", vend1, comissao[0]);
            printf("\n O nome do 2 vendedor é : %s e seu valor a receber de comissão é : %.0f\n", vend2, comissao[1]);
            printf("\n O nome do 3 vendedor é : %s e seu valor a receber de comissão é : %.0f\n", vend3, comissao[2]);
            printf("\n O nome do 4 vendedor é : %s e seu valor a receber de comissão é : %.0f\n", vend4, comissao[3]);
            printf("\n O nome do 5 vendedor é : %s e seu valor a receber de comissão é : %.0f\n", vend5, comissao[4]);
            printf("\n O nome do 6 vendedor é : %s e seu valor a receber de comissão é : %.0f\n", vend6, comissao[5]);
            printf("\n O nome do 7 vendedor é : %s e seu valor a receber de comissão é : %.0f\n", vend7, comissao[6]);
            printf("\n O nome do 8 vendedor é : %s e seu valor a receber de comissão é : %.0f\n", vend8, comissao[7]);
            printf("\n O nome do 9 vendedor é : %s e seu valor a receber de comissão é : %.0f\n", vend9, comissao[8]);
            printf("\n O nome do 10 vendedor é : %s e seu valor a receber de comissão é : %.0f\n\n", vend10, comissao[9]);
            system ("pause");
            system ("cls");

    }else{
        if(inicio == 'b'){

            printf("\nO total de vendas é : %i\n\n", totalVendas );
            system ("pause");
            system ("cls");

    }else{
        if(inicio == 'c'){

            printf("\nO maior valor foi de : %0.f  e quem o receberá será a : %s\n\n", comissao[9], vend10);
            system ("pause");
            system ("cls");

    }else{
        if(inicio == 'd') {

            printf("\nO menor valor foi de : %0.f e quem o receberá será o : %s\n\n", comissao[7], vend8 );
            system ("pause");
            system ("cls");

                }
            }
        }
    }
}

    return 0;
}
