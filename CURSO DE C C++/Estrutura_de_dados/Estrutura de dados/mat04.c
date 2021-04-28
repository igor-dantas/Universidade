#include<stdio.h>
#include<stdlib.h>
#define LIN 4
#define COL 5

int main()
{
    int i, j, aux = 0;
    int **p;

    p = (int **)malloc(LIN * sizeof(int));

    for(i = 0; i < LIN; i++)
    {
        p[i] = (int *)malloc(COL * sizeof(int));
    }
    if(p == NULL)
    {
        printf("\n**MEMORIA INSUFICIENTE**\n");
    }
    else
    {
        //populando com numeros pares
        for ( i = 0; i < LIN; i++)
        {
            for  (j = 0; j < COL; j++)
            {
               p[i][j] = aux;
               aux = aux + 2;
            }
        }
        //imprimindo a matriz
        for(i = 0; i < LIN; i++)
        {
            for ( j = 0; j < COL; j++)
            {
                printf(" %3d ", p[i][j]);
            }
            printf("\n");
        }
        //liberando a memoria do vetor de ponteiros
        for(i = 0; i < LIN; i++)
        {
            free(p[i]);
        }
        //liberando aa memoria do ponteiro de ponteiro
        free(p);
    }
    return 0;
}