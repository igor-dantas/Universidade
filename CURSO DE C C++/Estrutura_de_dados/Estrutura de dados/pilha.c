//biblioteca
#include<stdio.h>
#include<stdlib.h>

//inicializa
	int topo = -1;

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

//acesso ao topo
void acessoTopo()
{
	if(topo == -1)
	{
		printf("\n **Pilha vazia**\n");
	}
	else
	{
		printf("\nElemento do topo: %d\n", pilha[topo]);
	}
}

//situação
void situacaoPilha()
{
	if(topo== -1)
	{
		printf("\n **Pilha vazia**\n");
	}
	else
	{
		printf("\nTotal de elementos na pilha: %d\n", topo+1);
		printf("\nEspaco disponivel na pilha: %d\n", tam-(topo+1));
	}
}
