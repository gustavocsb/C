/*
13. Fazer um algoritmo que:
a) leia uma frase de até 80 caracteres, incluindo os brancos
b) conte quantos caracteres em branco existem na frase
c) conte quantas vezes a letra ‘a’ ou ‘A’ aparece
d) conte quantas vezes ocorre um mesmo par de letras na frase e quais são elas;
e) apresente o que foi calculado nos itens b, c e d
*/
#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    char frase[80], par[2], par2[2], parMaisRepetiu[2];
    int tamanho, branco=0, a, A, i, j, qtdRepete=0, qtdMaisRepete=0;
    printf("Digite a frase: ");
    fgets(frase,80,stdin);
    tamanho=strlen(frase);
    for(i=0;i<tamanho;i++){
    	switch(frase[i]){
    		case ' ':
    			branco++;
    		break;
    		case 'a':
    			a++;
    		break;
    		case 'A':
    			A++;
    		break;
		}
	}
	for(i=0;i<tamanho;i++){
		qtdRepete=0;
		par[0]=frase[i];
		par[1]=frase[i+1];
		for(j=0;j<tamanho;j++){
			par2[0]=frase[j];
			par2[1]=frase[j+1];
			if(par[0]==par2[0] && par[1]==par2[1])
			qtdRepete++;
		}
		if(qtdRepete>qtdMaisRepete){
			qtdMaisRepete=qtdRepete;
			strcpy(parMaisRepetiu, par);
		}
	}
	system("cls");
	printf("Caracteres em branco: %d\n", branco);
	printf("Quantidade de 'a': %d\n", a);
	printf("Quantidade de 'A': %d\n", A);
	printf("Par + repetiu: %c%c\n",parMaisRepetiu[0], parMaisRepetiu[1]);
	printf("Par + repetiu se repetiu %d vezes\n", qtdMaisRepete);
    
    return 0;
    }

