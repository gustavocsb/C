/*
3. Tem-se um conjunto de dados contendo a altura e o sexo (masculino, feminino) de até 10 pessoas.
Fazer um programa que calcule e escreva: a maior e a menor altura do grupo; a média da altura das mulheres;
o número de homens. Usar os três comandos de repetição na solução do problema.
*/
#include<stdio.h>
#include<locale.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    char sexo;
    int homem=0, mulher=0, i;
    float altura, alturaM, menor=0, maior=0, media=0;
    for(i=0;i<10;i++){
    	printf("Sexo da %dº pessoa [M|F]: ", i+1);
    	scanf("%c", &sexo);
    	fflush(stdin);
    	sexo = toupper(sexo);
    	printf("Altura da %dº pessoa: ", i+1);
    	scanf("%f", &altura);
    	fflush(stdin);
    	printf("\n");
    	if(menor>altura)
    	menor=altura;
    	if(maior<altura)
    	maior=altura;
    	if(sexo=='M')
    	homem++;
    	else if(sexo=='F'){
    	mulher++;
    	alturaM+=altura;
        }
	}
	media=alturaM/mulher;
	system("cls");
	printf("\n\nA média da altura das mulheres é: %.2f\n", media);
	printf("Nº de homens: %d\n", homem);
	printf("Menor altura: %.2f\n", menor);
	printf("Maior altura: %.2f\n\n", maior);
    return 0;
    }

