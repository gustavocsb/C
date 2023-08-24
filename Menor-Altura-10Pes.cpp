/*Faça um algoritmo que apresenta a menor altura entre 10 pessoas, usando apenas a repetição enquanto.*/
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int i=0, altura=10, menorAltura;
    while (i<10)
	{
    printf("Informe a altura da %dº pessoa: ", i+1);
    scanf("%d", &altura);
    if (i==0)menorAltura=altura;
    if (menorAltura>altura)menorAltura=altura;
    i++;
	}
	printf("A menor altura é: %d", menorAltura);
	
    return 0;
    }

