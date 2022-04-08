#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");

    int matriz [3] [3] = { {1,2,3},
                           {4,5,6},
                           {7,8,9}};

    // ou {1,2,3,4,5,6,7,8,9}

        printf("%i\n", matriz [1] [0] );

    return 0;
}
