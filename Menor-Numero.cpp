/*Fa�a um algoritmo em portugu�s estruturado que leia tr�s valores num�ricos e encontre qual o menor deles,
mostrando-o no final. Fa�a o chinesinho ao lado do seu algoritmo.*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float numero1, numero2, numero3;
	printf("Informe o 1� n�mero: ");
	scanf("%f", &numero1);
	printf("Informe o 2� n�mero: ");
	scanf("%f", &numero2);
	printf("Informe o 3� n�mero: ");
	scanf("%f", &numero3);
	if (numero1<numero2||numero1<numero2)
	    printf("O menor n�mero � o 1�: %.1f\n", numero1);
	    else if (numero2<numero1||numero2<numero3)
	            printf("O menor n�mero � o 2�: %.1f\n", numero2);
	            else if (numero3<numero1||numero3<numero2)
	                    printf("O menor n�mero � o 3�: %.1f\n", numero3);
	
	return 0;
}
