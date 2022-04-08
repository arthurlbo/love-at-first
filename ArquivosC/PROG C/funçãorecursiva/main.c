#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");

    int fatorial (int x);
    int num, resultado;

        printf("Digite o número que você deseja o fatorial : ");
        scanf("%i", &num);

        resultado = fatorial (num);

        printf("O fatorial é : %i\n", resultado);


    return 0;
}
int fatorial (int x){

    int resultado;

    if(x == 0){

        resultado = 1;

    }else{

        resultado = x * fatorial(x - 1);

                   // 3 * 2 = 6.
                   //  2 * 1 = 2
                   // 1 * 1 = 1
                   //  0 = 1
    }

    return resultado;
}
