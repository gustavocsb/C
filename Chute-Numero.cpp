/*9 – Imagine uma brincadeira entre dois colegas, na qual um pensa um número e o outro deve
fazer chutes até acertar o número imaginado. Como dica, a cada tentativa é dito se o chute foi
alto ou foi baixo. Elabore um algoritmo dentro deste contexto, que leia o número imaginado e os 
chutes, ao final mostre quantas tentativas foram necessárias para descobrir o número.*/

#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int i, num, chute;
    
    printf("Digite o número pensado: ");
    scanf("%d", &num);
    
    for(i=0;i<num;i++){
    	printf("Digite um chute: ");
    	scanf("%d", &chute);
    	if(chute==num){
    		printf("Você descobriu o número pensado.\n");
    		break;
		}else if(chute>num){
			printf("Você errou. O número é menor que seu chute.\n");
		}else if(chute<num){
			printf("Você errou. O número é maior que seu chute.\n");
		}
	}
	
	printf("\nVocê levou %d tentativas para acertar o número!\n", i+1);
    
    return 0;
    }

