/*1. Elabore um programa em C que solicite um valor ao usu�rio e imprima todos os n�meros pares 
do n�mero fornecido at� 2000, em uma janela de execu��o. Caso o valor informado seja maior que 2000, 
apresente no meio de uma tela limpa, somente o valor informado com uma mensagem dizendo que o limite 
de c�lculo foi excedido.*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int num, i;
    
    printf("Digite o n�mero de in�cio: ");
    scanf("%d", &num);
    if(num>2000){
    system("cls");
    printf("Valor inv�lido.");
    }
    for(i=num;i<=2000;i++){
    	if(i%2==0)
    	printf("%d\n", i);
	}
    return 0;
    }

