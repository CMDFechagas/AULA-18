#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//EXERCICIO 1 3� VA

//ENTRADA DE DADOS
int i, a;
int mat1[15], mat2[10]; //DEFININDO AS MATRIZES

int main(void)
{
    setlocale(LC_ALL, "Portuguese"); //SETANDO A LINGUAGEM PT BR

//ITERA��ES A SEREM REALIZADAS
   
    for(i=0 ; i<14; i++) //PREENCHENDO OS VALORES DA 1� MATRIZ
	{
        printf("DIGITE AS MATR�CULAS DOS ALUNOS DE L�GICA DE PROGRAMA��O: ");
        scanf("%d", &mat1[i]);
    }
   
    printf("\n");
   
    for(i=0; i<9; i++) //PREENCHENDO OS VALORES DA 2� MATRIZ
	{
        printf("DIGITE AS MATR�CULAS DOS ALUNOS DE LINGUAGEM DE PROGRAMA��O: ");
        scanf("%d", &mat2[i]);
    }
    printf("\n");

//SA�DA DE DADOS
    	for(i=0; i<14; i++)
		{
    	for(a=0; a<14; a++)
		{
        if(mat1[i] == mat2[a]) printf("AS MATR�CULAS IGUAIS S�O: %d\n", mat1[i]); //ANALISANDO QUAIS OS VALORES NAS MATRIZES S�O IGUAIS
    }
}
return 0;
}
