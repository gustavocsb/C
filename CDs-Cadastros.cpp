/*
7. Desenvolva um algoritmo que cadastre os pre�os de at� 100 diferentes CDs em uma loja. 
Ap�s este cadastro, o algoritmo dever� possibilitar a execu��o de uma de duas fun��es para 
aumento dos pre�os cadastrados, sendo a primeira de 10% para todos os CDs, enquanto a segunda 
aumenta o percentual informado pelo vendedor para todos os CDs. Ser� o vendedor que escolher� 
o tipo de aumento desejado. Ap�s os c�lculos dever� ser apresentado o percentual de aumento e, 
para cada CD, o valor sem aumento e o valor com aumento.
*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int quantia;
    
    do{
        printf("Digite quantos pre�os deseja cadastrar: ");
        scanf("%d",&quantia);
        fflush(stdin);
        if(quantia<1||quantia>100){
        	printf("Quantia m�nima: 1\n");
        	printf("Quantia m�xima: 100\n");
		}
    }while(quantia<1||quantia>100);
    
    float cd[2][quantia];
    int i, opcao, porcento;
    
    for(i=0;i<quantia;i++){
    	printf("Digite o valor do %d� CD: ", i+1);
    	scanf("%f",&cd[1][i]);
    	fflush(stdin);
    	system("cls");
	}
	do{
	printf("[1] Aumentar o valor de todos os CDs em 10%%\n");
	printf("[2] Escolher a %% que aumentar� em todos os CDs\n");
	printf("[3] Finalizar\n");
	scanf("%d",&opcao);
	fflush(stdin);
	system("cls");
	switch(opcao){
		case 1:
			for(i=0;i<quantia;i++){
				cd[2][i]=cd[1][i]+cd[1][i]/10;
			}
			opcao=3;
			printf("Pre�o aumentado em 10%%!\n");
			system("pause");
			system("cls");
		break;
		case 2:
			printf("Digite a %% que deseja aumentar: ");
			scanf("%d",&porcento);
			fflush(stdin);
			for(i=0;i<quantia;i++){
				cd[2][i]=cd[1][i]+cd[1][i]/porcento;
			}
			opcao=3;
			printf("Pre�o aumentado em %d%%!\n", porcento);
			system("pause");
			system("cls");
		break;
		case 3:
			opcao=3;
		break;
		default:
			printf("Op��o inv�lida!\n");	
	}
    }while(opcao!=3);
    printf("PRE�O SEM AUMENTO: \n");
    for(i=0;i<quantia;i++){
    	printf("%d� CD: R$ %.2f\n", i+1, cd[1][i]);
	}
    printf("\nNOVOS PRE�OS: \n");
    for(i=0;i<quantia;i++){
    	printf("%d� CD: R$ %.2f\n", i+1, cd[2][i]);
	}
    return 0;
    }

