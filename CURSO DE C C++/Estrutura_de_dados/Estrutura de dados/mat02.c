#include<stdio.h>

int main()
{
    float mat[2][2] = {{2, 3}, {4, 5}};
    int i, j;
    for(i = 0; i < 2; i++)
    {
        printf("\n");
        for(j = 0; j < 2; j++)
        {
            printf("%.2f \t", mat[i][j]);
        }
    }
    return 0;
}