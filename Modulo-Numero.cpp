//Efetuar a leitura de um número e apresentá-lo como o seu módulo (somente seu valor absoluto) 
//elaborando os cálculos matemáticos para isso.
//Entrada: número
//Saída: módulo

#include<stdio.h> //biblioteca scanf printf
#include<locale.h> //biblioteca acentos
#include<math.h> //módulo

int main(){
setlocale(LC_ALL, "Portuguese");

int numero, modulo;

printf ("Escreva o número:\n");
scanf ("%d", &numero);
modulo = abs(numero);
printf("Número: %d\n", numero);
printf("Módulo: %d", modulo);

	return 0;
}
