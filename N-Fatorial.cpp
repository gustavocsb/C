/*Elabore um algoritmo para calcular N! (fatorial de N) sendo que o valor inteiro de N � fornecido
pelo usu�rio. Sabe-se que: N! = 1x2x...x N-1 x N e 0! = 1. Use o enquanto...fa�a.*/
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int num, fatorial=1, i=0;
    printf("Digite o n�mero: ");
    scanf("%d", &num);
    while(i<num){
    	fatorial=fatorial*(num-i);
    	i++;
	}
	printf("O fatorial �: %d", fatorial);
	
    return 0;
    }

