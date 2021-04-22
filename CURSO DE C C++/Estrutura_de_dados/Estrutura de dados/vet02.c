//bibliotecas
#include<stdio.h>
#include<stdlib.h>

//função principal
main()
{
	//declaração de variavel
	int A[5], B[5], cont, i, z,y;
	//entrada de dados no vetor A[5]
	for(cont = 0; cont <= 4; cont++)
	{
		printf("Digite o %do valor: ", i++);
		scanf("%d", &A[cont]);
	}
	// laço para comparação
	for(cont = 0; cont <= 4; cont++)
	{
		//condição para valor de B
		if(A[cont] > 0 && A[cont] != 0)
		{
			B[cont] = A[cont];
		}
	}
	//saida de valores
	for(cont = 0; cont<=4; cont++)
	{
		printf("\no %do valor de A eh: %d\n", z++, A[cont]);
	}
	//saida de valores
	for(cont= 0;cont<=4;cont++)
	{
		printf("\no %do valor de B eh: %d\n", y++, B[cont]);
	}
	system("pause");//fica parado
}
