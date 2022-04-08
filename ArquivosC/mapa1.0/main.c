#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>

int i = 20; // linhas
int j = 60; // colunas

char nomeUsuario [20]; // armazena o nome do usuario

void irparaxy(int x,int y)
{
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x,y}); // x=j (sao colunas) e y=i (sao as linhas)
}
void desenhaRes(void){

    int z; // variavel auxiliar para desenhar

    for(z=0;z<j;z++)   // desenha parede de cima horizontal
    {
        irparaxy(z,0);
        printf("%c",16);
        Sleep(0);
    }
    for(z=0;z<i;z++)   // desenha parede da direita vertical
    {
        irparaxy(j,z);
        printf("%c",31);
        Sleep(0);
    }
    for(z=j;z>=0;z--)   // desenha parede de baixo horizontal
    {
        irparaxy(z,i);
        printf("%c",17);
        Sleep(0);
    }
    for(z=i;z>0;z--)   // desenha parede da esquerda vertical
    {
        irparaxy(0,z);
        printf("%c",30);
        Sleep(0);
    }

}

void inicio_Usuario (){

    irparaxy(15,5);
    printf(" SEJA BEM VINDO AO THE WIZARD'S WORLD !! \n\n");
    irparaxy(15,8);
    printf(" Digite seu nome para começar :  \n \t\t");

    // recebe o nome do usuario
    fflush(stdin);
    gets(nomeUsuario);

    system ("cls");

    irparaxy(15,1);
    printf(" Bem vindo %s !! \n \n",nomeUsuario);

    menu_Inicial ();

}

void menu_Inicial (void){

    char  opc ; // armazena a opção selecionada do menu

    do{

    irparaxy(15,5);
    printf(" Selecione uma das opções : \n\n");
    irparaxy(15,6);
    printf(" [1] Começar \n");
    irparaxy(15,7);
    printf(" [2] Configurações \n");
    irparaxy(15,8);
    printf(" [3] Sair \n ");

    opc = getch ();
    system ("cls");

    if(opc == '1'){
        inicio_Game ();
        break ;}

    if( opc== '2'){
        menu_Configuracao ();
        break;}

    }while( opc != '3'  );

}

int inicio_Game (void){

    int temp1=11, temp2=1 ;
    int z; // variavel auxiliar para desenhar
    int t = 15; // Auxiliar para a segunda linha


    for(z=0;z<i;z++)   // desenha a 1 linha da esquerda
    {
        irparaxy(1,z);
        printf("%c", 124);
        Sleep(0);
    }
    for(z=0;z<t;z++)   // desenha 1 linha da direita
    {
        irparaxy(10,z);
        printf("%c",124);
        Sleep(0);
    }

    for(z=j;z>=40;z--)   // desenha a 1 coluna de cima
    {
        irparaxy(temp1,t);
        printf("%c",95);
        Sleep(0);
        ++temp1;
    }

    for(z=j;z>=20;z--)   // desenha a 1 coluna de baixo
    {
        irparaxy(temp2,i);
        printf("%c",95);
        Sleep(0);
        ++temp2;
    }


    // 2 parte

}

void menu_Configuracao (void){

char config; // armazna a opção selecionada dentro do menu de configuração
char temp;

    irparaxy(15,5);
    printf(" [1] Controles \n");
    irparaxy(15,6);
    printf(" [2] saiba mais \n");
    irparaxy(15,7);
    printf(" [3] voltar \n ");

    config = getch ();
    system ("cls");

switch(config){

case '1' :

    irparaxy(15,5);
    printf("  Aperte A para esquerda \n");
    irparaxy(15,6);
    printf("  Aperte W para cima \n");
    irparaxy(15,7);
    printf("  Aperte S para baixo \n");
    irparaxy(15,8);
    printf("  Aperte D para direita \n\n");
    irparaxy(15,9);
    printf("  [0] Voltar \n ");
    temp = getch ();

if(temp == '0'){

    system ("cls");
    menu_Configuracao ();
}
    break ;

case '2' :

    irparaxy(15,5);
    printf("  Projeto desenvolvido por Arthur Carneiro Lobo, Adam, Pedro e Carlos no 1 ");
    irparaxy(15,6);
    printf(" semestre dos cursos \n  Engenharia de Software e ADS na Fesp PR \n\n");
    irparaxy(15,7);
    printf("  [0] Voltar \n  ");
    temp = getch ();

if(temp == '0'){

    system ("cls");
    menu_Configuracao ();
}
    break;

case '3' :

    system ("cls");
    menu_Inicial ();

    }
}

int main(void)
{
    setlocale (LC_ALL,"");

    desenhaRes ();
    inicio_Usuario ();

    return 0;
}
