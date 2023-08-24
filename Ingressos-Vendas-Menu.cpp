/*
5. Uma companhia de teatro planeja dar uma s�rie de espet�culos. A dire��o calcula que a R$15,00 
o ingresso, ser�o vendidos 120 ingressos, e as despesas montar�o R$600,00. A uma diminui��o de R$3,00 
nos ingressos espera-se que haja um aumento de 26 ingressos vendidos. Fazer um programa que escreva uma 
tabela de valores do lucro esperado em fun��o do pre�o do ingresso, fazendo-o variar de R$15,00 a R$3,00 
de 3 em 3 reais. Escreva, ainda, o lucro m�ximo esperado, o pre�o e o n�mero de ingressos correspondentes.
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
    printf("Ganho l�quido m�ximo esperado: R$ %.2f\n", ingresso*venda);
    printf("Lucro m�ximo esperado: R$ %.2f\n", (ingresso*venda)-600);
    printf("--------------------------------------------\n\n");
    if(ingresso>3){
    	printf("--------------------------------------------\n");
    	printf("[1] Aumentar pre�o\n");
    	printf("[2] Diminuir pre�o\n");
    	printf("[3] Sair\n");
    	printf("--------------------------------------------\n");
	}else {
		printf("--------------------------------------------\n");
		printf("[1] Aumentar pre�o\n");
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

