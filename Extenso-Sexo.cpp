/*5. Fa�a um programa que pergunte ao usu�rio qual a letra inicial do seu sexo (masculino/feminino) 
e escreva por extenso o sexo informado, usando o operador condicional tern�rio.*/
#include<stdio.h>
#include<locale.h>
#include<ctype.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    
    char sexo;
    
    printf("Digite a letra inicial do seu sexo: ");
    scanf("%c", &sexo);
    sexo = toupper(sexo);
    if(sexo=='F')
    printf("\nFeminino\n");
    else
    if(sexo=='M')
    printf("\nMasculino\n");
    
    return 0;
    }

