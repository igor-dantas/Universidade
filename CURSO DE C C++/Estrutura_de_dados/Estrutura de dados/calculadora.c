#include<stdio.h>
#include<stdlib.h>

int tam = 2, topo = -1, valor;
int pilha[2];

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
	int operador;
	float resultado;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &valor);
	empilha();
	
	printf("Digite o segundo valor: ");
	scanf("%d", &valor);
	empilha();	
	
	printf("\nEscolha a operacao: \n 1-> '+'\n 2->'-'\n 3->'*'\n 4->'/'\n");
	scanf("%d", &operador);
	
	if(operador == 1)
	{
		desempilha();
		resultado = valor;
		desempilha();
		resultado = valor + resultado;
	}
	if(operador == 2)
	{
		desempilha();
		resultado = valor;
		desempilha();
		resultado = valor - resultado;
	}
	if(operador == 3)
	{
		desempilha();
		resultado = valor;
		desempilha();
		resultado = valor * resultado;
	}
	if(operador == 4)
	{
		desempilha();
		resultado = valor;
		desempilha();
		resultado = valor / resultado;
	}
	
	printf("\no resultado e: %.2f\n", resultado);
	
	return 0;
}
