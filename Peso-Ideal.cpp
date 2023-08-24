/*Modifique o algoritmo 4 (Sr. ou Sra.), feito anteriormente, para ler a altura e apresentar o peso ideal da pessoa, 
utilizando as seguintes fórmulas:
para homem: peso = (72.5 * altura) - 58
para mulher: peso = (62.1 * altura) - 44.7 */
#include<stdio.h>
#include<locale.h>
#include<ctype.h>
#include<string.h>

int main(){	
	setlocale(LC_ALL, "Portuguese");
	char sexo;
	char nome[30];
	float altura, peso;
	
    printf ("Qual o seu nome?\n");
	fgets(nome,30,stdin);
	nome[strcspn(nome, "\n")] = '\0';
	fflush(stdin);
	printf ("Qual a sua altura?\nEx: 1,70\n");
	scanf("%f", &altura);
	fflush(stdin);
	do{
    printf ("Qual o seu sexo? [F/M]\n");
    scanf("%c", &sexo);
    fflush(stdin);
    sexo = toupper(sexo);
    if (sexo != 'M' && sexo != 'F')
        printf("Sexo inválido, digite novamente:\n");
    }while(sexo!='M'&&sexo!='F');
    if (sexo=='M'){
        peso=((72.5*altura)-58);
        printf("Ilmo. Sr. %s seu peso ideal é: %.1f", nome, peso);
    }else if (sexo=='F'){
                peso=((62,1*altura)-44,7);
                printf("Ilma. Sra. %s seu peso ideal é: %.1f", nome, peso);
            }
                
	return 0;
}
