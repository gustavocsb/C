/*10. Fazer um algoritmo que leia n�meros inteiros at� que a quantidade lida seja 100 ou at� que seja lido
um n�mero negativo e mostrar a quantidade total de n�meros lidos.*/

#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int i=0, num;
    
    do{
    	printf("Digite o n�mero inteiro: ");
    	scanf("%d", &num);
    	i++;
	}while(num>0 && i<100);
	
	printf("Total de n�meros lidos: %d", i);
	
    return 0;
    }

