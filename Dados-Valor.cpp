/*Escreva um algoritmo que imprima todas as possibilidades de que o lançamento de dois dados tenhamos o valor 7 como resultado da soma dos valores de cada dado.*/
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int dado1, dado2, soma;
    for(dado1=0;dado1<6;dado1++){
    	for(dado2=0;dado2<6;dado2++){
    		if(dado1+1+dado2+1==7){
    			soma=dado1+1+dado2+1;
    			printf("Dado 1: %d + Dado 2: %d = %d\n", dado1+1, dado2+1, soma);
			}
		}
	}
    return 0;
    }

