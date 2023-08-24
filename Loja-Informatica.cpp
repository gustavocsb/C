/*4. Uma loja de móveis de informática está necessitando de um sistema que identifique quais 
móveis de informática estão sendo solicitados pelos seus clientes. Os móveis disponibilizados por 
esta empresa são: 1-cadeira, 2-mesa de computador, 3-estante de livros, 4-mesa de impressora e 5-estante 
de CD. Quando se tratar de um móvel que não exista na empresa informe ao cliente que ainda não está disponível.*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int cadeira=0, mesaComp=0, estanteLivro=0, mesaImpres=0, estanteCD=0, sair=0;
    int opcao;
    
    do{
    printf("\nLOJA DE MOVEIS DE INFORMÁTICA\n");
    printf("[1] Cadeira\n");
    printf("[2] Mesa de Computador\n");
    printf("[3] Estante de Livros\n");
    printf("[4] Mesa de Impressora\n");
    printf("[5] Estante de CD\n");
    printf("[0] Finalizar\n");
    scanf("%d", &opcao);
    system("cls");
    switch(opcao){
    	case 1:
    		cadeira++;
    	break;
    	case 2:
    		mesaComp++;
    	break;
    	case 3:
    		estanteLivro++;
    	break;
    	case 4:
    		mesaImpres++;
    	break;
    	case 5:
    		estanteCD++;
    	break;
    	case 0:
    		sair=1;
    	break;
    	default:
    		printf("Opção inválida\n");
	}
    }while(sair!=1);
    system("cls");
    printf("\nPRODUTOS REQUISITADOS\n\n");
    printf("Quantia de cadeiras: %d\n", cadeira);
    printf("Quantia de mesas de computadores: %d\n", mesaComp);
    printf("Quantia de estantes de livros: %d\n", estanteLivro);
    printf("Quantia de mesas de impressoras: %d\n", mesaImpres);
    printf("Quantia de estantes de CD: %d\n", estanteCD);
    return 0;
    }

