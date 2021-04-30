#include<stdio.h>
#include<stdlib.h>

//struct fila
struct Fila
{
    int capacidade;
    float *dados;
    int primeiro;
    int ultimo;
    int nItens;
};

//cria a fila
void criarFila(struct Fila *f, int c)
{
    f->capacidade = c;
    f->dados = (float *)malloc(f->capacidade * sizeof(float));
    f->primeiro = 0;
    f->ultimo = -1;
    f->nItens = 0;
}

//insere elemento no final da fila
void inserir(struct Fila *f, int v)
{
    if(f->ultimo == f->capacidade - 1)
    {
        f->ultimo = -1;//representação circular
    }
    f->ultimo++;
    //incremento ultimo e insere
    f->dados[f->ultimo] = v;
    //mais um item inserido
    f->nItens++;
}

//remove o primeiro elemento
int remover(struct Fila *f)
{
    f->primeiro++;
    if(f->primeiro == f->capacidade)
    {
        f->primeiro = 0;
    }
    f->nItens--;
    return 1;
}

//testa se a fila esta vazia
int estaVazia(struct Fila *f)
{
    //retorna se a fila esta vazia
    return(f->nItens);
}

//testa se a fila esta cheia
int estaCheia(struct Fila *f)
{
    //retorna verdadeiro se a fila está cheia
    return (f->nItens == f->capacidade);
}

int mostrarFila(struct Fila *f)
{
    int cont, i;
    i = f->primeiro;

    for(cont = 0; cont < f->nItens; cont++)
    {
        printf("%.2f\n", f->dados[i++]);
        if(i == f->capacidade)
        {
            i = 0;
        }
    }
    printf("\n\n");
}
int primeiroElemento(struct Fila *f)
{
    printf("\no primeiro elemento eh: %.2f\n", f->dados[f->primeiro]);
    printf("\n\n");
}

int ultimoElemento(struct Fila *f)
{
    printf("\no ultimo elemento da fila eh: %.2f\n", f->dados[f->ultimo]);
    printf("\n\n");
}
int tamanhoFila(struct Fila *f)
{
    printf("\nexistem %d pessoas na fila\n", f->nItens);
    printf("\n\n");
}


void liberarFila(struct Fila *f)
{
    free(f->dados);
}

int main()
{
    int opcao, capa, ret;
    float valor;
    struct Fila umaFila;
    
    //criar a fila
    printf("\n Qual a capacidade da fila? ");
    scanf("%d", &capa);
    criarFila(&umaFila, capa);

    //mostrar menu
    while(1)
    {
        printf("\n1 - inserir elemento\n2 - Remover elemento\n3 - Mostrar fila\n4 - Primeiro da fila\n5 - Ultimo elemento da fila\n6 - tamanho da fila\n0 - Sair\n\nopcao:");
        scanf("%d", &opcao);
        switch (opcao)
        {
            case 0:  //liberar memoria
                liberarFila(&umaFila);
                return 0;

            case 1: // insere elemento
                if (estaCheia(&umaFila))
                {
                    printf("\nFila Cheia\n\n");
                }
                else
                {
                    printf("\nEntre com o valor a ser inserido: ");
                    scanf("%f", &valor);
                    inserir(&umaFila, valor);
                }
                break;

            case 2: //remover elemento
                ret = estaVazia(&umaFila);
                if(ret == 0)
                {
                    printf("\nFila vazia!\n");
                }
                else
                {
                    ret = remover(&umaFila);
                    if(ret == 1)
                    {
                        printf("Valor removido com sucesso\n\n");
                    }
                }
                break;

            case 3://mostrar fila
                ret = estaVazia(&umaFila);
                 if(ret == 0)
                {
                    printf("\nFila vazia!\n");
                }
                else
                {
                    printf("\nConteudo da fila: \n");
                    mostrarFila(&umaFila);
                }
                break;
            case 4://mostra primeiro da fila
                ret = estaVazia(&umaFila);
                if(ret == 1)
                {
                    printf("\nFila Vazia!!\n");
                }
                else
                {
                    primeiroElemento(&umaFila);
                }
                break;
            case 5://mostra o ultimo da fila
                ret = estaVazia(&umaFila);
                if(ret == 1)
                {
                    printf("\nFila Vazia!!\n");
                }
                else
                {
                    ultimoElemento(&umaFila);
                }
                break;
            case 6://mostra o tamanho da fila
                 ret = estaVazia(&umaFila);
                if(ret == 1)
                {
                    printf("\nFila Vazia!!\n");
                }
                else
                {
                    tamanhoFila(&umaFila);
                }
                break;
            default:
                printf("\nOpcao invalida!!\n\n");
        }
    }
    return 0;
}