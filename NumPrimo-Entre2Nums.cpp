/*Elabore um algoritmo que imprima todos os n�meros primos existentes entre N1 e N2, em que N1 e N2 s�o n�meros naturais fornecidos pelo usu�rio.*/
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int num1, num2, tempNum, i;

    printf("Insira o 1� n�mero: ");
    scanf("%d", &num1);
	printf("Insira o 2� n�mero: ");
	scanf("%d", &num2);
	if(num1>num2){
		tempNum=num1;
		num1=num2;
		num2=tempNum;
	}
	
	for(i=num1;i<=num2;i++){
		if((i%2!=0) && (i%3!=0) && (i%5!=0) && (i%7!=0) && (i%11!=0) || i==1 || i==2 || i==5 || i==7 || i==11)
		printf("%d � n�mero primo.\n", i);
	}
	
    return 0;
    }

