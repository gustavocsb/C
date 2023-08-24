/*12 – Em uma eleição presidencial existem quatro candidatos. Os votos são informados por código. 
Os dados utilizados para a ação obedecem à seguinte codificação:
• 1, 2, 3, 4 = voto para os respectivos candidatos;
• 5 = voto nulo;
• 6 = voto em branco.
Elabore um algoritmo que calcule e escreva:
• O total de votos para cada candidato e seu percentual sobre o total;
• O total de votos nulos e seu percentual sobre o total;
• O total de votos em branco e seu percentual sobre o total.
Como finalizador do conjunto de votos, tem-se o valor 0.*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int nulo=0, branco=0, cand1=0, cand2=0, cand3=0, cand4=0;
    int opcao, sair=0, aux=0;
    do{
        printf("ELEIÇÃO PRESIDENCIAL\n\n");
        printf("[1] Voto para candidato 1\n");
        printf("[2] Voto para candidato 2\n");
        printf("[3] Voto para candidato 3\n");
        printf("[4] Voto para candidato 4\n");
        printf("[5] Voto nulo\n");
        printf("[6] Voto em branco\n");
        printf("[0] Sair\n");
        scanf("%d", &opcao);
        system("cls");
        switch(opcao){
    	    case 1:
    	    	cand1++;
    	    	aux++;
    	    break;
    	    case 2:
    	    	cand2++;
    	    	aux++;
    	    break;
    	    case 3:
    	    	cand3++;
    	    	aux++;
    	    break;
    	    case 4:
    	    	cand4++;
    	    	aux++;
    	    break;
    	    case 5:
    	    	nulo++;
    	    	aux++;
    	    break;
    	    case 6:
    	    	branco++;
    	    	aux++;
    	    break;
    	    case 0:
    	    	sair=1;
    	    break;
    	    default:
    	    	printf("Digite uma opção válida.\n");
	    }
    }while(sair!=1);
    
    printf("\nTotal de votos: %d\n", aux);
    printf("Total de votos no candidato 1: %d\n", cand1);
    printf("Total de votos no candidato 2: %d\n", cand2);
    printf("Total de votos no candidato 3: %d\n", cand3);
    printf("Total de votos no candidato 4: %d\n", cand4);
    printf("Total de votos em branco: %d\n", branco);
    printf("Total de votos nulos: %d\n\n", nulo);
    
    return 0;
    }

