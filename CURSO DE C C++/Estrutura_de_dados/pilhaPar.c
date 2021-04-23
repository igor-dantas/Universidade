//bibliotecas
#include<stdio.h>
#include<stdlib.h>

//declaração de variaveis globais para utilizar na pilha e no programa
int tam, topo = -1, valor;
int *pilha;

//empilha
void empilha()
{
	if(topo == tam - 1)
	{
		printf("\n **Pilha cheia**\n");
	}
	else
	{
		topo++;
		pilha[topo] = valor;
	}	
}

//desempilha
void desempilha()
{
	if(topo == -1)
	{
		printf("\n **Pilha vazia**\n");
	}
	else
	{
		valor = pilha[topo];
		topo--;
	}
}

void main()
{
    int i, z = 0;
    printf("\nqual o tamanho da pilha?\n");
    scanf("%d", &tam);

    pilha = (int*)malloc(tam*sizeof(int));
    if(pilha == NULL)
	{
		printf("memoria insuficiente\n");
	}
    else
    {
        for(i = 0; i<tam; i = i + 2)
        {
                valor = i;
                empilha();  
        }
        for(i = 0; i<tam; i = i + 2)
        {
            desempilha();
            printf("\no valor %d = %d \n", z++, valor);
        }
        free(pilha);
    }
system("pause");
}