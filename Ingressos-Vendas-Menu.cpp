/*
5. Uma companhia de teatro planeja dar uma série de espetáculos. A direção calcula que a R$15,00 
o ingresso, serão vendidos 120 ingressos, e as despesas montarão R$600,00. A uma diminuição de R$3,00 
nos ingressos espera-se que haja um aumento de 26 ingressos vendidos. Fazer um programa que escreva uma 
tabela de valores do lucro esperado em função do preço do ingresso, fazendo-o variar de R$15,00 a R$3,00 
de 3 em 3 reais. Escreva, ainda, o lucro máximo esperado, o preço e o número de ingressos correspondentes.
*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    float ingresso=15;
    int venda=120, opcao;
    do{
    do{
    printf("--------------------------------------------\n");
    printf("Valor do ingresso: R$ %.2f\n", ingresso);
    printf("Ingressos vendidos esperados: %d\n", venda);
    printf("--------------------------------------------\n");
    printf("Ganho líquido máximo esperado: R$ %.2f\n", ingresso*venda);
    printf("Lucro máximo esperado: R$ %.2f\n", (ingresso*venda)-600);
    printf("--------------------------------------------\n\n");
    if(ingresso>3){
    	printf("--------------------------------------------\n");
    	printf("[1] Aumentar preço\n");
    	printf("[2] Diminuir preço\n");
    	printf("[3] Sair\n");
    	printf("--------------------------------------------\n");
	}else {
		printf("--------------------------------------------\n");
		printf("[1] Aumentar preço\n");
		printf("[3] Sair\n");
		printf("--------------------------------------------\n");
	}
	scanf("%d", &opcao);
	system("cls");
    }while(opcao<1||opcao>3);
	switch(opcao){
		case 1:
			ingresso+=3;
			venda-=26;
		break;
		case 2:
			if(ingresso>3){
				ingresso-=3;
				venda+=26;
			}
		break;
	}
    }while(opcao!=3);
    return 0;
    }

