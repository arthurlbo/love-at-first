#include <stdio.h>
#include <stdlib.h>

int main()
{
        struct horario {

        int hora;
        int minutos;
        int segundos;};

        struct horario agora;

        agora.hora = 20;
        agora.minutos = 30;
        agora.segundos = 43;



        printf(" %i : %i : %i \n", agora.hora, agora.minutos, agora.segundos );

    return 0;
}
