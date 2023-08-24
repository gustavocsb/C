/*Voc� foi escolhido para fazer um algoritmo para informar o vencedor de um concurso de piadas. Estar�o
concorrendo ao pr�mio 3 finalistas, cujos nomes ser�o fornecidos. A quantidade de ju�zes ser� definida 
no dia da apura��o e para cada juiz o algoritmo solicitar� a nota para cada candidato. A nota poder� variar
de 0 (zero) a 100(cem). O algoritmo dever� apresentar o nome e o total de pontos de cada concorrente e o 
nome e total de pontos do vencedor ap�s o voto de todos os ju�zes. */

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int i, juizes;
    char fin1[40], fin2[40], fin3[40];
    
    printf("Informe quantos ju�zes ir�o julgar a final: ");
    scanf("%d", &juizes);
    fflush(stdin);
    printf("Digite o nome do 1� finalista: ");
    fgets(fin1,40,stdin);
    fflush(stdin);
    printf("Digite o nome do 2� finalista: ");
    fgets(fin2,40,stdin);
    fflush(stdin);
    printf("Digite o nome do 3� finalista: ");
    fgets(fin3,40,stdin);
    fflush(stdin);
    
    float notaFin1[juizes], notaFin2[juizes], notaFin3[juizes];
    float maxFin1, maxFin2, maxFin3;
    printf("\n\n");
    for(i=0;i<juizes;i++){
    	printf("%d� Ju�z\n\n", i+1);
    	do{
    	    printf("Digite a nota do 1� finalista: ");
    	    scanf("%f", &notaFin1[i]);
    	    if(notaFin1[i]<0||notaFin1[i]>100){
    		    printf("Nota inv�lida. Digite uma nota entre 0 a 100.\n");
    		}
    		maxFin1+=notaFin1[i];
    	}while(notaFin1[i]<0||notaFin1[i]>100);
    	
    	
    	do{
		    printf("Digite a nota do 2� finalista: ");
    	    scanf("%f", &notaFin2[i]);
    	    if(notaFin2[i]<0||notaFin2[i]>100){
    		    printf("Nota inv�lida. Digite uma nota entre 0 a 100.\n");
    		}
    		maxFin2+=notaFin2[i];
    	}while(notaFin2[i]<0||notaFin2[i]>100);
    	
    	do{
		    printf("Digite a nota do 3� finalista: ");
    	    scanf("%f", &notaFin3[i]);
    	    if(notaFin3[i]<0||notaFin3[i]>100){
    		    printf("Nota inv�lida. Digite uma nota entre 0 a 100.\n");
    		}
    		maxFin3+=notaFin3[i];
    	}while(notaFin3[i]<0||notaFin3[i]>100);	
	}
	system("cls");
	printf("\n\n1� Finalista:\n");
	printf("Nome: %s", fin1);
	printf("Pontua��o total: %.2f\n\n", maxFin1);
	printf("2� Finalista:\n");
	printf("Nome: %s", fin2);
	printf("Pontua��o total: %.2f\n\n", maxFin2);
	printf("3� Finalista:\n");
	printf("Nome: %s", fin3);
	printf("Pontua��o total: %.2f\n\n", maxFin3);
	
	if(maxFin1>maxFin2){
		printf("O vencedor � o 1� Finalista!\n");
	}else 
	if(maxFin2>maxFin3){
		printf("O vencedor � o 2� Finalista!\n");
	}else
	printf("O vencedor � o 3� Finalista!\n");
    
    return 0;
    }

