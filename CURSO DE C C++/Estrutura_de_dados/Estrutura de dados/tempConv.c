//bibliotecas
#include<stdio.h>
#include<stdlib.h>
//função principal
main()
{
	//declaração de variaveis
	float C = 0.0, F = 0.0;
	//entrada de dados
	printf("Digite a temperatura em Celsius a ser covertida para Fahrenheit:\n");
	scanf("%f", &C);
	//calculo
	F = C*(9.0/5.0)+32.0;
	//saida
	printf("A temperatura %.2f em Celsius eh equivalente a temperatura %.2f em Fahrenheit\n ", C, F);
	system("pause");
}

