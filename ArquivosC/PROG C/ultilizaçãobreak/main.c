#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    for(i = 1; i <= 20; ++i){

        if(i % 3 == 0 && i % 9 == 0){
            printf(" O numero %i e divisivel por 3 e 9 \n\n", i);
            break;
        }else{
            printf(" O numero %i nao e divisivel por 3 e 9 \n\n", i);
        }
    }

    return 0;
}

