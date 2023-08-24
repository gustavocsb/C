/*
11. Elabore um algoritmo que armazene o c�digo funcional inteiro e respectivo sal�rio real 
de todos os funcion�rios de uma empresa. Ap�s a leitura de todos os dados apresente o maior 
e o menor sal�rio entre todos funcion�rios da empresa, usando um subprograma para encontrar 
o maior e outro para encontrar o menor. Por fim, acione uma outra fun��o para calcular a m�dia 
salarial paga por esta empresa. O maior e menor sal�rio dever�o ser apresentados por um procedimento 
acionado pelo algoritmo principal. A m�dia salarial dever� ser apresentada por um procedimento 
acionado pela fun��o que calcula a m�dia.
*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int codigoFuncional[100], qtd=0, matricula, i=0, sameMatricula;
    double media, salario, menor=0, maior=0, soma=0, salarios[100];
    
    printf("Quantos funcion�rios ser�o armazenados?\n");
    scanf("%d",&qtd);
    fflush(stdin);
    for(i=0;i<100;i++){
    	printf("Funcion�rio n� %d\n", i+1);
    	printf("Matr�cula: ");
    	scanf("%d",&matricula);
    	for(int j=0;j<qtd;j++){
    		printf("Sal�rio: ");
    		scanf("%d",&salario);
    		fflush(stdin);
    		if(!sameMatricula){
    			salarios[qtd]=salario;
    			codigoFuncional[qtd]=matricula;
    			qtd++;
			if(salario>maior) maior=salario;
			if(salario<menor) menor=salario;
			soma+=salario;
		    }else printf("Matr�cula j� existente.\n");
		}
	}
	media=soma/qtd;
	printf("\nMaior sal�rio: R$ %.2lf\n", maior);
	printf("Menor sal�rio: R$ %.2lf\n", menor);
	printf("M�dia salarial: R$ %.2lf\n", media);
    
    return 0;
    }

