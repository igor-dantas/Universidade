#include<stdio.h>
#include<stdlib.h>

#define TAM 50
int main()
{
    int vetor[TAM], menor = 0, maior = 0;
    for(int i = 0; i < TAM; i++)
    {
        printf("digite %i valores\n:", TAM);
        scanf("%i", &vetor[i]);
        system("cls");
    }
    for(int i = 0; i < TAM; i++)
    {
        if(vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }
    menor = vetor[0];
    for(int i = 0; i < TAM; i++)
    {
        if(vetor[i] < menor)
        {
             menor = vetor[i];
        }
    }
    printf("O menor valor eh %i \nE o maior eh %i", menor, maior);
}