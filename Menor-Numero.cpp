/*Faça um algoritmo em português estruturado que leia três valores numéricos e encontre qual o menor deles,
mostrando-o no final. Faça o chinesinho ao lado do seu algoritmo.*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float numero1, numero2, numero3;
	printf("Informe o 1º número: ");
	scanf("%f", &numero1);
	printf("Informe o 2º número: ");
	scanf("%f", &numero2);
	printf("Informe o 3º número: ");
	scanf("%f", &numero3);
	if (numero1<numero2||numero1<numero2)
	    printf("O menor número é o 1º: %.1f\n", numero1);
	    else if (numero2<numero1||numero2<numero3)
	            printf("O menor número é o 2º: %.1f\n", numero2);
	            else if (numero3<numero1||numero3<numero2)
	                    printf("O menor número é o 3º: %.1f\n", numero3);
	
	return 0;
}
