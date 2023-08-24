/*9 � Imagine uma brincadeira entre dois colegas, na qual um pensa um n�mero e o outro deve
fazer chutes at� acertar o n�mero imaginado. Como dica, a cada tentativa � dito se o chute foi
alto ou foi baixo. Elabore um algoritmo dentro deste contexto, que leia o n�mero imaginado e os 
chutes, ao final mostre quantas tentativas foram necess�rias para descobrir o n�mero.*/

#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int i, num, chute;
    
    printf("Digite o n�mero pensado: ");
    scanf("%d", &num);
    
    for(i=0;i<num;i++){
    	printf("Digite um chute: ");
    	scanf("%d", &chute);
    	if(chute==num){
    		printf("Voc� descobriu o n�mero pensado.\n");
    		break;
		}else if(chute>num){
			printf("Voc� errou. O n�mero � menor que seu chute.\n");
		}else if(chute<num){
			printf("Voc� errou. O n�mero � maior que seu chute.\n");
		}
	}
	
	printf("\nVoc� levou %d tentativas para acertar o n�mero!\n", i+1);
    
    return 0;
    }

