/*Um mercador quer fazer um aumento em todos os seus produtos de 10%. Fa�a diferentes algoritmos 
(um para cada estrutura de repeti��o) que leia a identifica��o e o pre�o de cada produto e calcule
e escreva a identifica��o e o novo pre�o ap�s o aumento.
Considere as seguintes situa��es:

a) o mercador informa o n�mero de produtos que possui antes de entrar com o pre�o dos produtos
b) o mercador informa produto a produto e voc� deve perguntar se tem mais algum produto a ser calculado o aumento
c) o pre�o do �ltimo produto fornecido pelo mercador � -1 */

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
    			printf("Op��o inv�lida.\n");
    			system("pause");
    			system("cls");
		}
	}while(sair!=1);
	
	float preco[produtos];
	
	for (i=0;i<produtos;i++){
		printf("Digite o valor do %d� produto: ", i+1);
		scanf("%f", &preco[i]);
		preco[i]+=preco[i]/10;
	}
	printf("\n\nNovos pre�os:\n");
	for (i=0;i<produtos;i++){
		printf("%d� Produto: R$ %.2f\n", i+1, preco[i]);
	}
	system("pause");
    
    return 0;
    }

