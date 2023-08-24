/*
10. Escrever um algoritmo que solicite e leia letra por letra o nome completo de uma pessoa. 
O caractere sustenido “#” indica o fim do nome. Depois de lê-lo apresente todo o nome informado, sem o #.
*/
#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    char letra[50];
    int tamanho, i=0, j;
    printf("Digite seu nome LETRA POR LETRA:\n");
    printf("Digite |#| (caractere 'Hashtag') para finalizar o seu nome:\n");
    do{
    	printf("Digite a letra: ");
    	scanf("%c",&letra[i]);
    	letra[i]=tolower(letra[i]);
    	fflush(stdin);
    	if(letra[i]=='#') break;
    	else i++;
    }while(true);
    	
    tamanho=strlen(letra);
    for(j=0;j<tamanho-1;j++){
    	printf("%c",letra[j]);
	}
    return 0;
    }

