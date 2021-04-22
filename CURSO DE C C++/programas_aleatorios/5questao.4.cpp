#include<stdio.h>
#include<stdlib.h>
#define lin 6
#define col 6
int main()
{
    int matriz[lin][col], contador = 0;
    for(int i = 0; i < lin; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("Digite o valor referente a linha %i e a coluna %i \n:", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }
    for(int i = 0; i < lin; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(matriz[i][j] > 10)
            {
                contador++;
            }
        }
    }
    printf("a matriz possui %i valores acima de 10 ", contador);
}