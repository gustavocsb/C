/* Faça um algoritmo que leia dois números calcule o resultado da multiplicação de um pelo outro
 sem utilizar a operação de multiplicação (ou seja, utilizando apenas soma) */
 #include<stdio.h>
 #include<locale.h>
 
 int main(){
 	setlocale(LC_ALL,"Portuguese");
    int num1, num2, i, soma=0;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    for (i=0;i<num2;i++){
    	soma+=num1;
	}
	printf("A multiplicação é: %d", soma);
 	
    return 0;
 }
