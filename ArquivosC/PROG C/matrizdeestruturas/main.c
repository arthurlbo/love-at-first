#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct horario{

        int hrs, min, seg;
    };

    struct horario agora [3] [3] = { {21, 24, 14,  22, 25, 15,  23, 26, 16},
                                     {10, 30, 40,  11, 31, 41,  12, 32, 42},
                                     {30,  1, 50,  31,  2, 51,  32,  3, 52} };


    for (int i = 0; i < 3; ++i){
        for (int x = 0; x < 3; ++x ){

            printf(" %i : %i : %i \n", agora[i] [x].hrs, agora[i] [x].min, agora[i] [x].seg);
        }
            printf("\n");
    }

    return 0;
}
