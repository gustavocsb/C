/*
7. Escreva um programa que transforme o computador em uma urna eletr�nica para elei��o do melhor 
jogador de futebol de todos os tempos. O n�mero 25 � do candidato Pel� e o 33 do candidato Maradona. 
Cada voto ser� efetivado pelo n�mero do candidato, permitindo-se ainda o voto 0 (em branco) e qualquer 
outro voto diferente dos especificados ser� considerado nulo. O eleitor dever� sempre ser consultado 
quanto a confirma��o do voto. Ao final da elei��o dever� ser apresentado um relat�rio contendo:

� Quantidade de votos de cada candidato;
� Quantidade de votos em branco e nulos;
� Nome do candidato vencedor (prever possibilidade de empate).

*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int pele=0, maradona=0, branco=0, nulo=0, opcao=0, confirm;
    do{
    	printf("        BOLA DE OURO 1963         \n\n");
    	printf("Digite o n�mero do concorrente\n");
    	printf("[25] Pel�\n");
    	printf("[33] Maradona\n");
    	printf("[0] Em branco\n");
    	printf("[-1] Sair\n");
    	scanf("%d", &opcao);
    	fflush(stdin);
    	system("cls");
    	switch(opcao){
    		case 25:
    			confirm=0;
    			printf("Confirma o voto?\n");
    			printf("1 - Sim      2 - N�o\n");
    			scanf("%d", &confirm);
    			fflush(stdin);
    		    if(confirm==1)
    			pele++;
    			else;
    			system("cls");
    		break;
    		case 33:
    			confirm=0;
    			printf("Confirma o voto?\n");
    			printf("1 - Sim      2 - N�o\n");
    			scanf("%d", &confirm);
    			fflush(stdin);
    		    if(confirm==1)
    			maradona++;
    			else;
    			system("cls");
    		break;
    		case 0:
    			confirm=0;
    			printf("Confirma o voto?\n");
    			printf("1 - Sim      2 - N�o\n");
    			scanf("%d", &confirm);
    			fflush(stdin);
    		    if(confirm==1)
    			branco++;
    			else;
    			system("cls");
    		break;
    		case -1:
    			system("cls");
    		break;
    		default:
    			confirm=0;
    			printf("Confirma o voto?\n");
    			printf("1 - Sim      2 - N�o\n");
    			scanf("%d", &confirm);
    			fflush(stdin);
    		    if(confirm==1)
    			nulo++;
    			else;
    			system("cls");
		}
	}while(opcao!=-1);
	printf("Votos no Pel�: %d\n", pele);
	printf("Votos no Maradona: %d\n", maradona);
	printf("Votos em branco: %d\n", branco);
	printf("Votos nulos: %d\n", nulo);
	if(pele>maradona)
	printf("\nO vencedor da Bola de Ouro de 1963 � PEL�!\n");
	else if(maradona>pele)
	printf("\nO vencedor da Bola de Ouro de 1963 � MARADONA!\n");
	else if(pele==maradona)
	printf("\nO vencedor da Bola de Ouro de 1963 �..... MARADONA E PEL�! EMPATEE!!\n");
    return 0;
    }

