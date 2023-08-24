// Ler dois valores numéricos e apresentar a diferença do maior valor pelo menor.
#include<stdio.h> //printf scanf
#include<locale.h> //acentos

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero1, numero2, resultado;
	
	printf("Digite o 1º número: ");
	scanf("%d", &numero1);
	printf("Digite o 2º número: ");
	scanf("%d", &numero2);
	if (numero1>numero2){
		resultado=numero1-numero2;
		printf("Diferença: %d", resultado);
	} else if (numero2>numero1){
		resultado=numero2-numero1;
		printf("Diferença: %d", resultado);
	}
	     
	return 0;
}
