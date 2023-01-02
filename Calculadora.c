#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>

void MainMenu();
void Soma();
void Subtracao();
void Divisao();
void Multiplicacao();
// fun��es utilizadas


void MainMenu(){ // inicio da fun��o tela menu principal
int op;
system("cls");
system ("color F");

    printf("\t\t=======================");
    printf("\n\t\t   Calculadora em C");
    printf("\n\t\t=======================");

    printf("\n\n\t\t (1)- Matem�tica");
    printf("\n\t\t (2)- Subtra��o");
    printf("\n\t\t (3)- Divis�o");
    printf("\n\t\t (4)- Multiplica��o");
    printf("\n\t\t (5)- Encerrar");

    printf("\n\n\tEscolha uma opera��o matem�tica para prosseguir com o c�lculo: ");
    scanf("%d",&op);
    getchar();

    switch(op){  // switch para escolha do usu�rio
        case 1:
            system("cls");
            Soma(); // chama a fun��o soma
            break;

        case 2:
            system("cls");
            Subtracao(); // chama a fun��o subtra��o
            break;

        case 3:
            system("cls");
            Divisao(); // chama a fun��o divis�o
            break;

        case 4:
            system("cls");
            Multiplicacao(); // chama a fun��o multiplica��o
            break;

        case 5:
            printf("\n\t\t\t\t Fim da execu��o....");
            break;

        default:
            system("cls");
            printf("\t\t Valor inv�lido! Retornando ao menu...\n");
            sleep(1);
            MainMenu();
            break;


    }


}
// fim da fun��o menu
void Soma(){
int n1, n2, soma;
char op;

    printf("\t\t=======================");
    printf("\n\t\t       MATEM�TICA"     );
    printf("\n\t\t=======================");

    printf("\n\t Informe o primeiro n�mero: ");
        scanf("%d",&n1);
                                             // campo para usu�rio inserir valores
    printf("\t Informe o segundo n�mero: ");
        scanf("%d",&n2);

    soma=n1+n2; // c�lculo
    printf("\n\tO resultado da opera��o entre %d + %d  �: %d",n1,n2, soma);
    getchar();

    printf("\n\tDeseja realizar outro c�lculo? (1) SIM (2) N�O: \n");
        scanf("\t%c",&op);

    if (op == '1'){ // repete a fun��o soma
        system("cls");
        Soma();
    }
    else if (op== '2'){
        system("cls");  // retorna ao menu caso "2 n�o"
        printf("\t\tVoltando ao Menu Principal...\n");
        getchar();
        sleep(1);
        MainMenu();

    }
    else {
            system("cls");
            printf("\t\t Valor inv�lido! Tente novamente...\n");
            sleep(1);
            getchar();
            Soma();

        }
}
// fim da fun��o soma
void Subtracao(){
int n1, n2, subtr;
char op;

    printf("\t\t=======================");
    printf("\n\t\t       SUBTRA��O"     );
    printf("\n\t\t=======================");

    printf("\n\t Informe o primeiro n�mero: ");
        scanf("%d",&n1);
                                                 // campo para usu�rio inserir valores
    printf("\t Informe o segundo n�mero: ");
        scanf("%d",&n2);

    subtr=n1-n2; // c�lculo
    printf("\n\tO resultado da opera��o entre %d - %d �: %d", n1, n2, subtr);
    getchar();

    printf("\n\tDeseja realizar outro c�lculo? (1) SIM (2) N�O: \n");
        scanf("\t%c",&op);

    if (op == '1'){
        system("cls"); // repete a func��o subtra��o
        Subtracao();
    }
    else {
        system("cls"); // retorna ao menu
        MainMenu();
    }
}
// fim da fun�ao subtra��o

void Divisao(){
float divis,n1,n2;
char op;

    printf("\t\t=======================");
    printf("\n\t\t       DIVIS�O"     );
    printf("\n\t\t=======================");

    printf("\n\t Informe o primeiro n�mero: ");
        scanf("%f",&n1);
                                                // campo para usu�rio inserir valores
    printf("\t Informe o segundo n�mero: ");
        scanf("%f",&n2);

    divis=n1/n2; // c�lculo
    printf("\n\tO resultado da opera��o entre %0.f / %0.f �: %.1f", n1, n2, divis);
    getchar();

    printf("\n\tDeseja realizar outro c�lculo? (1) SIM (2) N�O: \n");
        scanf("\t%c",&op);

    if (op == '1'){
        system("cls");  // repete a fun��o divis�o
        Divisao();
    }
    else {
        system("cls"); // retorna ao menu
        MainMenu();
    }
}
// fim da fun��o divis�o

void Multiplicacao(){
int n1, n2, multi;
char op;

    printf("\t\t=======================");
    printf("\n\t\t      MULTIPLICA��O"     );
    printf("\n\t\t=======================");

    printf("\n\t Informe o primeiro n�mero: ");
        scanf("%d",&n1);
                                                // campo para usu�rio inserir valores
    printf("\t Informe o segundo n�mero: ");
        scanf("%d",&n2);

    multi=n1*n2; // c�lculo
    printf("\n\tO resultado da opera��o entre %d * %d �: %d", n1, n2, multi);
    getchar();

    printf("\n\tDeseja realizar outro c�lculo? (1) SIM (2) N�O: \n");
        scanf("\t%c",&op);

    if (op == '1'){
        system("cls");  // repete a fun��o multiplica��o
        Multiplicacao();
    }
    else {
        system("cls");  // retorna ao menu
        MainMenu();
    }
}
// fim da fun��o multiplica��o


int main (){
setlocale(LC_ALL, "Portuguese");

   MainMenu(); // chama a fun��o tela menu principal

}
