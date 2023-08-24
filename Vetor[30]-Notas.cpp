/*
1. Escrever um programa que declare um vetor de reais e leia as notas de 30 alunos.
*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    float nota[30];
    int i;
    for(i=0;i<30;i++){
    	printf("Digite a nota do %dº aluno: ", i+1);
    	scanf("%f", &nota[i]);
	}
	system("cls");
	printf("\nNotas:\n");
	for(i=0;i<30;i++){
		printf("Aluno %d: %.2f\n", i+1, nota[i]);
	}
    return 0;
    }


