/*Desenvolver um algoritmo que leia o nome e o sexo de uma pessoa e apresente como saída uma das seguintes mensagens: “Ilmo. Sr.”,
 para o sexo masculino ou “Ilma. Sra.” para o sexo feminino, acrescentando o nome em seguida. Observe o exemplo de um resultado:
Ilma Sra. Ana Rita*/
#include<stdio.h> //scanf printf
#include<locale.h> //uso acentos
#include<ctype.h> //toupper tolower

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	char sexo;
	char nome[20];
	
	printf ("Qual o seu nome?\n");
	fgets(nome,20,stdin);
	do{
    printf ("Qual o seu sexo? [F/M]\n");
    scanf("%c", &sexo);
    fflush(stdin);
    sexo = toupper(sexo);
    if (sexo != 'M' && sexo != 'F')
        printf("Sexo inválido, digite novamente:\n");
    }while(sexo!='M'&&sexo!='F');
    if (sexo=='M')
        printf("Ilmo. Sr. %s", nome);
        else if (sexo=='F')
                printf("Ilma. Sra. %s", nome);
    
    
	return 0;
}
