#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");

    int gC, gF, oP = 0;
    float gK = 0;

    do{

            printf("\n\n (1) Celsius para Fahreheint  \n");
            printf("\n (2) Celsius para Kelvin  \n");
            printf("\n (3) Fahreheint para Celsius  \n");
            printf("\n (4) Fahreheint para Kelvin  \n");
            printf("\n (5) Kelvin para Celsius \n");
            printf("\n (6) Kelvin para Fahreheint \n ");
            printf("\n (0) sair \n ");

            printf("\n\n Digite a operação : ") ;
            scanf("%i", &oP ) ;

    switch (oP){

        case 1 :

            printf("\n Digite a temperatura em grau Celsius : ");
            scanf("%i", &gC);

        gF = (gC * 1.8 ) + 32;

            printf("\n A temperatura em grau Fahrenheit : %i \n\n", gF );

        system ("pause");
        system ("cls");
        break ;

        case 2 :

            printf("\n Digite a temperatura em grau Celsius : ");
            scanf("%i", &gC);

        gK = gC + 273.15;

            printf("\n A temperatura em grau Kelvin : %.2f \n\n", gK );

        system ("pause");
        system ("cls");
        break ;

        case 3 :

            printf("\n Digite a temperatura em grau Fahreheint : ");
            scanf("%i", &gF);

        gC = (gF - 32 ) * 5/9 ;

            printf("\n A temperatura em grau Celsius : %i \n\n", gC );

        system ("pause");
        system ("cls");
        break ;

        case 4 :

            printf("\n Digite a temperatura em grau Fahreheint : ");
            scanf("%i", &gF);

        gK = (gF - 32) * 5/9 + 273,15 ;

            printf("\n A temperatura em grau Kelvin : %.2f \n\n", gK );

        system ("pause");
        system ("cls");
        break ;

        case 5 :

            printf("\n Digite a temperatura em grau Kelvin : ");
            scanf("%f", &gK);

        gC = gK - 273,15 ;

            printf("\n A temperatura em grau Celsius : %i \n\n", gC );

        system ("pause");
        system ("cls");
        break ;

        case 6 :

           printf("\n Digite a temperatura em grau Kelvin : ");
           scanf("%f", &gK);

        gF = gK * 9/5 - 459,67 ;

           printf("\n A temperatura em grau Fahrenheit : %i \n\n", gF );

        system ("pause");
        system ("cls");
        break ;
    }

    }while(oP != 0 );

    return 0;
}
