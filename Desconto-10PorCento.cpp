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
    
    int produtos;
    
    printf("Informe quantos produtos o mercador possui: ");
    scanf("%d", &produtos);
    
    float preco[produtos];
    int i;
    
    for (i=0;i<produtos;i++){
    	printf("Digite o valor do %dº produto: ", i+1);
    	scanf("%f", &preco[i]);
    	preco[i]+=preco[i]/10;
	}
	printf("Novos preços:\n\n");
	for (i=0;i<produtos;i++){
		printf("%dº Produto: %.2f\n", i+1, preco[i]);
	}
    
    return 0;
    }

