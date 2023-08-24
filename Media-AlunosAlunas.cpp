/*Fa�a um algoritmo que receba o sexo e a nota dos alunos de uma classe e apresente a m�dia das notas dos alunos
e a m�dia das notas das alunas. O algoritmo dever� apresentar os resultados solicitados quando for fornecida uma nota negativa.*/

#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int alunos;
    
    printf("Quantos alunos tem na classe?\n");
    scanf("%d", &alunos);
    
    int masc, fem;
    
    printf("Quantos s�o do sexo masculino?\n");
    scanf("%d", &masc);
    fem=alunos-masc;
    
    int i;
    float notasMasc[masc], notasFem[fem], notasTotalM=0, notasTotalF=0, mediaM, mediaF;
    
    for (i=0;i<masc;i++){
    	printf("Digite a nota do %d� aluno [M]: ", i+1);
    	scanf("%f", &notasMasc[i]);
    	notasTotalM+=notasMasc[i];
	}
	mediaM=notasTotalM/masc;
	
	for (i=0;i<fem;i++){
		printf("Digite a nota da %d� aluna [F]: ", i+1);
		scanf("%f", &notasFem[i]);
		notasTotalF+=notasFem[i];
	}
	mediaF=notasTotalF/fem;
	
	printf("A m�dia dos alunos �: %.2f\n", mediaM);
	printf("A m�dia das alunas �: %.2f\n", mediaF);
    
    return 0;
    }

