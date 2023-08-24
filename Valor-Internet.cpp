/*Faça um algoritmo que calcule e escreva o valor a ser pago a sua provedora de acesso à Internet,
para isso você deverá ler a quantidade de horas que você utilizou. Sabe-se que você pagará R$ 30,00
por até 20 horas de uso (va1or básico), caso você tenha usado mais de 20 horas, então você deve acrescentar
10% do valor básico para cada hora extra utilizada.*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int horas, horasExtra;
	float pagamento, pagamentoExtra;
	printf("Quantas horas de uso foram utilizadas?\n");
	scanf("%d", &horas);
	pagamento=30;
	if (horas>20){
	    horasExtra=horas-20;
	    pagamentoExtra=horasExtra*3+30;
	    printf("O valor a ser pago é: R$ %.1f ", pagamentoExtra);
	}else printf("O valor a ser pago é: R$ %.1f", pagamento);
	return 0;
}
