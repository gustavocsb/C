/*Escrever um algoritmo que determine se um n�mero inteiro qualquer � PAR ou IMPAR.*/
#include<locale.h> //acentos
#include<stdio.h> //printf scanf

int main (){
	setlocale(LC_ALL, "Portuguese");
	int numero;
	printf("Digite o n�mero: ");
	scanf("%d", &numero);
	numero=numero%2;
	if (numero==0)
	    printf("N�mero par!");
	    else printf("N�mero �mpar!");
}
