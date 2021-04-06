#include<stdio.h>
#include<stdlib.h>

int main()
{
    float soma = 0, notasmedias[10], media;
    int alunosaprovados = 0, alunosreprovados=0;
    for(int i = 0; i < 10; i++)
    {
        printf("DIGITE A NOTA MEDIA DO %io ALUNO ", i+1);
        scanf("%f", &notasmedias[i]);
        soma = (soma+ notasmedias[i]);
        media = soma / 10;
    }
   
    for(int i = 0; i < 10; i++)
    {
        if(notasmedias[i] >= 7.0)
        {
            alunosaprovados++;
        }
        else if(notasmedias[i] < 7.0)
        {
            alunosreprovados++;
            
        }
    }
    printf("\na quantidade de alunos aprovados eh %i", alunosaprovados);
    printf("\na quantidade de alunos reprovados eh %i", alunosreprovados);
    printf("\na media da classe eh %.2f\n", media);
}