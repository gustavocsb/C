/*2. Altere o algoritmo anterior considerando que n�o se conhece quantos alunos esta turma tem (menos que 50). O n�mero de aluno ser� informado pelo usu�rio.*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int alunos;
    do{
    printf("Digite quantos alunos tem na sala: ");
    scanf("%d",&alunos);
    if(alunos<50)
    printf("Digite um n�mero maior! M�nimo: 50\n");
    }while(alunos<50);
    float nota[alunos];
    int i;
    for(i=0;i<alunos;i++){
    	printf("Digite a nota do %d� aluno: ", i+1);
    	scanf("%f", &nota[i]);
	}
	system("cls");
	printf("\nNotas:\n");
	for(i=0;i<alunos;i++){
		printf("Aluno %d: %.2f\n", i+1, nota[i]);
	}
    return 0;
    }

