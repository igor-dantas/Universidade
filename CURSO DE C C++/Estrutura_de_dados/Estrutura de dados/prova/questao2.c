//bibliotecas
#include<stdio.h>
#include<stdlib.h>

//função principal
int main()
{
    //declaração de variaveis
    int *M, *N, tam, i, c = 0, b = 0, op, check;

    //definindo tamanho dos vetores
    printf("\nDigite o tamanho dos vetores M e N: ");
    scanf("%d", &tam);

    //alocação de memoria
    M = (int*)malloc(tam * sizeof(int));
    N = (int*)malloc(tam * sizeof(int));
    //verificação se foi alocando corretamente
    if(M == NULL || N == NULL)
	{
		printf("memoria insuficiente\n");
	}
    //caso tenha alocado corretamente:
    else
    {
        //leitura dos valores Do vetor M
        for(i = 0; i < tam; i++)
        {
            printf("digite o %do valor do vetor M: ", c++);
            scanf("%d", &M[i]);
        }
        //da espaço para organizar o programa
        printf("\n\n");
        //leitura dos valor do vetor N
        for(i = 0; i < tam; i++)
        {
            printf("digite o %do valor do vetor N: ", b++);
            scanf("%d", &N[i]);
        }
        //limpa tela
        system("cls");
        //Menu com laço do-while
        do
        {
            //menu
            printf("==========MENU==========");
            printf("\n1- Mostra o produto de M e N.\n");
            printf("\n2-Mostra a soma de M e N.\n");
            printf("\n3-Mostra a diferenca de M e N.\n");
            printf("\n4-Sair.\n");
            //espaço para organização
            printf("\n\n");
            //leitura da opcao
            printf("Digite a opcao: ");
            scanf("%d", &op);
            //opções do menu
            switch (op)
            {
                //multiplicação
                case 1:
                c = 0;
                b = 0;
                for(i = 0; i < tam; i++)
                {
                    printf("\nM[%d] * N[%d] = %d\n", c++, b++, M[i] * N[i]); 
                }
                //espaço
                printf("\n");
                //pergunta para voltar ou não pro menu
                printf("\nDeseja voltar ao menu? 0 - sim  1 - nao\n");
                scanf("%i", &check);
                //condições caso check receba 1 encerra caso receba 0 limpa tela e volta pro menu
                if(check == 1)
                {
                    printf("\nO programa ira encerrar...\n");
                    op = 4;
                }
                else
                {
                    system("cls");
                }
                printf("\n\n");
                printf("\n\n");
                break;
                //soma
                case 2:
                    c = 0;
                    b = 0;
                    for(i = 0; i < tam; i++)
                    {
                        printf("\nM[%d] + N[%d] = %d\n", c++, b++, M[i] + N[i]);
                    }
                    //espaço
                    printf("\n");
                    //pergunta para voltar ou não pro menu
                    printf("\nDeseja voltar ao menu? 0 - sim  1 - nao\n");
                    scanf("%i", &check);
                    //condições caso check receba 1 encerra caso receba 0 limpa tela e volta pro menu
                    if(check == 1)
                    {
                        printf("\nO programa ira encerrar...\n");
                        op = 4;
                    }
                    else
                    {
                        system("cls");
                    }
                    printf("\n\n");
                    printf("\n\n");
                    break;
                //subtração
                case 3:
                    c = 0;
                    b = 0;
                    for(i = 0; i < tam; i++)
                    {
                        printf("\nM[%d] - N[%d] = %d\n", c++, b++, M[i] - N[i]);
                    }
                    //espaço
                    printf("\n");
                    //pergunta para voltar ou não pro menu
                    printf("\nDeseja voltar ao menu? 0 - sim  1 - nao\n");
                    scanf("%i", &check);
                    //condições caso check receba 1 encerra caso receba 0 limpa tela e volta pro menu
                    if(check == 1)
                    {
                        printf("\nO programa ira encerrar...\n");
                        op = 4;
                    }
                    else
                    {
                        system("cls");
                    }
                    printf("\n\n");
                    break;
                //saida do menu e do programa
                case 4:
                    printf("\nO programa ira encerrar...\n");
                    op = 4;
                    break;
            }
        } while (op != 4);//fim do menu do-while
        free(M);//limpando memoria de M
        free(N);//limpando memoria de N
    }
    system("pause");// fica parado
}