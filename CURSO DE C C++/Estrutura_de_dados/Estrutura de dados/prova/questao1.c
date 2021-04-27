//bibliotecas
#include<stdio.h>
#include<stdlib.h>

//declaração de variaveis globais para utilizar na pilha e no programa
int tam, topo = -1, valor;
char *pilha;

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
//função principal
void main()
{
    //declaração de variaveis locais
    int z = 0, i;
    //entrada do tamanho da pilha
    printf("\nDiga o tamanho da frase(contando espacos em branco): \n");
    scanf("%d", &tam);

    //alocando memoria
    pilha = (char*)malloc(tam * sizeof(char));
    //verificando se foi alocado a memoria adequadamente
    if(pilha == NULL)
    {
        printf("\nMemoria insuficiente\n");
    }
    // caso tiver sido:
    else
    {
        //aviso
        printf("\nDigite a frase caracter por caracter(incluindo espacos em branco)\n");
        //leitura da frase caractere por carater 
        for(i = 0; i < tam; i++)
        {
            //limpa o buffer do teclado
            setbuf(stdin, NULL);
            //leitura dos caracteres
            printf("\nDigite o %do caracter: \n", z++);
            scanf("%c", &pilha[i]);
            valor = pilha[i];
            empilha();
        }
        //apenas pra organizar 
        printf("\nfrase invertida:\n");
        //mostra a frase invertida
        for(i = tam -1; i >= 0 ; i--)
        {
            setbuf(stdin, NULL);
            desempilha();
            valor = pilha[i];
            printf(" %c ", valor);
        }
        printf("\n");//espaço
        free(pilha);//libera memoria
    }
    system("pause");//fica parado

}