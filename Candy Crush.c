#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>
#include <string.h>
#include <time.h>
#define tam 10

/** Declarando funções **/

void apresentacao();
void menu();
void jogo();
char gerarSimbolo();
void fimdejogo();
void rank();
void instrucoes();
void sair();

/** Variaveis globais **/

int main (void){
apresentacao();
menu();
system("pause");
return 0;
}

/** Introdução **/

void apresentacao(){
Sleep(1000);
printf("\n\n\n\n\n\n\n");
printf("\t\t\t\t\t\t\t       _     _  ______   _______    \n");
printf("\t\t\t\t\t\t\t      | |   | ||_____ \\ |  _____|   \n");
printf("\t\t\t\t\t\t\t      | |   | | _____| || |___      \n");
printf("\t\t\t\t\t\t\t      | |   | ||  ____/ |  ___|     \n");
printf("\t\t\t\t\t\t\t      | |___| || |      | |_____    \n");
printf("\t\t\t\t\t\t\t      |_______||_|      |_______|   \n");
printf("\n\n\n\n");
printf("\t\t\t\t\t\t\t   ______    _______   _        _______   \n");
printf("\t\t\t\t\t\t\t  |_____ \\  /  ___  \\ | |      |__   __| \n");
printf("\t\t\t\t\t\t\t   _____| ||  |   |  || |         | |    \n");
printf("\t\t\t\t\t\t\t  |  ____/ |  |   |  || |         | |    \n");
printf("\t\t\t\t\t\t\t  | |      |  |___|  || |_____  __| |__  \n");
printf("\t\t\t\t\t\t\t  |_|       \\_______/ |_______||_______| \n");
printf("\n\n\n\n\n\n");
Sleep(1000);
system ("cls");
printf("\t\t\t\t\t\t\t       _         ______   _______  \n");
printf("\t\t\t\t\t\t\t      | |       |_____ \\ |__   __|  \n");
printf("\t\t\t\t\t\t\t      | |        _____| |   | |    \n");
printf("\t\t\t\t\t\t\t      | |       |  ____/    | |    \n");
printf("\t\t\t\t\t\t\t      | |______ | |       __| |__  \n");
printf("\t\t\t\t\t\t\t      |________||_|      |_______| \n");
Sleep(1000);
printf("\n\n\n\n\n\n\n\n\n");
Sleep(1000);
printf("\n\n\n\n\n\n\n\n");
system("pause");
}

/** Menu **/

void menu(){
char opcao;
do{
system("cls");
printf ("\n\n\n\n");
printf ("\t\t\t    _______      _      __    _  ______ __      __	 _______  _______    _	   _  ________  __     __    \n");
printf ("\t\t\t   |   ____|    / \\    |  \\  | ||      \\\\ \\    / /	|   ____||   _   \\  | |   | |/   _____||  |   |  |    \n");
printf ("\t\t\t   |  /        / _ \\   |   \\ | ||   _   \\\\ \\  / /	|  /     |  |_|  /  | |	  | ||  |____  |  |___|  |  \n");
printf ("\t\t\t   | |        / /_\\ \\  | |\\ \\| ||  |_|   |\\ \\/ /	| |      |  ___  \\  | |   | |\\____   \\ |  |___|  |    \n");
printf ("\t\t\t   |  \\___   /  ___  \\ | | \\ \  ||       /  |  |  	|  \\___  | |   \\  \\ | |___| | ____/   ||  |   |  |   \n");
printf ("\t\t\t   |_______|/_/     \\_\\|_|  \\__||______/   |__|    	|_______||_|    \\__\\|_______||_______/ |__|   |__|  \n\n\n\n\n\n\n");
printf ("\t\t\t\t\t\t\t\t  .-----------------------. \n");
printf ("\t\t\t\t\t\t\t\t  |                       | \n");
printf ("\t\t\t\t\t\t\t\t  |  N  - Novo Jogo       | \n");
printf ("\t\t\t\t\t\t\t\t  |  P  - Pontuacoes      | \n");
printf ("\t\t\t\t\t\t\t\t  |  I  - Instrucoes      | \n");
printf ("\t\t\t\t\t\t\t\t  |  S  - Sair            | \n");
printf ("\t\t\t\t\t\t\t\t  |                       | \n");
printf ("\t\t\t\t\t\t\t\t  '-----------------------' \n\n\n\n\n");
fflush(stdin);
opcao = getch();
opcao = tolower(opcao);
switch(opcao){
case 'n':
system("cls");
jogo();
case 's':
system("cls");
sair();
break;
case 'p':
system("cls");
rank();
break;
case 'i':
system("cls");
instrucoes();
break;
default:
break;
}
}
while(1);
}

/** O Jogo **/

jogo()
{
// tabuleiro do jogo
char nome[tam],ponto=0;
int i, j, simbolo,mov;
int k, tempo=15,fechar=0;
char m, n;
char **ptr_tabuleiro;
int aux1;
int linha1,coluna1,linha2,coluna2,troca;
printf("Digite o Nome do Jogador: ");
gets(nome);
system("cls");
char tabuleiro[10][10] =
    {
        ' ',' ','2','3','4','5','6','7','8',' ',
        ' ',201,205,205,205,205,205,205,205,187,
        '2',186,' ',' ',' ',' ',' ',' ',' ',186,
        '3',186,' ',' ',' ',' ',' ',' ',' ',186,
        '4',186,' ',' ',' ',' ',' ',' ',' ',186,
        '5',186,' ',' ',' ',' ',' ',' ',' ',186,
        '6',186,' ',' ',' ',' ',' ',' ',' ',186,
        '7',186,' ',' ',' ',' ',' ',' ',' ',186,
        '8',186,' ',' ',' ',' ',' ',' ',' ',186,
        ' ',200,205,205,205,205,205,205,205,188,
    };

    srand((unsigned)time(NULL));

    for (i=2; i<9; i++)
    {
        for (j=2; j<9; j++)
        {
            tabuleiro[i][j] = gerarSimbolo();
        }

   }// Verifica se não existem 3 peças iguais na HORIZONTAL.
     do {
	aux1 = 0;
    for (i=2; i<=8; i++){
    	for (j=2; j<=6; j++){
    		if (((tabuleiro[i][j])==(tabuleiro[i][j+1])) && ((tabuleiro[i][j])==(tabuleiro[i][j+2]))){

				if (tabuleiro[i][j] =='+') { tabuleiro[i][j] ='!'; aux1 += 1; } ;
    			if (tabuleiro[i][j] =='!') { tabuleiro[i][j] ='/'; aux1 += 1; } ;
    			if (tabuleiro[i][j] =='/') { tabuleiro[i][j] ='@'; aux1 += 1; } ;
    			if (tabuleiro[i][j] =='@') { tabuleiro[i][j] ='$'; aux1 += 1; } ;
    			if (tabuleiro[i][j] =='$') { tabuleiro[i][j] ='&'; aux1 += 1; } ;
    			if (tabuleiro[i][j] =='&') { tabuleiro[i][j] ='#'; aux1 += 1; } ;
    			if (tabuleiro[i][j] =='#') { tabuleiro[i][j] ='+'; aux1 += 1; } ;
			}
		}
	} // Verifica se não existem 3 peças iguais na VERTICAL.
	for (i=2; i<=6; i++){
    	for (j=2; j<=8; j++){
    		if (((tabuleiro[i][j])==(tabuleiro[i+1][j])) && ((tabuleiro[i][j])==(tabuleiro[i+2][j]))){

				if (tabuleiro[i][j] =='+') { tabuleiro[i][j] ='!'; aux1 += 1; }
    			if (tabuleiro[i][j] =='!') { tabuleiro[i][j] ='/'; aux1 += 1; }
    			if (tabuleiro[i][j] =='/') { tabuleiro[i][j] ='@'; aux1 += 1; }
    			if (tabuleiro[i][j] =='@') { tabuleiro[i][j] ='$'; aux1 += 1; }
    			if (tabuleiro[i][j] =='$') { tabuleiro[i][j] ='&'; aux1 += 1; }
    			if (tabuleiro[i][j] =='&') { tabuleiro[i][j] ='#'; aux1 += 1; }
    			if (tabuleiro[i][j] =='#') { tabuleiro[i][j] ='+'; aux1 += 1; }
			}
		}
	}
} while (aux1>0);

    for (k=0; k<=tempo; k++)
    {
        ptr_tabuleiro=(char**) malloc(10*sizeof(char*));

        for (m=0; m<10; m++) ptr_tabuleiro[m]=(char*) malloc(10*sizeof(int));

        for (m=0; m<10; m++)
        {
            for(n=0; n<10; n++)
            {
                ptr_tabuleiro[m][n] = tabuleiro[m][n];
            }
        }

        printf ("\n\n\n");
        for (m=0; m<10; m++)
        {
            printf("                          ");
            for (n=0; n<10; n++)
            {
                printf("%c ", ptr_tabuleiro[m][n]);
            }
            putchar('\n');
        }
        printf ("\n\n");
        printf("\t\t\tJogador: %s\n",nome);
        printf("\t\t\tJogadas: %d\n", tempo-k);
        printf("\t\t\tPontos: %d\n",ponto);
        printf ("\n\n");

        int linha1,linha2, coluna1,coluna2,troca;

    printf("\t\t\tDigite a linha de origem do simbolo que deseja combinar:");
    scanf ("%d",&linha1);
    printf("\t\t\tDigite a coluna de origem do simbolo que deseja combinar:");
    scanf ("%d",&coluna1);
    printf ("\t\t\tDigite a linha de destino do simbolo que deseja combinar:");
    scanf ("%d",&linha2);
    printf ("\t\t\tDigite a coluna de destinho do simbolo que deseja combinar:");
    scanf ("%d",&coluna2);
        if(linha1== 0 && coluna1== 0 && linha2== 0 && coluna2 == 0)
        {
            fimdejogo(nome,ponto);
        }
        else{
            if(linha1>1 && linha1<9 && coluna1>1 && coluna1<9 && linha2>1 && linha2<9 && coluna2>1 && coluna2<9)
            {
                if(linha1-linha2>1 || linha1-linha2<-1 || coluna1-coluna2 > 1 || coluna1-coluna2 <-1)
                {
                    k--;
                }
                else
                {
                if(tabuleiro[linha1][coluna1] == tabuleiro[linha2][coluna2+1] && tabuleiro[linha1][coluna1]== tabuleiro[linha2][coluna2+2] || tabuleiro[linha1][coluna1]== tabuleiro[linha2-1][coluna2] && tabuleiro[linha1][coluna1]== tabuleiro[linha2-2][coluna2] || tabuleiro[linha1][coluna1] == tabuleiro[linha2][coluna2-1] && tabuleiro[linha1][coluna1]== tabuleiro[linha2][coluna2-2])
                {
                    troca= tabuleiro[linha1][coluna1];
                    tabuleiro[linha1][coluna1]= tabuleiro[linha2][coluna2];
                    tabuleiro[linha2][coluna2] = troca;
                }
                else if(tabuleiro[linha1][coluna1] == tabuleiro[linha2+1][coluna2] && tabuleiro[linha1][coluna1]== tabuleiro[linha2+2][coluna2] || tabuleiro[linha1][coluna1] == tabuleiro[linha2][coluna2+1]&& tabuleiro[linha1][coluna1]== tabuleiro[linha2][coluna2+2] || tabuleiro[linha1][coluna1] == tabuleiro[linha2][coluna2-1]&& tabuleiro[linha1][coluna1]== tabuleiro[linha2][coluna2-2])
                {

                    troca= tabuleiro[linha1][coluna1];
                    tabuleiro[linha1][coluna1]= tabuleiro[linha2][coluna2];
                    tabuleiro[linha2][coluna2] = troca;

                }
                else if(tabuleiro[linha1][coluna1] == tabuleiro[linha2-1][coluna2] && tabuleiro[linha1][coluna1]== tabuleiro[linha2-2][coluna2] || tabuleiro[linha1][coluna1] == tabuleiro[linha2+1][coluna2]&& tabuleiro[linha1][coluna1]== tabuleiro[linha2+2][coluna2] || tabuleiro[linha1][coluna1] == tabuleiro[linha2][coluna2+1] && tabuleiro[linha1][coluna1]== tabuleiro[linha2][coluna2+2] )
                {
                    troca= tabuleiro[linha1][coluna1];
                    tabuleiro[linha1][coluna1]= tabuleiro[linha2][coluna2];
                    tabuleiro[linha2][coluna2] = troca;
                }
                else if(tabuleiro[linha1][coluna1] == tabuleiro[linha2-1][coluna2]&& tabuleiro[linha1][coluna1]== tabuleiro[linha2-2][coluna2] || tabuleiro[linha1][coluna1] == tabuleiro[linha2+1][coluna2]&& tabuleiro[linha1][coluna1]== tabuleiro[linha2+2][coluna2] || tabuleiro[linha1][coluna1] == tabuleiro[linha2][coluna2-1]&& tabuleiro[linha1][coluna1]== tabuleiro[linha2][coluna2-2] )
                {
                    troca= tabuleiro[linha1][coluna1];
                    tabuleiro[linha1][coluna1]= tabuleiro[linha2][coluna2];
                    tabuleiro[linha2][coluna2] = troca;
                }
                else if(tabuleiro[linha2][coluna2] == tabuleiro[linha1][coluna1+1] && tabuleiro[linha2][coluna2]== tabuleiro[linha1][coluna1+2] || tabuleiro[linha2][coluna2]== tabuleiro[linha1-1][coluna1] && tabuleiro[linha2][coluna2]== tabuleiro[linha1-2][coluna1] || tabuleiro[linha2][coluna2] == tabuleiro[linha1][coluna1-1] && tabuleiro[linha2][coluna2]== tabuleiro[linha1][coluna1-2])
                {
                    troca= tabuleiro[linha1][coluna1];
                    tabuleiro[linha1][coluna1]= tabuleiro[linha2][coluna2];
                    tabuleiro[linha2][coluna2] = troca;
                }
                else if(tabuleiro[linha2][coluna2] == tabuleiro[linha1+1][coluna1] && tabuleiro[linha2][coluna2]== tabuleiro[linha1+2][coluna1] || tabuleiro[linha2][coluna2] == tabuleiro[linha1][coluna1+1]&& tabuleiro[linha2][coluna2]== tabuleiro[linha1][coluna1+2] || tabuleiro[linha2][coluna2] == tabuleiro[linha1][coluna1-1]&& tabuleiro[linha2][coluna2]== tabuleiro[linha1][coluna1-2])
                {

                    troca= tabuleiro[linha1][coluna1];
                    tabuleiro[linha1][coluna1]= tabuleiro[linha2][coluna2];
                    tabuleiro[linha2][coluna2] = troca;

                }
                else if(tabuleiro[linha2][coluna2] == tabuleiro[linha1-1][coluna1] && tabuleiro[linha2][coluna2]== tabuleiro[linha1-2][coluna1] || tabuleiro[linha2][coluna2] == tabuleiro[linha1+1][coluna1]&& tabuleiro[linha2][coluna2]== tabuleiro[linha1+2][coluna1] || tabuleiro[linha2][coluna2] == tabuleiro[linha1][coluna1+1] && tabuleiro[linha2][coluna2]== tabuleiro[linha2][coluna1+2] )
                {
                    troca= tabuleiro[linha1][coluna1];
                    tabuleiro[linha1][coluna1]= tabuleiro[linha2][coluna2];
                    tabuleiro[linha2][coluna2] = troca;
                }
                else if(tabuleiro[linha2][coluna2] == tabuleiro[linha1-1][coluna1]&& tabuleiro[linha2][coluna2]== tabuleiro[linha1-2][coluna1] || tabuleiro[linha2][coluna2] == tabuleiro[linha1+1][coluna1]&& tabuleiro[linha2][coluna2]== tabuleiro[linha1+2][coluna1] || tabuleiro[linha2][coluna2] == tabuleiro[linha1][coluna1-1]&& tabuleiro[linha2][coluna2]== tabuleiro[linha1][coluna1-2] )
                {
                    troca= tabuleiro[linha1][coluna1];
                    tabuleiro[linha1][coluna1]= tabuleiro[linha2][coluna2];
                    tabuleiro[linha2][coluna2] = troca;
                }
                else{
                        k--;
                    }
                }
            }
            else{
                k--;
                }
        }
        for (i=2; i<=8; i++)
        {
            for (j=2; j<=8; j++)
            {
                if (tabuleiro[i][j] == tabuleiro[i][j+1] && tabuleiro[i][j] == tabuleiro[i][j+2] && tabuleiro[i][j] == tabuleiro[i-1][j] && tabuleiro[i][j] == tabuleiro[i-2][j])
                {
                    ponto +=5;
                    k--;
                    tabuleiro[i][j] = gerarSimbolo();
                    tabuleiro[i][j+1] = gerarSimbolo();
                    tabuleiro[i][j+2] = gerarSimbolo();
                    tabuleiro[i+1][j] = gerarSimbolo();
                    tabuleiro[i+2][j] = gerarSimbolo();
                }
                else if (tabuleiro[i][j] == tabuleiro[i-1][j] && tabuleiro[i][j] == tabuleiro[i-2][j] && tabuleiro[i][j] == tabuleiro[i][j-1] && tabuleiro[i][j] == tabuleiro[i][j-2])
                {
                    ponto +=5;
                    k--;
                    tabuleiro[i][j] = gerarSimbolo();
                    tabuleiro[i][j+1] = gerarSimbolo();
                    tabuleiro[i][j+2] = gerarSimbolo();
                    tabuleiro[i+1][j] = gerarSimbolo();
                    tabuleiro[i+2][j] = gerarSimbolo();
                }
                else if (tabuleiro[i][j] == tabuleiro[i][j-1] && tabuleiro[i][j] == tabuleiro[i][j-2] && tabuleiro[i][j] == tabuleiro[i+1][j] && tabuleiro[i][j] == tabuleiro[i+2][j])
                {
                    ponto +=5;
                    k--;
                    tabuleiro[i][j] = gerarSimbolo();
                    tabuleiro[i][j+1] = gerarSimbolo();
                    tabuleiro[i][j+2] = gerarSimbolo();
                    tabuleiro[i+1][j] = gerarSimbolo();
                    tabuleiro[i+2][j] = gerarSimbolo();
                }
                else if (tabuleiro[i][j] == tabuleiro[i][j+1] && tabuleiro[i][j] == tabuleiro[i][j+2] && tabuleiro[i][j] == tabuleiro[i+1][j] && tabuleiro[i][j] == tabuleiro[i+2][j])
                {
                    ponto +=5;
                    k--;
                    tabuleiro[i][j] = gerarSimbolo();
                    tabuleiro[i][j+1] = gerarSimbolo();
                    tabuleiro[i][j+2] = gerarSimbolo();
                    tabuleiro[i+1][j] = gerarSimbolo();
                    tabuleiro[i+2][j] = gerarSimbolo();
                }
                else if (tabuleiro[i][j] == tabuleiro[i][j+1] && tabuleiro[i][j] == tabuleiro[i][j+2] && tabuleiro[i][j] == tabuleiro[i+1][j] && tabuleiro[i][j] == tabuleiro[i+2][j])
                {
                    ponto +=5;
                    k--;
                    tabuleiro[i][j] = gerarSimbolo();
                    tabuleiro[i][j+1] = gerarSimbolo();
                    tabuleiro[i][j+2] = gerarSimbolo();
                    tabuleiro[i+1][j] = gerarSimbolo();
                    tabuleiro[i+2][j] = gerarSimbolo();
                }
                else if (tabuleiro[i][j] == tabuleiro[i+1][j] && tabuleiro[i][j] == tabuleiro[i+2][j] && tabuleiro[i][j] == tabuleiro[i+3][j] && tabuleiro[i][j] == tabuleiro[i+4][j])
                {
                    ponto += 5;
                    k--;
                    tabuleiro[i][j] = gerarSimbolo();
                    tabuleiro[i][j+1] = gerarSimbolo();
                    tabuleiro[i][j+2] = gerarSimbolo();
                    tabuleiro[i+3][j] = gerarSimbolo();
                    tabuleiro[i+4][j] = gerarSimbolo();
                }
                else if (tabuleiro[i][j] == tabuleiro[i][j+1] && tabuleiro[i][j] == tabuleiro[i][j+2] && tabuleiro[i][j] == tabuleiro[i][j+3] && tabuleiro[i][j] == tabuleiro[i][j+4])
                {
                    ponto += 5;
                    k--;
                    tabuleiro[i][j] = gerarSimbolo();
                    tabuleiro[i][j+1] = gerarSimbolo();
                    tabuleiro[i][j+2] = gerarSimbolo();
                    tabuleiro[i][j+3] = gerarSimbolo();
                    tabuleiro[i][j+4] = gerarSimbolo();
                }
                else if (tabuleiro[i][j] == tabuleiro[i+1][j] && tabuleiro[i][j] == tabuleiro[i+2][j] && tabuleiro[i][j] == tabuleiro[i+3][j])
                {
                    ponto += 4;
                    tabuleiro[i][j] = gerarSimbolo();
                    tabuleiro[i][j+1] = gerarSimbolo();
                    tabuleiro[i][j+2] = gerarSimbolo();
                    tabuleiro[i+3][j] = gerarSimbolo();
                }
                else if (tabuleiro[i][j] == tabuleiro[i][j+1] && tabuleiro[i][j] == tabuleiro[i][j+2] && tabuleiro[i][j] == tabuleiro[i][j+3])
                {
                    ponto += 4;
                    tabuleiro[i][j] = gerarSimbolo();
                    tabuleiro[i][j+1] = gerarSimbolo();
                    tabuleiro[i][j+2] = gerarSimbolo();
                    tabuleiro[i][j+3] = gerarSimbolo();
                }
                else if (tabuleiro[i][j] == tabuleiro[i][j+1] && tabuleiro[i][j] == tabuleiro[i][j+2])
                {
                    ponto += 3;
                    tabuleiro[i][j] = gerarSimbolo();
                    tabuleiro[i][j+1] = gerarSimbolo();
                    tabuleiro[i][j+2] = gerarSimbolo();
                }
                else if (tabuleiro[i][j] == tabuleiro[i+1][j] && tabuleiro[i][j] == tabuleiro[i+2][j])
                {
                    ponto += 3;
                    tabuleiro[i][j] = gerarSimbolo();
                    tabuleiro[i+1][j] = gerarSimbolo();
                    tabuleiro[i+2][j] = gerarSimbolo();
                }
            }
        }
        system("cls");
    }
    fimdejogo(nome,ponto);
}

/** Troca de Peças **/

char gerarSimbolo()
{
 int fruta;
    char auxiliar;
    fruta = 1 + (rand() % 49);
    if ((1<=fruta) && (fruta<=7))
         auxiliar = '+';
    else if ((7<fruta) && (fruta<=14))
        auxiliar = '!';
    else if ((14<fruta) && (fruta<=21))
        auxiliar = '/';
    else if ((21<fruta) && (fruta<=28))
        auxiliar = '@';
    else if ((28<fruta) && (fruta<=35))
        auxiliar = '$';
    else if ((35<fruta) && (fruta<=42))
        auxiliar = '&';
    else if ((42<fruta) && (fruta<=49))
        auxiliar = '#';
 return auxiliar;
}

/** Opção de fim de jogo **/

void fimdejogo(char player[10],int pontuacao){
FILE *file;
system ("cls");
printf("\n\n\n\n\t\t\t\t\t\t\t\t *** Game Over ***\n\n");
printf("\n\n\t\t\t\t\t\t\t\t     %s %d\n\n",player,pontuacao);
file = fopen("ranking.txt", "a+");
fprintf(file,"\t\t\t\t\t\t\t%s \t%d\n",player,pontuacao);
fclose(file);
system("pause");
menu();
}

/** Tabela com o nome dos jogadores com respectivos pontos **/

void rank(){
int t;
char deletar;
FILE* classf;
char userank[tam];
system("cls");
classf = fopen("ranking.txt", "r");
do{
system ("cls");
printf ("\t\t\t\t\t\t   .--------------------------------. \n");
printf ("\t\t\t\t\t\t   |   **  Ultimas Pontuacoes  **   | \n");
printf ("\t\t\t\t\t\t   '--------------------------------' \n\n");
printf ("\t\t\t\t\t\t   	Jogador       Pontos\n\n");
while (fgets(userank, tam, classf) != NULL){
        printf("%s",userank);
    }
    printf("\n\n");
    printf("\n\n  Deseja apagar as pontuacoes? [S/N]");
    fclose(classf);
    deletar = getch();
    deletar = toupper(deletar);
}while(deletar != 'S' && deletar != 'N');
    deletar = toupper(deletar);
    if(deletar == 'N'){
            menu();
        }
        else{
            FILE *classf;
            classf = fopen("ranking.txt", "w");
            fclose(classf);
            printf("\nPontuacoes Deletadas\n\n");
            printf("\n");
            system("pause");
            menu();
        }
}

/** Tutorial **/

void instrucoes(){
system ("cls");
printf ("\t\t\t\t\t\t\t\t    .----------------------. \n");
printf ("\t\t\t\t\t\t\t\t    |  **  Instrucoes  **  | \n");
printf ("\t\t\t\t\t\t\t\t    '----------------------' \n\n");
printf ("\t\t\t\t\t 1 - Candy Crush e um jogo para combinar componentes iguais para marcar pontos.     \n\n");
printf ("\t\t\t\t\t 2 - Marque o maximo de pontos possiveis.     \n\n");
printf ("\t\t\t\t\t 3 - Quanto mais combinacoes vc fizer, mais jogadas ira ganhar para fazer mais combinacoes .    \n\n");
printf ("\t\t\t\t\t 4 - Indique a posicao da linha e coluna da peca que deseja mover.     \n\n");
printf ("\t\t\t\t\t 5 - O Jogo acaba quando a quantidade de jogadas zerar.     \n\n");
printf ("\t\t\t\t\t 6 - Digite 0 em todas as posicoes para desistir do jogo e voltar ao menu.     \n\n");
printf ("\t\t\t\t\t\t\t\t\t Bom Jogo :D\n");
system("pause");
menu();
}

/** Opção que encerra o programa **/

void sair(){
system ("cls");
printf("\n\n\n\t\t\t\t\t\t\t\t *** Obrigado por jogar ***\n\n");
Sleep(3000);
exit(1);
}

