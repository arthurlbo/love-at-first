#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    sem cast dará o resultado errado
    int x, y;
        x = 16;
        y = 3;

    float resultado;
        resultado = x / y;

        printf(" %i \n", resultado);

    */

    int x, y;
        x = 16;
        y = 3;

    float resultado; //cast
        resultado = (float)x / y ;

        printf(" %f \n", resultado);

    return 0;
}
