/* Altere o algoritmo anterior considerando que não se conhece quantos alunos estão na turma. O número de aluno será informado pelo usuário.
algoritmo anterior: Escrever um programa que declare um vetor de reais e leia as notas de 30 alunos. */
#include<stdlib.h>
#include<stdio.h>
int main(){
	int alunos;
	
	printf("Quantos alunos estao na turma?\n");
	scanf("%d", &alunos);
	fflush(stdin);
	
	double nota[alunos];
	int i;
	
	for (i=0;i<alunos;i++){
		do{
			printf("Digite a nota do aluno %d: ", i+1);
			scanf("%lf", &nota[i]);
			fflush(stdin);
			if (nota[i]<0 || nota[i]>10)
			    printf("Nota invalida, insira uma nota entre 0 a 10\n");
		}while (nota[i]<0 || nota[i]>10);
	}
	system("cls");
	i=0;
	for (i=0;i<alunos;i++){
		printf("Nota do aluno %d: %.1lf\n", i+1, nota[i]);
	}
	
	return 0;
}
