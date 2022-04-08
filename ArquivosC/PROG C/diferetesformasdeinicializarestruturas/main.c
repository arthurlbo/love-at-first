#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*1 forma
    struct horario{

        int horas, minutos, segundos;
    }agora = {10, 20, 30};

    printf(" %i : %i : %i \n", agora.horas, agora.minutos, agora.segundos);

    */

    /*forma 2
    struct horario{
        int horas, minutos, segundos;
    }agora, teste ;

    agora.horas = 10;
    agora.minutos = 15;
    teste.horas = 23;

    printf(" %i : %i : %i \n", agora.horas, agora.minutos, teste.horas);
    */

    struct horario{

        int hrs, min, seg;
    };

    struct horario agora = {.seg = 24, .min = 19};

        printf(" %i : %i : %i \n", agora.hrs, agora.min, agora.seg);

    return 0;
}
