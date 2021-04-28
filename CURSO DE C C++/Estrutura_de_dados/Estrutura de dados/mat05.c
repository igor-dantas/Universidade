//bibliotecas
#include<stdio.h>
#include<stdlib.h>

int main()
{
    //declaração de variveis
    int i, j, soma = 0, LIN, COL;
    int **p;
    //leitura do numero linhas
    printf("Digite o numero de linhas: ");
    scanf("%d", &LIN);
    //leitura do numero de colunas
    printf("Digite o numero de colunas: ");
    scanf("%d", &COL);
    //alocando memoria
    p = (int **)malloc(LIN * sizeof(int));
    //alocando memoria
    for(i = 0; i < LIN; i++)
    {
        p[i] = (int *)malloc(COL * sizeof(int));
    }
    //testando se foi alocado corretamente
    if(p == NULL)
    {
        printf("\n**MEMORIA INSUFICIENTE**\n");
    }
    //caso tenha sido
    else
    {
        //populando matriz
        for ( i = 0; i < LIN; i++)
        {
            for  (j = 0; j < COL; j++)
            {
               printf("digite o valor do elemento p[%d][%d] = ", i, j);
               scanf("%3d", &p[i][j]);
               if(i == j)
               {
                   soma = soma + p[i][j];
               }
            }
        }
        //printando matriz na tela
        for ( i = 0; i < LIN; i++)
        {
            printf("\n");
            for  (j = 0; j < COL; j++)
            {
                printf("%d\t", p[i][j]);
            }
        }
        printf("\na soma dos elementos da diagonal da matriz eh: %d\n", soma);
         //liberando a memoria do vetor de ponteiros
        for(i = 0; i < LIN; i++)
        {
            free(p[i]);
        }
        //liberando aa memoria do ponteiro de ponteiro
        free(p);
    }
    system("pause");//fica parado
}