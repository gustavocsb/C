/* Construa um algoritmo que seja capaz de dar a classifica��o ol�mpica de 3 pa�ses informados.
Para cada pa�s � informado o nome, a quantidade de medalhas de ouro, prata e bronze. Considere
que cada medalha de ouro tem peso 3, cada prata tem peso 2 e cada bronze, peso 1. */

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    char pais1[20], pais2[20], pais3[20];
    int i, ouro[2], prata[2], bronze[2];
    int total1, total2, total3;
    
    
    printf("Digite o nome do 1� pa�s: ");
    fgets(pais1,20,stdin);
    fflush(stdin);
    pais1[strcspn(pais1, "\n")] = '\0';
    printf("Digite o nome do 2� pa�s: ");
    fgets(pais2,20,stdin);
    fflush(stdin);
    pais2[strcspn(pais2, "\n")] = '\0';
    printf("Digite o nome do 3� pa�s: ");
    fgets(pais3,20,stdin);
    fflush(stdin);
    pais3[strcspn(pais3, "\n")] = '\0';
    
    for(i=0;i<3;i++){
    	printf("\nQuantas medalhas de ouro o %d� pa�s ganhou?\n", i+1);
    	scanf("%d", &ouro[i]);
    	printf("Quantas medalhas de prata o %d� pa�s ganhou?\n", i+1);
    	scanf("%d", &prata[i]);
    	printf("Quantas medalhas de bronze o %d� ganhou?\n", i+1);
    	scanf("%d", &bronze[i]);
	}
    total1=ouro[0]*3+prata[0]*2+bronze[0];
    total2=ouro[1]*3+prata[1]*2+bronze[1];
    total3=ouro[2]*3+prata[2]*2+bronze[2];
    
    system("cls");
    printf("\nColoca��es:\n");
    if(total1>total2&&total1>total3){
    	printf("1� Lugar: %s\n", pais1);
    	if(total2>total3){
    		printf("2� Lugar: %s\n", pais2);
		}else printf("2� Lugar: %s\n", pais3);
		if(total3>total2){
			printf("3� Lugar: %s\n", pais2);
		}else printf("3� Lugar: %s\n", pais3);
	}else
	
	if(total2>total1&&total2>total3){
		printf("1� Lugar: %s\n", pais2);
		if(total1>total3){
			printf("2� Lugar: %s\n", pais1);
		}else printf("2� Lugar: %s\n", pais3);
		if(total3>total1){
			printf("3� Lugar: %s\n", pais1);
		}else printf("3� Lugar: %s\n", pais3);
	}else
	
	if(total3>total1&&total3>total2){
		printf("1� Lugar: %s\n", pais3);
		if(total1>total2){
			printf("2� Lugar: %s\n", pais1);
		}else printf("2� Lugar: %s\n", pais2);
		if(total2>total1){
			printf("3� Lugar: %s\n", pais1);
			}else printf("3� Lugar: %s\n", pais2);
	}else
	
    return 0;
    }

