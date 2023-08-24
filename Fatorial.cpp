/* Construa um algoritmo que calcule o fatorial de um número usando a estrutura PARA...FAÇA,
 baseando-se na definição matemática (N! = 1x2x3x...x N-1 x N e 0! = 1 por definição) */
 #include<stdio.h>
 #include<locale.h>
 
 int main (){
    setlocale(LC_ALL,"Portuguese");
    int i, num, fatorial;
    
    printf("Digite o número: ");
    scanf("%d", &num);
    for (fatorial=1;num>1;num--){
        fatorial=fatorial*num;
	 }
    printf("O fatorial é: %d", fatorial);
    
 	return 0;
 }
