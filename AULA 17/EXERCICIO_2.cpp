#include <iostream>
#include <time.h>
#include <cstdlib>

//EXERCICIO 2

using namespace std;

//ENTRADA DE DADOS

int main()
{
srand(time(NULL));
int vetor[10], aux;
	
//PROCESSAMENTO DE DADOS
	for(int i=0; i<10; i++)
	{
		vetor[i]=rand()%10;
		
	}
	for (int i=0; i<10; i++)
	{
		for(int j=i+1; j<10; j++)
		{
			if(vetor[i]>vetor[j])
			{
				aux=vetor[1];
				vetor[i]=vetor[j];
				vetor[j]=aux;
			}
		}
	}	
	cout<<endl;
	for(int i=0; i<10; i++)
	{
		cout<<vetor[i]<<endl;
	}
	cout<<endl;
	return 0;
	
}
