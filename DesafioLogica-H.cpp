/*Sendo H = 1/1+1/2+1/3+ ... +1/N. Prepare um algoritmo para calcular H sendo N fornecido pelo usuário.*/
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int i, n;
    float h;
    printf("H = 1/1+1/2+1/3+ ... +1/N\n");
    printf("Informe N: ");
    scanf("%d", &n);
    for (i=1;i<=n;i++){
    	h=h+(1.0/i);
	}
	printf("H = %.4f", h);
    return 0;
    }

