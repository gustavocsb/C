//Fazer um algoritmo que leia o nome e a altura de tr�s pessoas, determine e apresente o nome e a altura da menor delas.
#include<locale.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	struct dados_pessoa
	{
		char nome[40];
		float altura;
	}pessoa[3];
	for (i=0;i<3;i++){
		printf("Nome da %d� pessoa: ",i+1);
		fflush(stdin);
		fgets(pessoa[i].nome,40,stdin);
		printf("Altura da %d� pessoa: ", i+1);
		scanf("%f", &pessoa[i].altura);
		system("cls");
	}
	if (pessoa[0].altura<pessoa[1].altura&&pessoa[0].altura<pessoa[2].altura)
	    printf("A menor pessoa � a 1�:\nNome: %sAltura: %.2f", pessoa[0].nome, pessoa[0].altura);
	    else if (pessoa[1].altura<pessoa[0].altura&&pessoa[1].altura<pessoa[2].altura)
	            printf("A menor pessoa � a 2�:\nNome: %sAltura: %.2f", pessoa[1].nome, pessoa[1].altura);
	            else if (pessoa[2].altura<pessoa[0].altura&&pessoa[2].altura<pessoa[1].altura)
	                    printf("A menor pessoa � a 3�:\nNome: %sAltura: %.2f", pessoa[2].nome, pessoa[2].altura);
	return 0;
}
