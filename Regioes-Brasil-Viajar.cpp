/* 6. Desenvolva um programa em C que apresente um menu de op��es numa janela �bem� amig�vel ao usu�rio, 
onde este dever� escolher qual a regi�o do Brasil que ele gostaria de conhecer. Ap�s o usu�rio informar esta 
regi�o, limpe toda a janela e escreva no meio dela qual foi a op��o do usu�rio. Lembrando que as regi�es 
dever�o ser apresentadas conforme o seguinte menu de op��es:

Menu de Op��es
============
1 � Norte
2 � Nordeste
3 � Centro-Oeste
4 � Sudeste
5 � Sul
0 � Sair do programa */

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int opcao;
        printf("\n-------------------------------------------\n");
        printf("|       REGI�ES BRASILEIRAS - TURISMO     |\n");
        printf("|                                         |\n");
        printf("| Digite o n�mero da regi�o que deseja    |\n");
        printf("| [1] Norte                               |\n");
        printf("| [2] Nordeste                            |\n");
        printf("| [3] Centro-Oeste                        |\n");
        printf("| [4] Sudeste                             |\n");
        printf("| [5] Sul                                 |\n");
        printf("-------------------------------------------\n");
        scanf("%d", &opcao);
        system("cls");
        switch(opcao){
        	case 1:
        		printf("\nVoc� selecionou a regi�o Norte!\n");
        	break;
        	case 2:
        		printf("\nVoc� selecionou a regi�o Nordeste!\n");
        	break;
        	case 3:
        		printf("\nVoc� selecionou a regi�o Centro-Oeste!\n");
        	break;
        	case 4:
        		printf("\nVoc� selecionou a regi�o Sudeste!\n");
        	break;
        	case 5:
        		printf("\nVoc� selecionou a regi�o Sul!\n");
        	break;
        	default:
        		printf("\nOp��o inv�lida!\n");
        	}
    
    return 0;
    }

