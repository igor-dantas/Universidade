void pesquisaBinaria(int nomeVetor[], int procura, int tam)
{
    int inicio = 0;
    int fim = tam -1;
    int meio = (inicio + fim) / 2;

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
    }
    if(nomeVetor[meio] == procura)
    {
        printf("\nvalor encontrado\n");
    }
    else
    {
        printf("\nvalor nao encontrado\n");
    }
}