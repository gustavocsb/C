/* 7 � Construa um algoritmo que leia um conjunto de dados contendo altura e sexo (�M� para masculino e �F� para feminino)
de 50 pessoas e, depois, calcule e escreva:
. A maior e a menor altura do grupo;
. A m�dia de altura das mulheres; */

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int masc, fem;
    
    printf("Quantos s�o homens?\n");
    scanf("%d", &masc);
    fem=50-masc;
    
    float alturaM[masc], alturaF[fem], somaF=0, mediaF=0, menorM=0, maiorM=0, menorF=0, maiorF=0;
    int i;
    
    for (i=0;i<masc;i++){
    	printf("Digite a altura do %d� homem: ", i+1);
    	scanf("%f", &alturaM[i]);
    	fflush(stdin);
    	if(maiorM<alturaM[i])
    	maiorM=alturaM[i];
    	if(menorM>alturaM[i])
    	menorM=alturaM[i];
    	system("cls");
	}
	for (i=0;i<fem;i++){
		printf("Digite a altura da %d� mulher: ", i+1);
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
	printf("M�dia de altura das mulheres �: %.2f\n", mediaF);
	if(maiorM>maiorF)
	    printf("Maior altura � masculina: %.2f\n", maiorM);
	if(maiorF>maiorM)
	    printf("Maior altura � feminina: %.2f\n", maiorF);
	if(menorM<menorF)
		printf("Menor altura � masculina: %.2f\n", menorM);
	if(menorF<menorM)
	    printf("Menor altura � feminina: %.2f\n", menorF);
	
    return 0;
    }

