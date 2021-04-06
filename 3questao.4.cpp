#include<stdio.h>
#include<stdlib.h>

#define TAM 6
int main()
{
    int vetor[TAM], par = 0, impar = 0, resultado;
    for(int i = 0; i < TAM; i++)
    {
        printf("DIGITE 6 VALORES\n:");
        scanf("%i", &vetor[i]);
    }
    for(int i = 0; i < TAM; i++)
    {
        resultado = vetor[i] % 2;
        if(resultado == 0)
        {
            par++;
        }
        else if(resultado == 1)
        {
            impar++;
        }
    }
    printf("A quantidade de numeros par eh %i. \n A quantidade de numeros impar eh %i.", par, impar);
}