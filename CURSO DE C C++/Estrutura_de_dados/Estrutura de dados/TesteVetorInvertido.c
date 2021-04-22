//bibliotecas
#include<stdio.h>
#include<stdlib.h>

//funçãao principal
int main()
{
	//declaração de variaveis
	int A[5], B[5], i, z = 1, y = 1, n;
	for(i = 0; i < 5; i++)
	{
		//recebe os valores do vetor A
		printf("Digite o %do numero do vetor A: ", z++);
		scanf("%d", &A[i]);
		//inverte os valores do A para o B
		B[0] = A[4];
		B[1] = A[3];
		B[2] = A[2];
		B[3] = A[1];
		B[4] = A[0];		
	}
	//espaço
	printf("\n");
	//imprime B na tela com os valores de A invertido
	for(i = 0; i < 5; i++)
	{
		printf("o %do valor de B: %d\n", y++, B[i]);
	}
	system("pause");// fica parado
}
