/*1. Elabore um programa em C que solicite um valor ao usuário e imprima todos os números pares 
do número fornecido até 2000, em uma janela de execução. Caso o valor informado seja maior que 2000, 
apresente no meio de uma tela limpa, somente o valor informado com uma mensagem dizendo que o limite 
de cálculo foi excedido.*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int num, i;
    
    printf("Digite o número de início: ");
    scanf("%d", &num);
    if(num>2000){
    system("cls");
    printf("Valor inválido.");
    }
    for(i=num;i<=2000;i++){
    	if(i%2==0)
    	printf("%d\n", i);
	}
    return 0;
    }

