#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char nomeUsuario [20]; // armazena o nome do usuario
int inicio_Usuario (void);
int menu_Inicial (void);
int menu_Configuracao ( void);
int inicio_Game (void);

int inicio_Usuario (){
int i = 0;
char nomeTemp;

    printf(" \t\t\t SEJA BEM VINDO AO THE WIZARD'S WORLD !! \n\n");
    printf(" \t\t\t Digite seu nome para começar :  \n \t\t\t");

// recebe o nome do usuario
do{
    nomeTemp = getchar ();
    nomeUsuario [i] = nomeTemp;
    ++i;

}while( nomeTemp != '\n');

    nomeUsuario[i - 1] = '\0';

    system ("cls");

    printf(" \t\t\t Bem vindo %s !! \n \n",nomeUsuario);

    menu_Inicial ();

}

int menu_Inicial (void){

    char  opc ; // armazena a opção selecionada do menu

    do{

    printf(" \t\t\t Selecione uma das opções : \n\n");
    printf(" \t\t\t [1] Começar \n");
    printf(" \t\t\t [2] Configurações \n");
    printf(" \t\t\t [3] Sair \n \t\t\t ");

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

    printf(" \t\t\t Teste game 1 \n");

}

int menu_Configuracao (void){

char config; // armazna a opção selecionada dentro do menu de configuração
char temp;

    printf(" \t\t\t [1] Controles \n");
    printf(" \t\t\t [2] saiba mais \n");
    printf(" \t\t\t [3] voltar \n \t\t\t ");

    config = getch ();
    system ("cls");

switch(config){

case '1' :

    printf(" \t\t\t Aperte A para esquerda \n");
    printf(" \t\t\t Aperte W para cima \n");
    printf(" \t\t\t Aperte S para baixo \n");
    printf(" \t\t\t Aperte D para direita \n\n");
    printf(" \t\t\t [0] Voltar \n \t\t\t ");
    temp = getch ();

if(temp == '0'){

    system ("cls");
    menu_Configuracao ();
}
    break ;

case '2' :

    printf(" \t\t\t Projeto desenvolvido por Arthur Carneiro Lobo, Adam, Pedro e Carlos no 1 ");
    printf(" semestre dos cursos \n \t\t\t Engenharia de Software e ADS na Fesp PR \n\n");
    printf(" \t\t\t [0] Voltar \n \t\t\t ");
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
    inicio_Usuario ();

    return 0;
}
