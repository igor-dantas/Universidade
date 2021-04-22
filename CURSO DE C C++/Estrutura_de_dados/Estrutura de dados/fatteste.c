//bibliotecas
#include<stdio.h>
#include<stdlib.h>

//função principal
main()
{
	double fat, cont = 1, n;	
	printf("De quantos numeros voce quer o fatorial em ordem decrescente: ");
	scanf("%lf", &n);
	if(n <= 0.00)
	{
		printf("\ncomando invalido!!\n");
	}
	else
	{
		for( fat = 1; cont <= n; cont = cont + 1)
		{
			fat = fat * cont;
			printf("o fatorial de %d = %d\n", cont, fat);
			
		}
	}
	system("pause");
}
