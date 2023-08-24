/* 6. Desenvolva um programa em C que apresente um menu de opções numa janela “bem” amigável ao usuário, 
onde este deverá escolher qual a região do Brasil que ele gostaria de conhecer. Após o usuário informar esta 
região, limpe toda a janela e escreva no meio dela qual foi a opção do usuário. Lembrando que as regiões 
deverão ser apresentadas conforme o seguinte menu de opções:

Menu de Opções
============
1 – Norte
2 – Nordeste
3 – Centro-Oeste
4 – Sudeste
5 – Sul
0 – Sair do programa */

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int opcao;
        printf("\n-------------------------------------------\n");
        printf("|       REGIÕES BRASILEIRAS - TURISMO     |\n");
        printf("|                                         |\n");
        printf("| Digite o número da região que deseja    |\n");
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
        		printf("\nVocê selecionou a região Norte!\n");
        	break;
        	case 2:
        		printf("\nVocê selecionou a região Nordeste!\n");
        	break;
        	case 3:
        		printf("\nVocê selecionou a região Centro-Oeste!\n");
        	break;
        	case 4:
        		printf("\nVocê selecionou a região Sudeste!\n");
        	break;
        	case 5:
        		printf("\nVocê selecionou a região Sul!\n");
        	break;
        	default:
        		printf("\nOpção inválida!\n");
        	}
    
    return 0;
    }

