//bibliotecas
#include<stdio.h>
#include<stdlib.h>

//função principal
main()
{
	//declaração de variaveis
	float  vMaior = 0.0, A[5], B[5];
	int cont, i, z;
	//entrada de dados
	for(cont = 0; cont <= 4; cont++)
	{
		printf("Digite o %do valor: ", i++);
		scanf("%f", &A[cont]);
	}
	//calculo
	for(cont = 0; cont<=4 ; cont++)
	{
		if(A[cont] > vMaior)
		{
			vMaior = A[cont];
		}
	}
	//atualizando vetor
	for(cont = 0; cont<=4 ; cont++)
	{
		B[cont] = A[cont] / vMaior;
	}
	//saida de dados
	for(cont = 0; cont<=4 ; cont++)
	{
		printf("O %do valor do novo vetor eh: %.2f\n", z, B[cont]);
	}
	system("pause");//fica parado
}
