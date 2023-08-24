/*
6. Fazer um algoritmo/programa que leia a matricula e o sal�rio dos funcion�rios de uma empresa 
(m�ximo de 100 funcion�rios). Ap�s a leitura de todos os dados, informe em uma tela limpa os dados 
lidos e o maior e menor sal�rio dos funcion�rios. O maior e menor sal�rio dever�o ser obtidos, cada um, 
por uma fun��o. Sabe-se ainda que n�o existe matr�cula repetida na empresa.
*/
#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int vetor;
    do{
        printf("Quantos funcion�rios tem na empresa?\n");
        scanf("%d",&vetor);
        fflush(stdin);
        if(vetor<1||vetor>100){
        	printf("Valor m�nimo: 1\nValor m�ximo: 100\n");
		}
	}while(vetor<1||vetor>100);
    int i, j, maior=0, menor=0, matricula[vetor];
	double salario[vetor];
    for(i=0;i<vetor;i++){
    	printf("%d� Funcion�rio\n", i+1);
    	printf("Digite a matr�cula: ");
    	scanf("%d",&matricula[i]);
		printf("Digite o sal�rio: R$ ");
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
		printf("%d� Funcion�rio: Sal�rio: R$ %.2lf   Matr�cula %d\n", i+1,salario[i],matricula[i]);
	}
    printf("Menor sal�rio: R$ %.2lf\n", menor);
    printf("Maior sal�rio: R$ %.2lf\n", maior);
    return 0;
    }

