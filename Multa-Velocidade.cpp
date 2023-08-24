//Objetivo: Construa um algoritmo que a partir da leitura da velocidade e placa do carro, avise
//ao motorista somente se ele será multado, quando estiver trafegando no Eixo Rodoviário (limite de 80 km/h)
//Entrada: Velocidade, Placa do Carro
//Saída: Multa

#include<stdio.h> //biblioteca scanf print
#include<locale.h> //biblioteca para acentos

int main (){ //estrutura para começo do código
setlocale(LC_ALL, "Portuguese");
//declarando variáveis
char placa[8];   
float vel;
//informar a velocidade e a placa
printf ("Qual a velocidade durante a travessia do pardal?\n");
scanf ("%f", &vel);
printf ("Qual a placa do veículo?\n");
scanf ("%s", placa);
//condição da velocidade maior que 80
if (vel<=80)
{
	printf ("Você não tem nenhuma multa!"); //Sem multa se velocidade <= 80
}
else
{
	printf ("Você foi multado por excesso de velocidade! (Limite 80km/h)\nVocê estava à: %.1f km/h\nPlaca do Veículo: %s", vel, placa); //Multa informando a velocidade e a placa
}
return 0;
}
