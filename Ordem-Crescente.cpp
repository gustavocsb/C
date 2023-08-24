/* 7. Faça um programa que leia três valores numéricos e os mostre em ordem crescente.*/
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int num[3], i, maior=0;
    for(i=0;i<3;i++){
    	printf("Digite o %dº número: ", i+1);
    	scanf("%d", &num[i]);
    	fflush(stdin);
    	if(num[i]>maior){
    	maior=num[i];
        }
	}
	printf("\nO maior número é: %d", maior);
	
    return 0;
    }

