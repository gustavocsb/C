/*
4. Faça um algoritmo que leia até 30 letras e as escreva na ordem inversa (ou contrária) da que foram lidas.
*/
#include<stdio.h>
#include<locale.h>
#include<string.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    char c, letras[30];
    int i, tamanho;
    printf("Digite as letras(juntas): ");
    fgets(letras,30,stdin);
    fflush(stdin);
    tamanho=strlen(letras);
    for(i=0;i<tamanho/2;i++){
    	c=letras[i];
    	letras[i]=letras[tamanho-i-1];
    	letras[tamanho-i-1]=c;
	}
	printf("\nLetras invertidas: %s\n",letras);
    
    return 0;
    }

