/*
3. Faça um algoritmo que calcule e escreva o somatório dos valores armazenados numa variável 
composta unidimensional, chamada dados, de até 100 elementos numéricos a serem lidos.
*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int i, dados[100], soma=0;
    for(i=0;i<100;i++){
    	printf("Digite o %dº dado: ", i+1);
    	scanf("%d", &dados[i]);
    	soma+=dados[i];
    	system("cls");
	}
	printf("\nSomatório: %d\n", soma);
    return 0;
    }

