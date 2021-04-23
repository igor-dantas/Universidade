//bibliotecas
#include<stdio.h>
#include<stdlib.h>

//declaração de variaveis globais para utilizar na pilha e no programa
int tam = 8, topo = -1, valor;
int pilha[8];

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

int main()
{
    int placa, z = 0, i, aux = 0;

    for(i = 0; i<tam; i++)
    {
        printf("Digite a placa do %do carro: ", z++);
        scanf("%d", &pilha[i]);
        valor = pilha[i];
        empilha();
    }
    printf("Qual a placa que voce deseja consultar: ");
    scanf("%d", &placa);
    for(i = 0; i < tam; i++)
    {
        desempilha();
       
        if(pilha[i] == placa)
        {
            aux = 1;
        }
    }
    if(aux = 1)
    {
        printf("\no carro da placa %d esta na vila\n", placa);
    }
    else
    {
        printf("\no carro da placa %d nao esta na vila\n", placa);
    }
    printf("\n");
    for(i = tam -1; i >= 0 ; i--)
    {
        if(pilha[i] == placa)
        {
           break;
        }
        else 
        {
             printf("\nO carro da placa %d precisa sair para o carro da placa %d sair.\n", pilha[i], placa);
        }
    }
    system("pause");    
}