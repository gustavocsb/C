/*
6. Elabore um programa que identifique o n�mero de algarismos de um valor inteiro positivo informado pelo usu�rio.
*/
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int num, algarismos;
    printf("Digite o n�mero: ");
    scanf("%d", &num);
    if(num==0)
    algarismos=1;
    else
    while(num!=0){
    	algarismos+=1;
    	num=num/10;
	}
	printf("\nAlgarismos: %d\n", algarismos);
    return 0;
    }

