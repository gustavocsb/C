/*Leia quatro n�meros (N1, N2, N3, N4) e o nome do aluno e o sexo, correspondente �s 
quatro notas de um aluno. Calcule a m�dia simples. Para cada uma destas notas, 
mostre esta m�dia acompanhada pela mensagem "Media: ". Se esta m�dia for maior 
ou igual a 7.0, imprima a mensagem "'nome do aluno', 'sexo, aprovado.". 
Se a m�dia calculada for inferior, imprima a mensagem "'nome do aluno'
reprovado.".
A impress�o da m�dia deve ser feita com apenas 1 cada decimal.*/ 

#include<stdio.h>

int main() {   //estrutura padr�o para come�ar o c�digo

//declarando vari�veis
	double nota1, nota2, nota3, nota4, media; 
	int freq;
	char sexo[10], nomeAluno[25];
	
//perguntando o sexo, nome e notas do Aluno
	printf("Informe o nome do Aluno: ");
	fgets(nomeAluno, 25, stdin);
	printf("Informe o sexo do aluno: ");
	scanf("%s", sexo);
	printf("Digite a frequencia do Aluno: ");
	scanf("%d", &freq);
	printf("Digite a nota 1: ");
	scanf("%lf", &nota1);
	printf("Digite a nota 2: ");
	scanf("%lf", &nota2);
	printf("Digite a nota 3: ");
	scanf("%lf", &nota3);
	printf("Digite a nota 4: ");
	scanf("%lf", &nota4);
	//calculando a m�dia
	media = (nota1+nota2+nota3+nota4) / 4;
	//condi��o aprovado/reprovado pela m�dia e frequencia
	if (media >= 7 && freq >= 75) 
	{
		printf("Nome do Aluno: %s", nomeAluno);
		printf("Sexo: %s\n", sexo);
		printf("Frequencia: %d%%\n", freq);
		printf("Media: %.1lf\n", media);
		printf("Aprovado\n");
	}
	else
	{
		printf("Nome do Aluno: %s", nomeAluno);
		printf("Sexo: %s\n", sexo);
		printf("Frequencia: %d%%\n", freq);
		printf("Media: %.1lf\n", media);
		printf("Reprovado\n");
	}

	return 0;
}
