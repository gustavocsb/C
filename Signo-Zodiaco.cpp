/* Elabore um algoritmo que escreva o signo do zod�aco correspondente ao dia e m�s informado. */

#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int dia, mes;
    
    printf("SIGNOS\n\n");
    printf("Dia: ");
    scanf("%d", &dia);
    fflush(stdin);
    printf("M�s: ");
    scanf("%d", &mes);
    fflush(stdin);
    
    if(dia>=21&&mes==3||dia<=20&&mes==4){
    	printf("Signo: �ries\n");
	}else
	
	if(dia>=21&&mes==4||dia<=20&&mes==5){
		printf("Signo: Touro\n");
	}else
	
	if(dia>=21&&mes==5||dia<=20&&mes==6){
		printf("Signo: G�meos\n");
	}else
	
	if(dia>=21&&mes==6||dia<=21&&mes==7){
		printf("Signo: C�ncer\n");
	}else
	
	if(dia>=22&&mes==7||dia<=22&&mes==8){
		printf("Signo: Le�o\n");
	}else
	
	if(dia>=23&&mes==8||dia<=22&&mes==9){
		printf("Signo: Virgem\n");
	}else
	
	if(dia>=23&&mes==9||dia<=22&&mes==10){
		printf("Signo: Libra\n");
	}else
	
	if(dia>=23&&mes==10||dia<=21&&mes==11){
		printf("Signo: Escorpi�o\n");
	}else
	
	if(dia>=22&&mes==11||dia<=21&&mes==12){
		printf("Signo: Sagit�rio\n");
	}else
	
	if(dia>=22&&mes==12||dia<=20&&mes==1){
		printf("Signo: Capric�rnio\n");
	}else
	
	if(dia>=21&&mes==1||dia<=19&&mes==2){
		printf("Signo: Aqu�rio\n");
	}else
	
	if(dia>=20&&mes==2||dia<=20&&mes==3){
		printf("Signo: Peixes\n");
	}else
    
    return 0;
    }

