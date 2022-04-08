#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale (LC_ALL, "");

    float areaRetang(float base, float altura);

    float area = areaRetang(10.0, 15.0);

        printf("A area é :%f", area);

    return 0;
}
float areaRetang(float base, float altura){

    float area = base * altura;

    return area;

}
