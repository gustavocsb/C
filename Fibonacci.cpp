/* Construa um algoritmo que apresente os 20 primeiros termos da série de Fibonacci.
Fn = Fn - 1 + Fn - 2 */

#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int num1=1, num2=1, fib=2, aux;
    
    while(aux<20){
    	fib=num1+num2;
    	printf("%d\n",fib);
    	num1=num2;
    	num2=fib;
    	aux++;
	}
    
    return 0;
    }

