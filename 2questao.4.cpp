#include<stdio.h>
#include<stdlib.h>

#define TAM 40
int main()
{
    int vetor[TAM], maioridade, menoridade;
    for(int i = 0; i < TAM; i++)
    {
        printf("Digite as idades\n:");
        scanf("%i", &vetor[i]);
        system("cls");
    }
    maioridade = vetor[0];
    for(int i = 0; i < TAM; i++)
    {
        if(vetor[i] > maioridade)
        {
            maioridade = vetor[i];
        }
    }
    menoridade = vetor[0];
    for(int i = 0; i < TAM; i++)
    {
        if(vetor[i] < menoridade)
        {
             menoridade = vetor[i];
        }
    }
    printf("As idades selecionadas sao: ");
    for(int i = 0; i < TAM; i++)
    {
        printf("%i ", vetor[i]);
    }
    printf("\nA soma da maior e da menor idade eh: %i anos", menoridade+maioridade);
    return 0;
}