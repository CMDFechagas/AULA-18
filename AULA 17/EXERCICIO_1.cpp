#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//EXERCICIO 1 3ª VA

//ENTRADA DE DADOS
int i, a;
int mat1[15], mat2[10]; //DEFININDO AS MATRIZES

int main(void)
{
    setlocale(LC_ALL, "Portuguese"); //SETANDO A LINGUAGEM PT BR

//ITERAÇÕES A SEREM REALIZADAS
   
    for(i=0 ; i<14; i++) //PREENCHENDO OS VALORES DA 1ª MATRIZ
	{
        printf("DIGITE AS MATRÍCULAS DOS ALUNOS DE LÓGICA DE PROGRAMAÇÃO: ");
        scanf("%d", &mat1[i]);
    }
   
    printf("\n");
   
    for(i=0; i<9; i++) //PREENCHENDO OS VALORES DA 2ª MATRIZ
	{
        printf("DIGITE AS MATRÍCULAS DOS ALUNOS DE LINGUAGEM DE PROGRAMAÇÃO: ");
        scanf("%d", &mat2[i]);
    }
    printf("\n");

//SAÍDA DE DADOS
    	for(i=0; i<14; i++)
		{
    	for(a=0; a<14; a++)
		{
        if(mat1[i] == mat2[a]) printf("AS MATRÍCULAS IGUAIS SÃO: %d\n", mat1[i]); //ANALISANDO QUAIS OS VALORES NAS MATRIZES SÃO IGUAIS
    }
}
return 0;
}
