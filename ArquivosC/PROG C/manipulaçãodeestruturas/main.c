#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct horario {

        int hora;
        int minutos;
        int segundos;
        double teste;
        char letra;
    };

    struct horario agora;

        agora.hora = 20;
        agora.minutos = 30;
        agora.segundos = 43;

    struct horario depois;

        depois.hora = agora.hora + 4;
        depois.minutos = agora.minutos - 1;
        depois.segundos = agora.segundos;
        depois.teste = 20 / 5;
        depois.letra = 'a';

        printf(" %i\n", depois.hora );
        printf(" %i\n", depois.minutos );
        printf(" %i\n", depois.segundos );
        printf(" %.0f\n", depois.teste );
        printf(" %c\n", depois.letra );



    return 0;
}
