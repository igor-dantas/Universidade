#include<stdio.h>
#include<stdlib.h>

int main ()
{
    char sexo[15], sexo_maisalto;
    int mulher=0, homem=0;
    float altura[15], maioralt, menor, soma = 0.0, media;
    for(int i = 0; i < 15; i++)
    {
        printf("\nDigite a altura\n:");
        scanf("%.2f", &altura[i]);
        for(int j = 0; j < 15; j++)
        {
            printf("\nDigite M para mulher ou H para homem");
            scanf("%c", &sexo[j]);
            if(sexo[i] == 'M' || sexo[i] == 'm')
        {
            mulher++;
            soma = soma +altura[i];
            media = soma / mulher;
        }
        else if(sexo[i] == 'H' || sexo[i] == 'h')
        {
            homem++; // ok quantidade de homens
        }
        }
        

    }
    menor = altura[0];
    for(int i = 0; i < 15; i++)
    {
        if(altura[i] < menor)
        {
             menor = altura[i];
        }
    }
    maioralt = altura[0];
    for(int i = 0; i < 15; i++)
    {
        if(altura[i] > maioralt)
        {
            maioralt = altura[i];
            sexo_maisalto = sexo[i];
        }
        
    }
    printf("\nA menor altura do grupo eh %.2f", menor);
    printf("\nA quantidade de homens %i", homem);
    printf("\nA media das alturas das mulheres eh %.2f", media);
    
}