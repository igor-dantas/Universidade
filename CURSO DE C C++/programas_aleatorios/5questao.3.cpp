#include<stdio.h>
#include<stdlib.h>
int main()
{
        int hab, filho, salarioabaixo=0, TAM;
        float salario[TAM], soma = 0.0, media, media_filho;
        printf("quantos habitantes?\n");
        scanf("%i", &hab);
        TAM = hab;
        for(int i = 0; i< TAM; i++)
        {
            printf("qual o salario de cada habitante?\n");
            scanf("%f", &salario[i]);
            soma = soma + salario[i];
            media = soma / TAM;
             if(salario[i] <= 250.0)
            {
                salarioabaixo++;
            }
        }
        printf("qual o total de filhos dos habitantes?\n");
        scanf("%i", &filho);
        media_filho = filho / TAM;
        
        printf("A media salarial eh R$ %.2f\n", media);
        printf("A media de filho por habitante eh %.2f\n", media_filho);
        printf("quantidade de pessoas com salario ate 250 reais %i\n", salarioabaixo);
        return 0;
}