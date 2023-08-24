/* Alterar o exercício do triângulo (exercício 9), de forma que o algoritmo apresente no caso de triângulo
o seu tipo: equilátero (todos os lados são iguais), isósceles (dois lados iguais) ou um outro triângulo qualquer
(escaleno). Apresente o algoritmo, fazendo o teste do algoritmo (chinesinho) ao lado. */
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	double lado1, lado2, lado3;
	int continuar=0;
	
	do{
	printf("Informe o 1º lado do triângulo:\n");
	scanf("%lf", &lado1);
	printf("Informe o 2º lado do triângulo:\n");
	scanf("%lf", &lado2);
	printf("Informe o 3º lado do triângulo:\n");
	scanf("%lf", &lado3);
	if(lado1+lado2>lado3&&lado1+lado3>lado2&&lado2+lado3>lado1){
		printf("Você pode formar um triângulo com essas medidas!\n");
		continuar=1;
	}
	    else{
		    printf("Você não pode formar um triângulo com essas medidas!\n");
		    system("pause");
		    system("cls");
		}
	}while(continuar!=1);
		    
	if(lado1==lado2&&lado1==lado3)
	    printf("Seu triângulo é equilátero!");
	    else if (lado1==lado2&&lado1!=lado3)
	        printf("Seu triângulo é isósceles!");
	        else if (lado1!=lado2&&lado1!=lado3)
	            printf("Seu triângulo é escaleno!");
	
	
	
	
	return 0;
}
