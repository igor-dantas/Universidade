#include <stdio.h>
#include <stdlib.h>


int main ()
{
	
	int i, j, aux, LIN, COL;
	int **x;
	
	x = (int**)malloc(LIN * sizeof(int));
	
	for(i = 0; i < LIN; i++)
	{	
		x[i] = (int*)malloc(COL * sizeof(int));
	}
	
	printf("Informe o numero de linhas: ");
	scanf("%d", &LIN);
	printf("Informe o numero de linhas: ");
	scanf("%d", &COL);
	
	
	
	if (x == NULL)
	{
		printf("Memoria insuficiente\n");
	}
	
	else
	{
		printf("\nInforme o valor nas posicoes da matriz:\n\n");
		
		for(i = 0; i < LIN; i++)
		{
			for(j = 0; j < COL; j++)
			{
				printf("linha %d coluna %d: ", i, j);
				scanf("%d", &x[i][j]);
				
				if(i == j)
				{
					aux = aux + x[i][j];
				}
			}
		}
		
		printf("Matriz:\n");
		
		for(i = 0; i < LIN; i++)
		{
			for(j = 0; j < COL; j++)
			{
				printf("%2d ", x[i][j]);
			}
			printf("\n");
		}
		
		printf("Soma da diagonal principal: %d", aux);
		
		for(i = 0; i < LIN; i++)
		{
			free(x[i]);
		}
		
		free(x);
	}
	
return 0;
}