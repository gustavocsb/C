/* Construa um algoritmo que calcule o fatorial de um n�mero usando a estrutura PARA...FA�A,
 baseando-se na defini��o matem�tica (N! = 1x2x3x...x N-1 x N e 0! = 1 por defini��o) */
 #include<stdio.h>
 #include<locale.h>
 
 int main (){
    setlocale(LC_ALL,"Portuguese");
    int i, num, fatorial;
    
    printf("Digite o n�mero: ");
    scanf("%d", &num);
    for (fatorial=1;num>1;num--){
        fatorial=fatorial*num;
	 }
    printf("O fatorial �: %d", fatorial);
    
 	return 0;
 }
