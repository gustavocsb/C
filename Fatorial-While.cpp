/*
2. O fatorial de um valor inteiro, consiste no produto de todos os inteiros entre um e o valor fatorial.
O fatorial de 5 é 1*2*3*4*5 = 120. Fazer um programa para desenvolver este cálculo (fatorial) usando o while.
*/
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int num, fatorial=1;
    printf("Digite o número: ");
    scanf("%d", &num);
    while(num>0){
    	fatorial=fatorial*num;
    	num--;
	}
	printf("Fatorial: %d\n", fatorial);
    return 0;
    }

