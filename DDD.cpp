/*Fa�a um algoritmo em portugu�s estruturado que leia o n�mero de DDD e informe a qual cidade pertence, considerando s� os seguintes valores:
61 - Bras�lia
71 - Salvador
11 - S�o Paulo
21 - Rio de Janeiro
32 - Juiz de Fora
19 - Campinas
27 - Vit�ria
31 - Belo Horizonte
qualquer outro - uma cidade no Brasil sem identifica��o*/
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
	        printf("DDD inv�lido! Digite novamente.\n");
	}while(ddd>99);
	if (ddd==61)
	    printf("DDD 61 � de Bras�lia.");
	    else if (ddd==71)
	            printf("DDD 71 � de Salvador.");
	            else if (ddd==11)
	                    printf("DDD 11 � de S�o Paulo.");
	                    else if (ddd==21)
	                            printf("DDD 21 � do Rio de Janeiro.");
	                        else if (ddd==32)
	                                printf("DDD 32 � de Juiz de Fora.");
	                                else if (ddd==19)
	                                        printf("DDD 19 � de Campinas.");
	                                        else if (ddd==27)
	                                                printf("DDD 27 � de Vit�ria.");
	                                                else if (ddd==31)
	                                                        printf("DDD 31 � de Belo Horizonte.");
	                                                    else if (ddd!=61&&ddd!=71&&ddd!=11&&ddd!=21&&ddd!=32&&ddd!=19&&ddd!=27&&ddd!=31)
                                                                printf("DDD sem identifica��o.");
	      
	
	
	return 0;
}
