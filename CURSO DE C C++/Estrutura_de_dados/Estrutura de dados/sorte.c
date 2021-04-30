//bibliotecas
#include<stdio.h>
#include<stdlib.h>

//recebe ponteiro do vetor, tamanho do vetor
void bubbleSort(int *v, int N)
{
    int i, continua, aux, fim = N;

    do
    {
        continua = 0;
        for(i = 0; i < fim - 1; i++)
        {
            if(v[i] > v[i+1])
            {
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
                continua = i;
            }
        }
        fim--;
    } while (continua != 0);
}

//função principal
int main()
{
    //declaração de variaveis
    int i, vetor[5];
    //leitura dos valores do vetor
    for(i = 0; i < 5; i++)
    {
        printf("\nDigite o %do numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    //espaço
    printf("\n");
    //chamada de função
    bubbleSort(vetor, 5);
    //titulo de impressão
    printf("os numeros ordenados sao: ");
    printf("\n");
    //imprimindo vetor ordenado
    for(i = 0; i < 5; i++)
    {
        printf("%d\t", vetor[i]);
    }
    //espaço
    printf("\n");
    //fica parado
    system("pause");
}