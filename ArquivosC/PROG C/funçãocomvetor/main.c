#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // n é a forma mais eficiente de colocar n em ordem.

    int vetor [10] = {6, 4, 1, 9, 8, 0, 5, 7, 3, 2};
   // int i ;
    void ordemCrescente (int vetor [], int n);
    ordemCrescente (vetor, 10);

    for(int l = 0; l < 10; ++l){

        printf("%i\n", vetor [l]);
    }

    return 0 ;
}
void ordemCrescente (int vetor [], int n){

    int i, j, temporaria;

    for(i = 0; i < n; ++i){

        for(j = i + 1; j < n; ++j){

            if(vetor [i] > vetor [j]){

                temporaria = vetor [i];
                vetor [i] = vetor [j];
                vetor [j] = temporaria ;

            }

        }

    }

}
