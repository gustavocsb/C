//Objetivo: Construa um algoritmo que a partir da leitura da velocidade e placa do carro, avise
//ao motorista somente se ele ser� multado, quando estiver trafegando no Eixo Rodovi�rio (limite de 80 km/h)
//Entrada: Velocidade, Placa do Carro
//Sa�da: Multa

#include<stdio.h> //biblioteca scanf print
#include<locale.h> //biblioteca para acentos

int main (){ //estrutura para come�o do c�digo
setlocale(LC_ALL, "Portuguese");
//declarando vari�veis
char placa[8];   
float vel;
//informar a velocidade e a placa
printf ("Qual a velocidade durante a travessia do pardal?\n");
scanf ("%f", &vel);
printf ("Qual a placa do ve�culo?\n");
scanf ("%s", placa);
//condi��o da velocidade maior que 80
if (vel<=80)
{
	printf ("Voc� n�o tem nenhuma multa!"); //Sem multa se velocidade <= 80
}
else
{
	printf ("Voc� foi multado por excesso de velocidade! (Limite 80km/h)\nVoc� estava �: %.1f km/h\nPlaca do Ve�culo: %s", vel, placa); //Multa informando a velocidade e a placa
}
return 0;
}
