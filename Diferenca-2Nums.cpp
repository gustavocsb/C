// Ler dois valores num�ricos e apresentar a diferen�a do maior valor pelo menor.
#include<stdio.h> //printf scanf
#include<locale.h> //acentos

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero1, numero2, resultado;
	
	printf("Digite o 1� n�mero: ");
	scanf("%d", &numero1);
	printf("Digite o 2� n�mero: ");
	scanf("%d", &numero2);
	if (numero1>numero2){
		resultado=numero1-numero2;
		printf("Diferen�a: %d", resultado);
	} else if (numero2>numero1){
		resultado=numero2-numero1;
		printf("Diferen�a: %d", resultado);
	}
	     
	return 0;
}
