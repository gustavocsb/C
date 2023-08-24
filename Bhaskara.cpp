//Entrada: a, b e c
//Saída: Resultado

#include<stdio.h> //biblioteca scanf printf
#include<math.h> //biblioteca para funções matemáticas

int main (){ //estrutura para começar o código

//declarando variáveis
double a, b, c, delta, x1, x2;

//perguntar as variáveis
printf ("Digite o valor de A: ");
scanf ("%lf", &a);
printf ("Digite o valor de B: ");
scanf ("%lf", &b);
printf ("Digite o valor de C: ");
scanf ("%lf", &c);

//calcular o delta

delta = pow(b,2) - 4*a*c;

if ( a==0 or delta < 0) //condições para o bhaskara
{
	printf ("Impossível Calcular!");
}
else
{
	x1 = (-b + sqrt(delta)) / (2*a); //calcular x1 e x2
    x2 = (-b - sqrt(delta)) / (2*a);
	printf ("x1 = %.5lf\n", x1); //mostrar o resultado
	printf ("x2 = %.5lf\n", x2);
}

	return 0;
}
