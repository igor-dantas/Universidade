#include<stdio.h>
#include<stdlib.h>
int main()
{
    char sexo[5], sexo_maisalto[5];
    int homem=0, mulher=0;
    float altura[5], maioralt, media = 0.0, maior, menor, soma =0.0;
    for(int i = 0; i < 5; i++)
    {
        printf("\n Digite a altura em metros\n:");
        scanf("%f", &altura[i]);
        printf("\n Digite M para mulher ou H para homem\n:");
        scanf("%s", &sexo[i]);
        
        if(sexo[i] == 'M')
        {
            mulher++;
            soma = soma + altura[i];
            media = soma / mulher;
        }
        else if(sexo[i] == 'H')
        {
            homem++;
        }
        
    }
    menor = altura[0];
    for(int i = 0; i < 5; i++)
    {
        if(altura[i] < menor)
        {
             menor = altura[i];
        }
    }
    maioralt = altura[0];
    for(int i = 0; i < 5; i++)
    {
        if(altura[i] > maior)
        {
            maioralt = altura[i];
            sexo_maisalto[5] = sexo[i];
        }
    }
    printf("\nA menor altura do grupo eh %.2f", menor);
    printf("\nA quantidade de homens %i", homem);
    printf("\nA media das alturas das mulheres eh %.2f", media);
    printf("\no sexo da pessoa mais alta eh  %s", sexo_maisalto);
}