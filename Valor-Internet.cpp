/*Fa�a um algoritmo que calcule e escreva o valor a ser pago a sua provedora de acesso � Internet,
para isso voc� dever� ler a quantidade de horas que voc� utilizou. Sabe-se que voc� pagar� R$ 30,00
por at� 20 horas de uso (va1or b�sico), caso voc� tenha usado mais de 20 horas, ent�o voc� deve acrescentar
10% do valor b�sico para cada hora extra utilizada.*/
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
	    printf("O valor a ser pago �: R$ %.1f ", pagamentoExtra);
	}else printf("O valor a ser pago �: R$ %.1f", pagamento);
	return 0;
}
