/*2. Desenvolva um programa em C que leia tr�s valores num�ricos e apresente o maior valor informado no meio de uma janela limpa.*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    
    float num1, num2, num3;
    printf("Digite o n�mero 1: ");
    scanf("%f", &num1);
    printf("Digite o n�mero 2: ");
    scanf("%f", &num2);
    printf("Digite o n�mero 3: ");
    scanf("%f", &num3);
    system("cls");
    
    if(num1>num2 && num1>num3)
    printf("\nMaior n�mero: %.1f\n", num1);
    else if(num2>num1 && num2>num3)
    printf("\nMaior n�mero: %.1f\n", num2);
    else if(num3>num1 && num3>num2)
    printf("\nMaior n�mero: %.1f\n", num3);
    
    return 0;
    }

