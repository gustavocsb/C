/*
9. Faça um algoritmo que leia a idade de até 100 pessoas e apresente a média entre todas, 
além de identificar a mais velha e a posição em que ela se encontra no vetor. A idade mais 
velha pode aparecer em mais de uma posição.
*/
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int qtd;
    do{
        printf("Quantas pessoas são?\n");
        scanf("%d",&qtd);
        fflush(stdin);
        if(qtd<1||qtd>100)
        printf("Mínimo: 1\nMáximo: 100\n");
    }while(qtd<1||qtd>100);
    int i, idade[qtd], soma=0, media=0, maior=0;
    for(i=0;i<qtd;i++){
    	printf("Informe a idade da %dº pessoa: ", i+1);
    	scanf("%d",&idade[i]);
    	fflush(stdin);
    	soma+=idade[i];
    	if(maior<idade[i])
    	maior=idade[i];
	}
	media=soma/qtd;
	printf("\nPessoa mais velha tem: %d anos",maior);
    
    return 0;
    }

