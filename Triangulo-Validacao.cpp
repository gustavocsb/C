/*Dado tr�s valores, verificar se eles podem constituir os lados de um tri�ngulo
(tri�ngulo � uma figura geom�trica onde cada lado � menor do que a soma dos outros dois lados).*/
#include<stdio.h> //printf scanf
#include<locale.h> //uso de acentos
int main(){
	setlocale(LC_ALL, "Portuguese");
	double lado1, lado2, lado3;
	
	printf("Informe o 1� lado do tri�ngulo:\n");
	scanf("%lf", &lado1);
	printf("Informe o 2� lado do tri�ngulo:\n");
	scanf("%lf", &lado2);
	printf("Informe o 3� lado do tri�ngulo:\n");
	scanf("%lf", &lado3);
	if(lado1+lado2>lado3&&lado1+lado3>lado2&&lado2+lado3>lado1)
		printf("Voc� pode formar um tri�ngulo com essas medidas!\n");
	    else 
		    printf("Voc� n�o pode formar um tri�ngulo com essas medidas!\n");
		
	/*lado1+lado2>lado3
	lado1+lado3>lado2
	lado2+lado3>lado1*/
	return 0;
}
