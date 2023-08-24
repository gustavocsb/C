/*
11. Elabore um algoritmo que armazene o código funcional inteiro e respectivo salário real 
de todos os funcionários de uma empresa. Após a leitura de todos os dados apresente o maior 
e o menor salário entre todos funcionários da empresa, usando um subprograma para encontrar 
o maior e outro para encontrar o menor. Por fim, acione uma outra função para calcular a média 
salarial paga por esta empresa. O maior e menor salário deverão ser apresentados por um procedimento 
acionado pelo algoritmo principal. A média salarial deverá ser apresentada por um procedimento 
acionado pela função que calcula a média.
*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int codigoFuncional[100], qtd=0, matricula, i=0, sameMatricula;
    double media, salario, menor=0, maior=0, soma=0, salarios[100];
    
    printf("Quantos funcionários serão armazenados?\n");
    scanf("%d",&qtd);
    fflush(stdin);
    for(i=0;i<100;i++){
    	printf("Funcionário nº %d\n", i+1);
    	printf("Matrícula: ");
    	scanf("%d",&matricula);
    	for(int j=0;j<qtd;j++){
    		printf("Salário: ");
    		scanf("%d",&salario);
    		fflush(stdin);
    		if(!sameMatricula){
    			salarios[qtd]=salario;
    			codigoFuncional[qtd]=matricula;
    			qtd++;
			if(salario>maior) maior=salario;
			if(salario<menor) menor=salario;
			soma+=salario;
		    }else printf("Matrícula já existente.\n");
		}
	}
	media=soma/qtd;
	printf("\nMaior salário: R$ %.2lf\n", maior);
	printf("Menor salário: R$ %.2lf\n", menor);
	printf("Média salarial: R$ %.2lf\n", media);
    
    return 0;
    }

