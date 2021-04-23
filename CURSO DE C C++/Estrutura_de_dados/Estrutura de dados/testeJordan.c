#include <stdio.h>
#include <stdlib.h>

//Inicialização
int tam = 2, topo = -1, valor, retornar;
int pilha[2];

//função empilha ou push
void empilha()
{
    if (topo == tam - 1)

    {
        printf("\n  * Pilha Cheia * \n");
    }
    else
    {
        topo++;
        pilha[topo] = valor;
    }
}

//desempilhar a pilha
void desempilha()
{
    if (topo == -1)
    {
        printf("\n  * Pilha Vazia * \n");
    }
    else
    {
        valor = pilha[topo];
        topo--;
    }
}

//função de limpar tela
void clear();
void linha();

//função principal
int main()
{

    do
    {

        int operador, t1, t2;
        float resultado;
        clear();

        linha();
        printf("    CALCULADORA USANDO PILHA\n");
        linha();

        printf("Digite o primeiro valor: ");
        scanf("%d", &valor);
        empilha();

        printf("Digite o segundo valor: ");
        scanf("%d", &valor);
        empilha();

        printf("Escolha a operacao: \n 1--> '+'\n 2--> '-'\n 3--> '*' \n 4--> '/' \n");
        scanf("%d", &operador);
        switch (operador)
        {

            case 1: 
            
                desempilha();
                resultado = valor;
                desempilha();
                resultado = valor + resultado;
                break;
            
            case 2:
            
                desempilha();
                resultado = valor;
                desempilha();
                resultado = valor - resultado;
                break;
            
            case 3: 
            
                desempilha();
                resultado = valor;
                desempilha();
                resultado = valor * resultado;
                break;
            
            
            case 4:
            
                desempilha();
                resultado = valor;
                desempilha();
                resultado = valor / resultado;
                break;
        }
        
        
            
            
        

            printf("\n O Resultado eh: %.2f\n\n", resultado);
            printf("Deseja continuar ?\n 0 -- sim , 1-- nao: ");
            scanf("%d", &retornar);

        }while (retornar == 0);

    system("pause");
    clear();
    return 0;
}

void clear()
{
    system("cls");
}
void linha()
{
    printf("\n+==============================+\n\n");
}