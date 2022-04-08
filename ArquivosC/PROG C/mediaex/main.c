#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "" );

    float notasAlunos [4] [4] = {0} ;

    float mediasAlunos [4] = {0};

    float media = 0;

        printf("\nDigite as respectivas notas do aluno 1 : \n\n");

    for( int aluno = 0; aluno < 4; ++aluno ){

    for( int notas = 0; notas < 4; ++notas ){

        scanf("%f", &notasAlunos[aluno] [notas] );

        media += notasAlunos [aluno] [notas];

    }
        mediasAlunos [aluno] = media / 4 ;

        media = 0;

        printf("\nDigite as respectivas notas do aluno %i : \n\n", aluno + 2);

    }

    for( int aluno = 0; aluno < 4; ++aluno ){

        printf("\nA média do aluno %i é : %f\n", aluno + 1, mediasAlunos [aluno] );

    if(mediasAlunos [aluno] >= 70 ){

        printf("\nO aluno foi aprovado !\n");

    }else{

        printf("\nO aluno foi reprovado !\n");

    }

}

    return 0;
}
