/*10. Fazer um algoritmo que leia números inteiros até que a quantidade lida seja 100 ou até que seja lido
um número negativo e mostrar a quantidade total de números lidos.*/

#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int i=0, num;
    
    do{
    	printf("Digite o número inteiro: ");
    	scanf("%d", &num);
    	i++;
	}while(num>0 && i<100);
	
	printf("Total de números lidos: %d", i);
	
    return 0;
    }

