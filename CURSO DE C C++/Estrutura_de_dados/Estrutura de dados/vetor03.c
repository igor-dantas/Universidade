//biblioteca
#include<stdio.h>
#include<stdlib.h>

//função principal 
int main()
{
	//declaração de variaveis
	int *v, i;
	int tam;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tam);
	//alocando memoria
	v = (int*)malloc(tam*sizeof(int));
	
	//testando se alocou memoria corretamente
	if(v == NULL)
	{
		printf("Memoria insuficiente\n");
	}
	else
	{
		for(i = 0; i < tam; i++)
		{
			v[i] = i;
		}
		printf("%d\n", v[0]);
		printf("%d\n", v[tam - 1]);
		free(v);
	}
	
	return 0;
}
