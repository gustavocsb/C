/*11 – Construa um algoritmo que calcule a média aritmética de um conjunto de números pares 
que forem fornecidos pelo usuário. O valor de finalização será a entrada do número 0. Observe 
que nada impede que o usuário forneça quantos números ímpares quiser, com a ressalva de que eles 
não poderão ser acumulados.*/

#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int soma=0, i, num, aux=0;
    float media;
    printf("Informe qualquer número. [Quando colocar 0 o algoritmo parará]\n");
    do{
    	printf("Número: ");
    	scanf("%d", &num);
    	if((num%2==0) && (num!=0)){
    	soma+=num;
    	aux++;
		}
	}while(num!=0);
	media=soma/aux;
	printf("Média: %.2f\n", media);
    
    return 0;
    }

