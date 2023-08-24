/*Faça um algoritmo em português estruturado que leia o número de DDD e informe a qual cidade pertence, considerando só os seguintes valores:
61 - Brasília
71 - Salvador
11 - São Paulo
21 - Rio de Janeiro
32 - Juiz de Fora
19 - Campinas
27 - Vitória
31 - Belo Horizonte
qualquer outro - uma cidade no Brasil sem identificação*/
#include<stdio.h>
#include<locale.h>
#include<string.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int ddd;
	do{
	    printf("Informe o DDD: ");
	    scanf("%d",&ddd);
	    if (ddd > 99)
	        printf("DDD inválido! Digite novamente.\n");
	}while(ddd>99);
	if (ddd==61)
	    printf("DDD 61 é de Brasília.");
	    else if (ddd==71)
	            printf("DDD 71 é de Salvador.");
	            else if (ddd==11)
	                    printf("DDD 11 é de São Paulo.");
	                    else if (ddd==21)
	                            printf("DDD 21 é do Rio de Janeiro.");
	                        else if (ddd==32)
	                                printf("DDD 32 é de Juiz de Fora.");
	                                else if (ddd==19)
	                                        printf("DDD 19 é de Campinas.");
	                                        else if (ddd==27)
	                                                printf("DDD 27 é de Vitória.");
	                                                else if (ddd==31)
	                                                        printf("DDD 31 é de Belo Horizonte.");
	                                                    else if (ddd!=61&&ddd!=71&&ddd!=11&&ddd!=21&&ddd!=32&&ddd!=19&&ddd!=27&&ddd!=31)
                                                                printf("DDD sem identificação.");
	      
	
	
	return 0;
}
