//bibliotecas
#include<stdio.h>
#include<stdlib.h>
//declaração de variaveis globais para o uso de funções
int i, m = 0;
char op;
int check;
float maiorN = 0.0, media[3], soma, mediaM;
//struct
typedef struct 
{
    float notaAv1, notaAv2;
    char nome[20];
    int matricula;
    //obs uso de int e não long long int, pois o numero da matricula da uepa não necessita de long long int
} alunos;
//declarando struct global para uso de funções
alunos  aluno[3];
//função principal
int main()
{
    //looping para cadastro de alunos
    for(i = 0; i < 3; i++)
    {
        //chamada de função
        cadastro_aluno();
    }
    //looping para cadastro de notas
    for(i = 0; i < 3; i++)
    {
        //chamada de função
        cadastro_notas();
    }
    //laço do-while para menu
    do
    {
        //menu
        printf(">>>>>>>>>>MENU<<<<<<<<<<");
        printf("\n{a} - Maior nota da AV1.\n");
        printf("\n{b} - Maior nota da AV2.\n");
        printf("\n{c} - Maior media geral.\n");
        printf("\n{d} - Sair.\n");
        printf("\n");
        //digite a opção
        printf("Digite a opcao que deseja: ");
        setbuf(stdin, NULL);
        scanf("%c", &op);
        //switch para ler as opções
        switch (op)
        {
            case 'a':
                //limpa tela
                system("cls");
                //chamada de função
                maiorAV1();
                //teste para voltar para o menu
                printf("\nDeseja continuar?\n");
                printf("\n0 - sim / 1 - nao\n");
                scanf("%d", &check);
                break;
            case 'b':
                //limpa tela
                system("cls");
                //chamada de função
                maiorAV2();
                //teste para voltar para o menu
                printf("\nDeseja continuar?\n");
                printf("\n0 - sim / 1 - nao\n");
                scanf("%d", &check);
                break;
            case 'c':
                //limpa tela
                system("cls");
                //chamada de funçãp
                mediaGeral();
                //teste para voltar para o menu
                printf("\nDeseja continuar?\n");
                printf("\n0 - sim / 1 - nao\n");
                scanf("%d", &check);
                break;
            case 'd':
                encerrar();
                break;
        }
    } while(check != 1);//fim do laço do while
    system("pause");
}
//função de cadastro de alunos
void cadastro_aluno()
{
    //cadastrando nome dos alunos
    printf("Digite o nome do %do aluno: ", i + 1);
    //limpa buffer do teclado
    setbuf(stdin, NULL);
    scanf("%s", aluno[i].nome);
    //leitura de matricula dos alunos
    printf("Digite a matricula do aluno: %s :", aluno[i].nome);
    scanf("%d", &aluno[i].matricula);
}
//função de cadastro de notas
void cadastro_notas()
{
    //leitura de notas da av1
    printf("Digite a nota da Av1 do %s: ", aluno[i].nome);
    scanf("%f", &aluno[i].notaAv1);
    //leitura de notas av2
    printf("Digite a nota da Av2 do %s: ", aluno[i].nome);
    scanf("%f", &aluno[i].notaAv2);
}
//função para dizer a maior nota da Av1
void maiorAV1()
{
    //"calculo" de maior nota
    for(i = 0; i < 3; i++)
    {
        if(aluno[i].notaAv1 > maiorN)
        {
            maiorN = aluno[i].notaAv1;
            //m recebe i para poder dar o nome exato do aluno, caso seja um só
            m = i;
        }
    }
    //condições para exibir alunos empatados nas notas
    if(aluno[0].notaAv1 == aluno[1].notaAv1 && aluno[0].notaAv1 == aluno[2].notaAv1 || aluno[1].notaAv1 == aluno[0].notaAv1 && aluno[1].notaAv1 == aluno[2].notaAv1)
    {
        printf("os 3 alunos: %s, %s, %s tem nota igual: %.2f",aluno[0].nome, aluno[1].nome, aluno[2].nome, aluno[0].notaAv1);
    }
    else if(aluno[0].notaAv1 == aluno[1].notaAv1)
    {
        printf("existem dois alunos com as maiores notas, %s com %.2f pontos e o %s com %.2f pontos", aluno[0].nome,aluno[0].notaAv1, aluno[1].nome, aluno[1].notaAv1 );
    }
    else if(aluno[0].notaAv1 == aluno[2].notaAv1)
    {
        printf("existem dois alunos com as maiores notas, %s com %.2f pontos e o %s com %.2f pontos", aluno[0].nome,aluno[0].notaAv1, aluno[2].nome, aluno[2].notaAv1 );
    }
    else if(aluno[1].notaAv1 == aluno[2].notaAv1)
    {
        printf("existem dois alunos com as maiores notas, %s com %.2f pontos e o %s com %.2f pontos", aluno[1].nome, aluno[1].notaAv1, aluno[2].nome, aluno[2].notaAv1 );
    }
    else
    {
        printf("\nA maior nota da AV1 eh: %.2f do aluno %s\n", maiorN, aluno[m].nome);
    }
}
//função para dizer a maior nota da Av2
void maiorAV2()
{
    //"calculo" de maior nota av2
    for(i = 0; i < 3; i++)
    {
        if(aluno[i].notaAv2 > maiorN)
        {
            maiorN = aluno[i].notaAv2;
            //m recebe i para dar o exato nome do aluno com maior nota, caso seja um só
            m = i;
        }
    }
    //condições para exibir alunos empatados nas notas
    if(aluno[0].notaAv2 == aluno[1].notaAv2 && aluno[0].notaAv2 == aluno[2].notaAv2 || aluno[1].notaAv2 == aluno[0].notaAv2 && aluno[1].notaAv2 == aluno[2].notaAv2)
    {
        printf("os 3 alunos: %s, %s, %s tem nota igual: %.2f",aluno[0].nome, aluno[1].nome, aluno[2].nome, aluno[0].notaAv2);
    }
    else if(aluno[0].notaAv2 == aluno[1].notaAv2)
    {
        printf("existem dois alunos com as maiores notas, %s com %.2f pontos e o %s com %.2f pontos", aluno[0].nome,aluno[0].notaAv2, aluno[1].nome, aluno[1].notaAv2 );
    }
    else if(aluno[0].notaAv2 == aluno[2].notaAv2)
    {
        printf("existem dois alunos com as maiores notas, %s com %.2f pontos e o %s com %.2f pontos", aluno[0].nome,aluno[0].notaAv2, aluno[2].nome, aluno[2].notaAv2 );
    }
    else if(aluno[1].notaAv2 == aluno[2].notaAv2)
    {
        printf("existem dois alunos com as maiores notas, %s com %.2f pontos e o %s com %.2f pontos", aluno[1].nome, aluno[1].notaAv2, aluno[2].nome, aluno[2].notaAv2 );
    }
    else
    {
        printf("\nA maior nota da AV2 eh: %.2f do aluno %s\n", maiorN, aluno[m].nome);
    }
}
//função de media geral mais alta
void mediaGeral()
{
    //calculo da media geral
     for ( i = 0; i < 3; i++)
     {
        //recebe notas da av1 e soma com av2
        soma = aluno[i].notaAv1 + aluno[i].notaAv2;
        //caculo de media armazenado em vetor para fazer comparações com outras medias
        media[i] = soma / 2.0;
        if(media[i] > mediaM)
        {
            mediaM = media[i];
            //m recebe i para dar  nome do exato aluno com maior media, caso seja um só
            m = i;
        }
    }
    //comparação caso tenha medias empatadas
    if(media[0] == media[1] && media[1] == media[2] && media[0] == 2)
    {
        printf("\nOs alunos %s, %s e %s tem medias iguais: %.2f\n", aluno[0].nome, aluno[1].nome, aluno[2].nome, media[0]);
    }
    else if(media[0] == media[1])
    {
        m = 0;
        printf("\nOs alunos %s, %s tem medias iguais a %.2f\n", aluno[0].nome, aluno[1].nome, media[0]);
    }
    else if(media[1] == media[2])
    {
        printf("\nOs alunos %s, %s tem medias iguais a %.2f\n", aluno[1].nome, aluno[2].nome, media[1]);
    }
    else
    {
        printf("\n O aluno %s tem a media geral mais alta, media: %.2f  \n", aluno[m].nome, mediaM );
    }
   
}
//função para encerrar o programa
void encerrar()
{
    printf("o programa ira encerrar...\n");
    check = 1;
}