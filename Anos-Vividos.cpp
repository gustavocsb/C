/*Voc� tem um desejo incontrol�vel de descobrir quantos dias voc� j� viveu em toda a sua vida,
ent�o fa�a um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual, depois calcule
e escreva o nome e o n�mero de dias, aproximados, j� vividos por essa pessoa. */
#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int dia, mes, ano, anoAtual, anosCalculo, dias;
	char nome[40];
	printf("Insira o ano atual: ");
	scanf("%d", &anoAtual);
	printf("Insira sua data de nascimento:\n");
	printf("Dia: ");
	scanf("%d", &dia);
	printf("M�s: ");
	scanf("%d", &mes);
	printf("Ano: ");
	scanf("%d", &ano);
	printf("Insira seu nome: ");
	fflush(stdin);
	fgets(nome,40,stdin);
	nome[strcspn(nome, "\n")] = '\0';
	system("cls");
	anosCalculo=anoAtual-ano;
	dias=anosCalculo*365;
	printf("\n\nOl� %s voc� viveu aproximadamente %d dias!\n\n", nome, dias);
}
