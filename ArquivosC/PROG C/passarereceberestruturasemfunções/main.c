#include <stdio.h>
#include <stdlib.h>

struct horario
{
    int horas,  minutos,  segundos;
};

int main(void)
{
 struct horario teste(struct horario x);

    struct horario agora;
        agora.horas = 1;
        agora.minutos = 47;
        agora.segundos = 19;

    struct horario resultado;
    resultado = teste(agora);

    printf(" %i : %i : %i \n", resultado.horas, resultado.minutos, resultado.segundos);


    return 0;
}
struct horario teste(struct horario x){

        printf(" %i : %i : %i \n", x.horas, x.minutos, x.segundos);

    x.horas = 12;
    x.minutos = 2;
    x.segundos = 30;

    return x;

}
