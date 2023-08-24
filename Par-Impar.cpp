/*Escrever um algoritmo que determine se um número inteiro qualquer é PAR ou IMPAR.*/
#include<locale.h> //acentos
#include<stdio.h> //printf scanf

int main (){
	setlocale(LC_ALL, "Portuguese");
	int numero;
	printf("Digite o número: ");
	scanf("%d", &numero);
	numero=numero%2;
	if (numero==0)
	    printf("Número par!");
	    else printf("Número ímpar!");
}
