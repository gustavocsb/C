/*
9. Fa�a um algoritmo que leia a idade de at� 100 pessoas e apresente a m�dia entre todas, 
al�m de identificar a mais velha e a posi��o em que ela se encontra no vetor. A idade mais 
velha pode aparecer em mais de uma posi��o.
*/
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int qtd;
    do{
        printf("Quantas pessoas s�o?\n");
        scanf("%d",&qtd);
        fflush(stdin);
        if(qtd<1||qtd>100)
        printf("M�nimo: 1\nM�ximo: 100\n");
    }while(qtd<1||qtd>100);
    int i, idade[qtd], soma=0, media=0, maior=0;
    for(i=0;i<qtd;i++){
    	printf("Informe a idade da %d� pessoa: ", i+1);
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

