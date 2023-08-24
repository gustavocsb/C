/*
6. Fazer um algoritmo/programa que leia a matricula e o salário dos funcionários de uma empresa 
(máximo de 100 funcionários). Após a leitura de todos os dados, informe em uma tela limpa os dados 
lidos e o maior e menor salário dos funcionários. O maior e menor salário deverão ser obtidos, cada um, 
por uma função. Sabe-se ainda que não existe matrícula repetida na empresa.
*/
#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int vetor;
    do{
        printf("Quantos funcionários tem na empresa?\n");
        scanf("%d",&vetor);
        fflush(stdin);
        if(vetor<1||vetor>100){
        	printf("Valor mínimo: 1\nValor máximo: 100\n");
		}
	}while(vetor<1||vetor>100);
    int i, j, maior=0, menor=0, matricula[vetor];
	double salario[vetor];
    for(i=0;i<vetor;i++){
    	printf("%dº Funcionário\n", i+1);
    	printf("Digite a matrícula: ");
    	scanf("%d",&matricula[i]);
		printf("Digite o salário: R$ ");
		scanf("%lf",&salario[i]);
		fflush(stdin);
		printf("\n");
		if(salario[i]<menor){
			menor=salario[i];
		}
		if(salario[i]>maior){
			maior=salario[i];
		}
	}
	system("cls");
	for(i=0;i<vetor;i++){
		printf("%dº Funcionário: Salário: R$ %.2lf   Matrícula %d\n", i+1,salario[i],matricula[i]);
	}
    printf("Menor salário: R$ %.2lf\n", menor);
    printf("Maior salário: R$ %.2lf\n", maior);
    return 0;
    }

