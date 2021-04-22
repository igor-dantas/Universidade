//bibliotecas
#include<stdio.h>
#include<stdlib.h>

//função principal
int main()
{
	//declaração de variaveis
	int i, *v, *z, *y, f = 1,u = 1;
	int tam;
	//definindo tamanho
	printf("Digite o tamanho dos vetores: ");
	scanf("%d", &tam);
	
	// alocando memoria
	v = (int*)malloc(tam * sizeof(int));
	z = (int*)malloc(tam * sizeof(int));
	y = (int*)malloc(tam * sizeof(int));
	
	if(v == NULL || z == NULL || y == NULL)
	{
		printf("memoria insuficiente\n");
	}
	else
	{
		for(i = 0; i < tam; i++)
		{
			printf("Digite o %do valor do primeiro vetor:", f++);
			scanf("%d", &v[i]);
		}
	
		for(i = 0; i < tam; i++)
		{
			printf("Digite o %do valor do primeiro vetor:", u++);
			scanf("%d", &z[i]);
			y[i] = z[i] + v[i];
		}

		for(i = 0; i < tam; i++)
		{
			printf("vetor v: %d\n", v[i]);
		}
		for(i = 0; i< tam; i++)
		{
			printf("vetor z: %d\n", z[i]);
		}
		for(i = 0; i<tam;i++)
		{
			printf("vetor y: %d\n", y[i]);
		}
		free(v);
		free(z);
		free(y);
	}
	return 0;
	system("pause");
}
