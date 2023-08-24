/*Escreva um algoritmo que receba o nome do aluno e repita, por 5000 vezes, a frase: Eu, fulano, vou passar em algoritmo com média 10!*/

#include<stdio.h>
#include<string.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50];
	int i;
	
	printf ("Digite o seu nome: ");
	fgets (nome, 50, stdin);
	nome[strcspn(nome, "\n")] = '\0';
	for (i=1; i<=5000; i++)
	{
		printf ("Eu, %s, vou passar em algoritmo com média 10! \n", nome);
	}

	return 0;
}
