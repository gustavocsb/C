/*
3. Fa�a um algoritmo que calcule e escreva o somat�rio dos valores armazenados numa vari�vel 
composta unidimensional, chamada dados, de at� 100 elementos num�ricos a serem lidos.
*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int i, dados[100], soma=0;
    for(i=0;i<100;i++){
    	printf("Digite o %d� dado: ", i+1);
    	scanf("%d", &dados[i]);
    	soma+=dados[i];
    	system("cls");
	}
	printf("\nSomat�rio: %d\n", soma);
    return 0;
    }

