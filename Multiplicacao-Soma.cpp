/* Fa�a um algoritmo que leia dois n�meros calcule o resultado da multiplica��o de um pelo outro
 sem utilizar a opera��o de multiplica��o (ou seja, utilizando apenas soma) */
 #include<stdio.h>
 #include<locale.h>
 
 int main(){
 	setlocale(LC_ALL,"Portuguese");
    int num1, num2, i, soma=0;
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);
    for (i=0;i<num2;i++){
    	soma+=num1;
	}
	printf("A multiplica��o �: %d", soma);
 	
    return 0;
 }
