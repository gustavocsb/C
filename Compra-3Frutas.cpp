/*Elabore um algoritmo que apresenta as compras de frutas efetuadas por usu�rio (quantidade de frutas para cada tipo),
 sendo elas identificadas por meio de um n�mero.
 
1 => ABACAXI
2 => MA�A
3 => PERA

Usando a instru��o faca...enquanto identifique quais as frutas desejadas por seu usu�rio, lembrando que ele pode desejar
somente um tipo de fruta ou mais que um. Deve existir o cuidado na identifica��o correta das frutas, pois o feirante s� 
possui estes tr�s tipos. Caso o usu�rio escolha uma fruta n�o existente deve ser notificado que a fruta n�o est� dispon�vel 
e a solicita��o deve ser feita novamente sobre qual fruta ele deseja.*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int abacaxi=0, maca=0, pera=0, opcao, sair=1;
    
    do{
    	printf("Venda de frutas:            SEU CARRINHO:\n\n");
    	printf("[1]: Abacaxi                 %d Abacaxi(s)\n", abacaxi);
    	printf("[2]: Ma��                    %d Ma��(s)\n", maca);
    	printf("[3]: Pera                    %d Pera(s)\n", pera);
    	printf("[0]: Finalizar compra\n\n");
    	printf("Digite o n�mero de qual fruta quer comprar: ");
    	scanf("%d", &opcao);
    	
    	switch (opcao){
    		case 1:
			    abacaxi+=1;
			    system("cls");
			break;
			case 2:
				maca+=1;
				system("cls");
			break;
			case 3:
				pera+=1;
				system("cls");
			break;
			case 0:
				sair=0;
			break;
			default:
				printf("Digite um n�mero v�lido!\n\n");
				system("pause");
				system("cls");
		}
    }while(sair!=0);
    
    printf("\n\nVoc� comprou %d abacaxi(s), %d ma��(s), %d pera(s).\n", abacaxi, maca, pera);
        
    return 0;
    }

