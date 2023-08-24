/* 7 – Construa um algoritmo que leia um conjunto de dados contendo altura e sexo (‘M’ para masculino e ‘F’ para feminino)
de 50 pessoas e, depois, calcule e escreva:
. A maior e a menor altura do grupo;
. A média de altura das mulheres; */

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int masc, fem;
    
    printf("Quantos são homens?\n");
    scanf("%d", &masc);
    fem=50-masc;
    
    float alturaM[masc], alturaF[fem], somaF=0, mediaF=0, menorM=0, maiorM=0, menorF=0, maiorF=0;
    int i;
    
    for (i=0;i<masc;i++){
    	printf("Digite a altura do %dº homem: ", i+1);
    	scanf("%f", &alturaM[i]);
    	fflush(stdin);
    	if(maiorM<alturaM[i])
    	maiorM=alturaM[i];
    	if(menorM>alturaM[i])
    	menorM=alturaM[i];
    	system("cls");
	}
	for (i=0;i<fem;i++){
		printf("Digite a altura da %dº mulher: ", i+1);
		scanf("%f", &alturaF[i]);
		fflush(stdin);
		if(maiorF<alturaF[i])
    	maiorF=alturaF[i];
    	if(menorF>alturaF[i])
    	menorF=alturaF[i];
		system("cls");
		somaF+=alturaF[i];
	}
	mediaF=somaF/fem;
	system("cls");
	printf("Média de altura das mulheres é: %.2f\n", mediaF);
	if(maiorM>maiorF)
	    printf("Maior altura é masculina: %.2f\n", maiorM);
	if(maiorF>maiorM)
	    printf("Maior altura é feminina: %.2f\n", maiorF);
	if(menorM<menorF)
		printf("Menor altura é masculina: %.2f\n", menorM);
	if(menorF<menorM)
	    printf("Menor altura é feminina: %.2f\n", menorF);
	
    return 0;
    }

