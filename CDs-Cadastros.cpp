/*
7. Desenvolva um algoritmo que cadastre os preços de até 100 diferentes CDs em uma loja. 
Após este cadastro, o algoritmo deverá possibilitar a execução de uma de duas funções para 
aumento dos preços cadastrados, sendo a primeira de 10% para todos os CDs, enquanto a segunda 
aumenta o percentual informado pelo vendedor para todos os CDs. Será o vendedor que escolherá 
o tipo de aumento desejado. Após os cálculos deverá ser apresentado o percentual de aumento e, 
para cada CD, o valor sem aumento e o valor com aumento.
*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int quantia;
    
    do{
        printf("Digite quantos preços deseja cadastrar: ");
        scanf("%d",&quantia);
        fflush(stdin);
        if(quantia<1||quantia>100){
        	printf("Quantia mínima: 1\n");
        	printf("Quantia máxima: 100\n");
		}
    }while(quantia<1||quantia>100);
    
    float cd[2][quantia];
    int i, opcao, porcento;
    
    for(i=0;i<quantia;i++){
    	printf("Digite o valor do %dº CD: ", i+1);
    	scanf("%f",&cd[1][i]);
    	fflush(stdin);
    	system("cls");
	}
	do{
	printf("[1] Aumentar o valor de todos os CDs em 10%%\n");
	printf("[2] Escolher a %% que aumentará em todos os CDs\n");
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
			printf("Preço aumentado em 10%%!\n");
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
			printf("Preço aumentado em %d%%!\n", porcento);
			system("pause");
			system("cls");
		break;
		case 3:
			opcao=3;
		break;
		default:
			printf("Opção inválida!\n");	
	}
    }while(opcao!=3);
    printf("PREÇO SEM AUMENTO: \n");
    for(i=0;i<quantia;i++){
    	printf("%dº CD: R$ %.2f\n", i+1, cd[1][i]);
	}
    printf("\nNOVOS PREÇOS: \n");
    for(i=0;i<quantia;i++){
    	printf("%dº CD: R$ %.2f\n", i+1, cd[2][i]);
	}
    return 0;
    }

