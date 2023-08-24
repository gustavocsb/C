/*Um mercador quer fazer um aumento em todos os seus produtos de 10%. Faça diferentes algoritmos 
(um para cada estrutura de repetição) que leia a identificação e o preço de cada produto e calcule
e escreva a identificação e o novo preço após o aumento.
Considere as seguintes situações:

a) o mercador informa o número de produtos que possui antes de entrar com o preço dos produtos
b) o mercador informa produto a produto e você deve perguntar se tem mais algum produto a ser calculado o aumento
c) o preço do último produto fornecido pelo mercador é -1 */

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int opcao, produtos, sair=0, i;
    
    do{
    	printf("QUANTIA DE PRODUTO(s): %d\n\n", produtos);
    	printf("[1] Adicionar +1 produto\n");
    	printf("[0] Finalizar os produtos\n");
    	scanf("%d", &opcao);
    	switch(opcao){
    		case 1:
    			produtos+=1;
    			system("cls");
    		break;
    		case 0:
    			sair=1;
    		break;
    		default:
    			printf("Opção inválida.\n");
    			system("pause");
    			system("cls");
		}
	}while(sair!=1);
	
	float preco[produtos];
	
	for (i=0;i<produtos;i++){
		printf("Digite o valor do %dº produto: ", i+1);
		scanf("%f", &preco[i]);
		preco[i]+=preco[i]/10;
	}
	printf("\n\nNovos preços:\n");
	for (i=0;i<produtos;i++){
		printf("%dº Produto: R$ %.2f\n", i+1, preco[i]);
	}
	system("pause");
    
    return 0;
    }

