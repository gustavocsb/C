/* Elabore um algoritmo que, a partir de um dia, m�s e ano fornecidos, valide se eles comp�em uma data v�lida.
N�o deixe de considerar os meses com 30 ou 31 dias, e o tratamento de ano bissexto. */

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int ano, anoB=0, mes, dia;
    
    do{
    	printf("Digite o ano: ");
    	scanf("%d", &ano);
    	fflush(stdin);
    	if(ano<1)
    		printf("Ano inv�lido.\n");
	}while(ano<1);
	
	if(ano%4==0){
    	printf("Ano Bissexto!\n");
    	ano=anoB;
    }
	
	do{
		printf("Digite o m�s: ");
		scanf("%d", &mes);
		fflush(stdin);
		if(mes<1||mes>12){
		    printf("M�s inv�lido.\n");
		}
	}while(mes<1||mes>12);
	
	if(mes==1||mes==3||mes==5||mes==7||mes==9||mes==11){
		printf("1 a 31\n");
	    do{
		    printf("Digite o dia: ");
		    scanf("%d", &dia);
		    fflush(stdin);
			if(dia<1||dia>31)
			    printf("Dia inv�lido.\n");
        }while(dia<1||dia>31);
    }else
    
	if(mes==4||mes==6||mes==8||mes==10||mes==12){
		printf("1 a 30\n");
		do{
			printf("Digite o dia: ");
		    scanf("%d", &dia);
		    fflush(stdin);
			if(dia<1||dia>30)
			    printf("Dia inv�lido.\n");
		}while(dia<1||dia>30);
	}else
	
	if(mes==2&&anoB==ano){
		printf("1 a 29\n");
		do{
			printf("Digite o dia: ");
		    scanf("%d", &dia);
		    fflush(stdin);
		    if(dia<1||dia>29)
			    printf("Dia inv�lido.\n");
		}while(dia<1||dia>29);
	}else
	
	if(mes==2){
		printf("1 a 28\n");
		do{
			printf("Digite o dia: ");
		    scanf("%d", &dia);
		    fflush(stdin);
		    if(dia<1||dia>28)
			    printf("Dia inv�lido.\n");
		}while(dia<1||dia>28);
	}else
	
    return 0;
    }

