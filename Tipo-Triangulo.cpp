/* Alterar o exerc�cio do tri�ngulo (exerc�cio 9), de forma que o algoritmo apresente no caso de tri�ngulo
o seu tipo: equil�tero (todos os lados s�o iguais), is�sceles (dois lados iguais) ou um outro tri�ngulo qualquer
(escaleno). Apresente o algoritmo, fazendo o teste do algoritmo (chinesinho) ao lado. */
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	double lado1, lado2, lado3;
	int continuar=0;
	
	do{
	printf("Informe o 1� lado do tri�ngulo:\n");
	scanf("%lf", &lado1);
	printf("Informe o 2� lado do tri�ngulo:\n");
	scanf("%lf", &lado2);
	printf("Informe o 3� lado do tri�ngulo:\n");
	scanf("%lf", &lado3);
	if(lado1+lado2>lado3&&lado1+lado3>lado2&&lado2+lado3>lado1){
		printf("Voc� pode formar um tri�ngulo com essas medidas!\n");
		continuar=1;
	}
	    else{
		    printf("Voc� n�o pode formar um tri�ngulo com essas medidas!\n");
		    system("pause");
		    system("cls");
		}
	}while(continuar!=1);
		    
	if(lado1==lado2&&lado1==lado3)
	    printf("Seu tri�ngulo � equil�tero!");
	    else if (lado1==lado2&&lado1!=lado3)
	        printf("Seu tri�ngulo � is�sceles!");
	        else if (lado1!=lado2&&lado1!=lado3)
	            printf("Seu tri�ngulo � escaleno!");
	
	
	
	
	return 0;
}
