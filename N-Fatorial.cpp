/*Elabore um algoritmo para calcular N! (fatorial de N) sendo que o valor inteiro de N é fornecido
pelo usuário. Sabe-se que: N! = 1x2x...x N-1 x N e 0! = 1. Use o enquanto...faça.*/
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int num, fatorial=1, i=0;
    printf("Digite o número: ");
    scanf("%d", &num);
    while(i<num){
    	fatorial=fatorial*(num-i);
    	i++;
	}
	printf("O fatorial é: %d", fatorial);
	
    return 0;
    }

