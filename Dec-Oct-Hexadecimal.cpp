/*3. Faça um programa que leia um caractere e apresente o caractere lido na forma caractere, decimal, octal e hexadecimal, sendo um em cada linha.*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    
    char caractere;
    
    printf("Digite um caracter: ");
    scanf("%c", &caractere);
    system("cls");
    printf("\nCaracter: %c\n", caractere);
    printf("Octal: %o\n", caractere);
    printf("Decimal: %d\n", caractere);
    printf("Hexadecimal: %x\n", caractere);
    
    return 0;
    }

