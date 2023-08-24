/*Faça um algoritmo que receba o sexo e a nota dos alunos de uma classe e apresente a média das notas dos alunos
e a média das notas das alunas. O algoritmo deverá apresentar os resultados solicitados quando for fornecida uma nota negativa.*/

#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int alunos;
    
    printf("Quantos alunos tem na classe?\n");
    scanf("%d", &alunos);
    
    int masc, fem;
    
    printf("Quantos são do sexo masculino?\n");
    scanf("%d", &masc);
    fem=alunos-masc;
    
    int i;
    float notasMasc[masc], notasFem[fem], notasTotalM=0, notasTotalF=0, mediaM, mediaF;
    
    for (i=0;i<masc;i++){
    	printf("Digite a nota do %dº aluno [M]: ", i+1);
    	scanf("%f", &notasMasc[i]);
    	notasTotalM+=notasMasc[i];
	}
	mediaM=notasTotalM/masc;
	
	for (i=0;i<fem;i++){
		printf("Digite a nota da %dº aluna [F]: ", i+1);
		scanf("%f", &notasFem[i]);
		notasTotalF+=notasFem[i];
	}
	mediaF=notasTotalF/fem;
	
	printf("A média dos alunos é: %.2f\n", mediaM);
	printf("A média das alunas é: %.2f\n", mediaF);
    
    return 0;
    }

