#include <stdio.h>
#include <stdlib.h>
int gVariavelGlobal = 2;

int main(void)
{
    void test(void);

        printf("Global :%i\n", gVariavelGlobal );

        test ();
        test ();
        test ();

    return 0;
}
void test(void){

    int varLocalAuto = 3;

        varLocalAuto *= 3 ;

    static int varLocalEstatica = 3 ;

        varLocalEstatica *= 3 ;

        gVariavelGlobal *= 3 ;

        printf("varLocalAuto :%i\n", varLocalAuto );

        printf("varLocalEstatica :%i\n", varLocalEstatica );

        printf("Global :%i\n", gVariavelGlobal );

}
