//Efetuar a leitura de um n�mero e apresent�-lo como o seu m�dulo (somente seu valor absoluto) 
//elaborando os c�lculos matem�ticos para isso.
//Entrada: n�mero
//Sa�da: m�dulo

#include<stdio.h> //biblioteca scanf printf
#include<locale.h> //biblioteca acentos
#include<math.h> //m�dulo

int main(){
setlocale(LC_ALL, "Portuguese");

int numero, modulo;

printf ("Escreva o n�mero:\n");
scanf ("%d", &numero);
modulo = abs(numero);
printf("N�mero: %d\n", numero);
printf("M�dulo: %d", modulo);

	return 0;
}
