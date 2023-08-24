/*Faça um algoritmo que calcule e escreva o somatório dos valores armazenados numa variável 
composta unidimensional, chamada dados, de até 100 elementos numéricos a serem lidos. */
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int quantiaDados, somaDados=0;
	
	do{
		printf("Qual a quantia de dados?\n");
		scanf("%d", quantiaDados);
		fflush(stdin);
		if (quantiaDados<0 || quantiaDados>100)
		    printf("Insira um valor entre 0 a 100");
	}while (quantiaDados<0 || quantiaDados>100);
	
	int dados[quantiaDados], i;
	
	for (i=0;i<quantiaDados;i++){
		printf("Qual o valor do dado %d?\n", i+1);
		scanf("%d", &dados[i]);
		fflush(stdin);
		somaDados+=dados[i];
	}
	printf("A soma de %d dados é: %d", quantiaDados, somaDados);

	return 0;
}
