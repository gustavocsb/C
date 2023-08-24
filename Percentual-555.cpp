/*1. Elabore um programa que solicite ao usuário um valor percentual a ser calculado. Este 
cálculo deverá ocorrer sobre um valor constante igual a 555. O programa deverá calcular o 
percentual desejado e apresentar o resultado calculado deste percentual.*/
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    
    float porcento;
    float res;
    
    printf("Digite a %% de 555: ");
    scanf("%f", &porcento);
    res=(porcento*555)/100;
    printf("\n%.2f%% de 555 é: %.2f\n", porcento, res);
    
    return 0;
    }

