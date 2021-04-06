#include<stdio.h>
#include<stdlib.h>
int main()
{
    int vetor[10], maior;
    for(int i = 0; i < 10; i++)
    {
        printf("Digite 10 valores\n:");
        scanf("%i", &vetor[i]);
        system("cls");
    }
    maior = vetor[0];
    for(int i = 0; i < 10; i++)
    {
        if(vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }
    printf("Vetor: ");
    for(int i = 0; i < 10; i++)
    {
        printf("%i ", vetor[i]);
    }

    printf("\no maior valor eh %i", maior);
}