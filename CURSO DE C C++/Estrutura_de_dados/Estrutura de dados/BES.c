//bibliotecas
#include<stdio.h>
#include<stdlib.h>

//struct
typedef struct 
{
    float notaAv1, notaAv2;
    char nome[20];
    int matricula;
} alunos;

//função principal
int main()
{
    //declaração de variaveis
    int i, op, m = 0;
    float maiorN = 0.0 , teste = 0.0, media = 0.0, soma, mediaM;
    
    //declarando struct
    alunos aluno[3];
    //cadastrando os nomes dos alunos
    for(i = 0; i < 3; i++)
    {
        printf("Digite o nome do %do aluno: ", i);
        scanf("%s", aluno[i].nome);
    }
    //cadastrando notas
    for(i = 0; i < 3; i++)
    {
        printf("Digite a nota da Av1 do %s: ", aluno[i].nome);
        scanf("%f", &aluno[i].notaAv1);
        printf("Digite a nota da Av2 do %s: ", aluno[i].nome);
        scanf("%f", &aluno[i].notaAv2);
    }
    do
    {
        printf(">>>>>>>>>>MENU<<<<<<<<<<");
        printf("\n1 - Maior nota da AV1.\n");
        printf("\n2 - Maior nota da AV2.\n");
        printf("\n3 - Maior media geral.\n");
        printf("\n4 - Sair.\n");
        printf("\n");
        printf("Digite a opcao que deseja: ");
        scanf("%d", &op);
        switch (op)
        {
            case 1:
                for(i = 0; i < 3; i++)
                {
                    if(aluno[i].notaAv1 > maiorN)
                    {
                        maiorN = aluno[i].notaAv1;
                        teste = teste + aluno[i].notaAv1;
                        if(teste == 30.0)
                        {
                            printf("\nOs 3 alunos tiraram 10.0 na av1\n");
                        }
                       
                    }
                }
                printf("\nA maior nota da AV1 eh: %.2f\n", maiorN);
                break;
            case 2:
                for(i = 0; i < 3; i++)
                {
                    if(aluno[i].notaAv2 > maiorN)
                    {
                        maiorN = aluno[i].notaAv2;
                        teste = teste + aluno[i].notaAv2;
                        if(teste == 30.0)
                        {
                            printf("\nOs 3 alunos tiraram 10.0 na av2\n");
                        }
                    }
                }
                printf("\nA maior nota da AV2 eh: %.2f\n", maiorN);
                break;
            case 3:
                for ( i = 0; i < 3; i++)
                {
                    soma = aluno[i].notaAv1 + aluno[i].notaAv2;
                    media = soma / 2.0;
                    if(media > mediaM)
                    {
                        mediaM = media;
                        m = i;
                    }

                }
                printf("\n O aluno %s tem a media geral mais alta, media: %.2f  \n", aluno[m].nome, mediaM );
                break;
            case 4:
                printf("o programa ira encerrar...");
                op = 4;
                break;
                
        
       
        }

        
    } while (op == 4);
    system("pause");

}
