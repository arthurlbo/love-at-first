#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct horario{

        int hrs, min, seg;
    };

    struct horario agora [3] = {{10, 03,23}, {14, 15, 22}, {03,23,04} };

    /* ou =
    agora[0].hrs = 12;
    agora[0].min = 13;
    agora[0].seg = 15;
    etc.*/

    for (int i = 0; i < 3; ++i){

        printf(" %i : %i : %i \n", agora[i].hrs, agora[i].min, agora[i].seg);
    }

    return 0;
}
