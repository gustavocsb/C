/*8 – Anacleto tem 1,50 metro e cresce 2 centímetros por ano, enquanto Felisberto tem 1,10 metro e cresce 3 centímetros
por ano. Construa um algoritmo que calcule e imprima quantos anos serão necessários para que Felisberto seja maior que Anacleto.*/
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int anacleto, felisberto, i;
    anacleto=150;
    felisberto=110;
    
    for(i=0;felisberto<anacleto;i++){
    	anacleto=150+2*i;
    	felisberto=110+3*i;
	}
	printf("\nLevará %d anos para Felisberto ser maior que Anacleto\n", i+1);
	
    return 0;
    }

