//bibliotecas
#include<stdio.h>
#include<stdlib.h>

//função principal
int main()
{
	//declaração de variaveis
	int i, A[10], B[10], z = 1, y = 1;
	//leitura
	for( i = 0; i < 10; i++ )
	{
		printf("digite o %do numero do vetor: ", z++);
		scanf("%d", &A[i]);
		if( A[i] % 2 == 1)
		{
			B[i] = A[i];
		}
		else
		{
			B[i] = 0;
		}
	}
	printf("\n");
	for( i = 0; i < 10; i++)
	{
		printf("o %do numero do vetor B: %d\n", y++, B[i]);
	}
	system("pause");
	
}
