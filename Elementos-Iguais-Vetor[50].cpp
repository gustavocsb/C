/*
5. Fa�a um algoritmo que leia um vetor de at� 80 elementos. Ap�s a leitura de todos os dados, 
leia um n�mero e verifique se existem elementos no vetor iguais ao n�mero lido. Se existirem, 
escrever, em uma tela limpa, quantas vezes eles aparecem e quais as posi��es em que eles est�o 
armazenados no vetor.
*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int vetor;
    do{
        printf("Digite o valor do vetor: ");
        scanf("%d",&vetor);
        fflush(stdin);
        if(vetor<1||vetor>80)
        printf("Valor m�ximo permitido: 80!\nValor m�nimo permitido: 1!\n");
    }while(vetor<1||vetor>80);
    system("cls");
    int i, num, elementos[vetor], duplicado=0;
    for(i=0;i<vetor;i++){
    	printf("Digite o valor do %d� elemento: ", i+1);
    	scanf("%d",&elementos[i]);
    	system("cls");
	}
	printf("N�mero para verificar duplica��o no vetor: ");
	scanf("%d",&num);
	for(i=0;i<vetor;i++){
		if(elementos[i]==num){
			duplicado++;
		}
	}
	if(duplicado==0){
		printf("N�o h� duplica��o no vetor.\n");
	}else printf("Esse n�mero foi duplicado %d vezes no vetor.\n", duplicado);
    return 0;
    }

