/*11 � Construa um algoritmo que calcule a m�dia aritm�tica de um conjunto de n�meros pares 
que forem fornecidos pelo usu�rio. O valor de finaliza��o ser� a entrada do n�mero 0. Observe 
que nada impede que o usu�rio forne�a quantos n�meros �mpares quiser, com a ressalva de que eles 
n�o poder�o ser acumulados.*/

#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int soma=0, i, num, aux=0;
    float media;
    printf("Informe qualquer n�mero. [Quando colocar 0 o algoritmo parar�]\n");
    do{
    	printf("N�mero: ");
    	scanf("%d", &num);
    	if((num%2==0) && (num!=0)){
    	soma+=num;
    	aux++;
		}
	}while(num!=0);
	media=soma/aux;
	printf("M�dia: %.2f\n", media);
    
    return 0;
    }

