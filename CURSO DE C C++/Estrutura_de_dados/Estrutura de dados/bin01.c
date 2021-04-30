//bibliotecas
#include<stdio.h>
#include<stdlib.h>

//recebe ponteiro do vetor, tamanho do vetor
void bubbleSort(int *v, int N)
{
    //declaração de variaveis
    int i, continua, aux, fim = N;
    //laço do-while
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

//função de pesquisa binária
void pesquisaBinaria(int nomeVetor[], int procura, int tam)
{
    //declaração de variaveis
    int inicio = 0;
    int fim = tam -1;
    int meio = (inicio + fim) / 2;
    int cont = 0;

    while(procura != nomeVetor[meio] && inicio != fim)
    {
        if(procura > nomeVetor[meio])
        {
            inicio = meio + 1;
        }
        else
        {
            fim = meio;
        }
        meio = (inicio + fim) / 2;
        //conta quantas pesquisas foram feitas
        cont++;
    }
    if(nomeVetor[meio] == procura)
    {
        printf("\nvalor encontrado\n");
        //mostra quantas pesquisas foram feitas
        printf("foram feitas %d pesquisas\n", cont);
    }
    else
    {
        printf("\nvalor nao encontrado\n");
        //mostra quantas pesquisas foram feitas
        printf("foram feitas %d pesquisas\n", cont);
    }
}

//função principal
int main()
{
    //declaração de variaveis
    int i, leitura;
    //declarando vetor de 32 posições
    int vetor[32] = {24, 1, 10, 20, 17, 23, 12, 19, 25, 14, 31, 16, 6, 7, 27, 4, 26, 29, 28, 3, 2, 13, 30, 22, 21, 18, 5, 15, 32, 9, 11, 8};
    //espaço
    printf("\n");
    //chamada de função
    bubbleSort(vetor, 32);
    //titulo de impressão
    printf("os numeros ordenados sao: ");
    printf("\n");
    //imprimindo vetor ordenado
    for(i = 0; i < 32; i++)
    {
        printf("%d\t", vetor[i]);
    }
    //espaço
    printf("\n");
    //solicita o numero para pesquisa binária
    printf("Digite um numero para realizar pesquisa: ");
    scanf("%d", &leitura);
    //chamada de função para realizar pesquisa
    pesquisaBinaria(vetor, leitura, 32);
    //fica parado
    system("pause");
}