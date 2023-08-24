/*
5. Faça um algoritmo que leia um vetor de até 80 elementos. Após a leitura de todos os dados, 
leia um número e verifique se existem elementos no vetor iguais ao número lido. Se existirem, 
escrever, em uma tela limpa, quantas vezes eles aparecem e quais as posições em que eles estão 
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
        printf("Valor máximo permitido: 80!\nValor mínimo permitido: 1!\n");
    }while(vetor<1||vetor>80);
    system("cls");
    int i, num, elementos[vetor], duplicado=0;
    for(i=0;i<vetor;i++){
    	printf("Digite o valor do %dº elemento: ", i+1);
    	scanf("%d",&elementos[i]);
    	system("cls");
	}
	printf("Número para verificar duplicação no vetor: ");
	scanf("%d",&num);
	for(i=0;i<vetor;i++){
		if(elementos[i]==num){
			duplicado++;
		}
	}
	if(duplicado==0){
		printf("Não há duplicação no vetor.\n");
	}else printf("Esse número foi duplicado %d vezes no vetor.\n", duplicado);
    return 0;
    }

