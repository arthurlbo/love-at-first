#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct horario{
    int hrs, min, seg;
};

int main()
{
    setlocale (LC_ALL,"");

    void receberHorarios(struct horario lista[] );
    void imprimirHorarios(struct horario lista[]);

    struct horario usuarios [5];

    receberHorarios(usuarios);
    imprimirHorarios(usuarios);

    return 0;
}
void receberHorarios(struct horario lista[] ){

    int i;
    for(i = 0; i < 5; ++i){

        printf(" Informe o %i horário : ", i + 1);
        scanf(" %i : %i : %i", &lista[i].hrs, &lista[i].min, &lista[i].seg );
        printf("\n");
    }
}
void
 imprimirHorarios(struct horario lista[]){

    int i;
    for(i = 0; i < 5; ++i){

        printf("\nO %i horário é --> %i : %i : %i\n", i + 1, lista[i].hrs,
                                                            lista[i].min,
                                                            lista[i].seg );
    }
}



