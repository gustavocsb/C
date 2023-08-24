//Fazer um algoritmo que leia três valores, determine e imprima o maior deles.
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, valor[3];
	for (i=0;i<3;i++){
	printf("Informe o %dº valor: ", i+1);
	scanf("%d", &valor[i]);
}
if (valor[0]>valor[1]&&valor[0]>valor[2])
    printf("O maior valor é o 1º: %d", valor[0]);
    else if (valor[1]>valor[0]&&valor[1]>valor[2])
            printf("O maior valor é o 2º: %d", valor[1]);
            else if (valor[2]>valor[0]&&valor[2]>valor[1])
                    printf("O maior valor é o 3º: %d", valor[2]);
	return 0;
}
