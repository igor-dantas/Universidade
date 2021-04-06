#include<stdio.h>
#include<stdlib.h>
int main()
{
    char sexo [15];
    float alturaM[x], alturaH[y], x=0, y=0, media = 0;
    for(int i = 0; i < 15; i++)
    {
            printf("DIGITE M PARA MULHER OU H PARA HOMEM\n:");
            scanf("%c", &sexo[i]);
            system("cls");
            if(sexo == 'M' || sexo == 'm')
            {
                x++;
            }
            else if(sexo == 'H' || sexo == 'h')
            {
                y++;
            }
    }
    for(int j = 0; j < x; j++)
    {
        printf("\nDIGITE A ALTURA DAS MULHERES\n:");
        scanf("%.2f", &alturaM[j]);
        media = (media + vetor[j])/x;
        printf("A media das alturas das mulheres eh %.2f metros ", media);
    }
    for(int k = 0; k < y; j++)
    {
        printf("\nDIGITE A ALTURA DOS HOMENS\n:");
        scanf("%.2f", &alturaM[k]);
    }
    printf("\nO numero de homens do grupo eh %i", y);
    printf("\no numero de mulheres do grupo eh %i", x);


}