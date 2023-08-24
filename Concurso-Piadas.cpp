/*Você foi escolhido para fazer um algoritmo para informar o vencedor de um concurso de piadas. Estarão
concorrendo ao prêmio 3 finalistas, cujos nomes serão fornecidos. A quantidade de juízes será definida 
no dia da apuração e para cada juiz o algoritmo solicitará a nota para cada candidato. A nota poderá variar
de 0 (zero) a 100(cem). O algoritmo deverá apresentar o nome e o total de pontos de cada concorrente e o 
nome e total de pontos do vencedor após o voto de todos os juízes. */

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int i, juizes;
    char fin1[40], fin2[40], fin3[40];
    
    printf("Informe quantos juízes irão julgar a final: ");
    scanf("%d", &juizes);
    fflush(stdin);
    printf("Digite o nome do 1º finalista: ");
    fgets(fin1,40,stdin);
    fflush(stdin);
    printf("Digite o nome do 2º finalista: ");
    fgets(fin2,40,stdin);
    fflush(stdin);
    printf("Digite o nome do 3º finalista: ");
    fgets(fin3,40,stdin);
    fflush(stdin);
    
    float notaFin1[juizes], notaFin2[juizes], notaFin3[juizes];
    float maxFin1, maxFin2, maxFin3;
    printf("\n\n");
    for(i=0;i<juizes;i++){
    	printf("%dº Juíz\n\n", i+1);
    	do{
    	    printf("Digite a nota do 1º finalista: ");
    	    scanf("%f", &notaFin1[i]);
    	    if(notaFin1[i]<0||notaFin1[i]>100){
    		    printf("Nota inválida. Digite uma nota entre 0 a 100.\n");
    		}
    		maxFin1+=notaFin1[i];
    	}while(notaFin1[i]<0||notaFin1[i]>100);
    	
    	
    	do{
		    printf("Digite a nota do 2º finalista: ");
    	    scanf("%f", &notaFin2[i]);
    	    if(notaFin2[i]<0||notaFin2[i]>100){
    		    printf("Nota inválida. Digite uma nota entre 0 a 100.\n");
    		}
    		maxFin2+=notaFin2[i];
    	}while(notaFin2[i]<0||notaFin2[i]>100);
    	
    	do{
		    printf("Digite a nota do 3º finalista: ");
    	    scanf("%f", &notaFin3[i]);
    	    if(notaFin3[i]<0||notaFin3[i]>100){
    		    printf("Nota inválida. Digite uma nota entre 0 a 100.\n");
    		}
    		maxFin3+=notaFin3[i];
    	}while(notaFin3[i]<0||notaFin3[i]>100);	
	}
	system("cls");
	printf("\n\n1º Finalista:\n");
	printf("Nome: %s", fin1);
	printf("Pontuação total: %.2f\n\n", maxFin1);
	printf("2º Finalista:\n");
	printf("Nome: %s", fin2);
	printf("Pontuação total: %.2f\n\n", maxFin2);
	printf("3º Finalista:\n");
	printf("Nome: %s", fin3);
	printf("Pontuação total: %.2f\n\n", maxFin3);
	
	if(maxFin1>maxFin2){
		printf("O vencedor é o 1º Finalista!\n");
	}else 
	if(maxFin2>maxFin3){
		printf("O vencedor é o 2º Finalista!\n");
	}else
	printf("O vencedor é o 3º Finalista!\n");
    
    return 0;
    }

