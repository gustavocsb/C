/*Dado três valores, verificar se eles podem constituir os lados de um triângulo
(triângulo é uma figura geométrica onde cada lado é menor do que a soma dos outros dois lados).*/
#include<stdio.h> //printf scanf
#include<locale.h> //uso de acentos
int main(){
	setlocale(LC_ALL, "Portuguese");
	double lado1, lado2, lado3;
	
	printf("Informe o 1º lado do triângulo:\n");
	scanf("%lf", &lado1);
	printf("Informe o 2º lado do triângulo:\n");
	scanf("%lf", &lado2);
	printf("Informe o 3º lado do triângulo:\n");
	scanf("%lf", &lado3);
	if(lado1+lado2>lado3&&lado1+lado3>lado2&&lado2+lado3>lado1)
		printf("Você pode formar um triângulo com essas medidas!\n");
	    else 
		    printf("Você não pode formar um triângulo com essas medidas!\n");
		
	/*lado1+lado2>lado3
	lado1+lado3>lado2
	lado2+lado3>lado1*/
	return 0;
}
