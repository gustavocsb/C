/* Escrever um programa que declare um vetor de reais e leia as notas de 30 alunos.*/
#include<stdio.h>
#include<stdlib.h>
int main (){
	double nota[30];
	int i;
	
	for (i=1;i<=30;i++){
		do{
		    printf ("Digite a nota do aluno %d: ", i);
		    scanf ("%lf", &nota[i]);
		    fflush(stdin);
		    if (nota[i]<0 || nota[i]>10)
		        printf ("Nota invalida, digite uma nota entre 0 a 10\n");
		}while (nota[i]<0 || nota[i]>10);
	}
	system("cls");
	for (i=1;i<=30;i++){
		printf ("Nota do aluno %d: %.1f\n", i, nota[i]);
	}
	
	return 0;
}
