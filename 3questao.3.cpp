#include<stdio.h>
#include<stdlib.h>
int main()
{
    int voto, c1 = 0, c2 = 0, c3 = 0, c4 = 0, vtb = 0, vtn = 0;
    do
    {
        printf("\t\tELEICAO 2021\t\t\n");
        printf("\t\t0-PARA SAIR\n");
        printf("\t\t1-Candidato 1\n");
        printf("\t\t2-Candidato 2\n");
        printf("\t\t3-Candidato 3\n");
        printf("\t\t4-Candidato 4\n");
        printf("\t\t5-VOTOS NULOS\n");
        printf("\t\t6-VOTOS BRANCOS\n");
        printf("\n\nDIGITE O SEU VOTO\n:");
        scanf("%i", &voto);
        system("cls");
        switch (voto)
        {
        case 0:
            printf("COMPUTANDO...");
            voto = 0;
            break;
        case 1:
            c1++;
            printf("obrigado por votar!");
            printf("\n\n\n");
            break;
        case 2:
            c2++;
            printf("obrigado por votar!");
            printf("\n\n\n");
            break;
        case 3:
            c3++;
            printf("obrigado por votar!");
            printf("\n\n\n");
            break;
        case 4:
            c4++;
            printf("obrigado por votar!");
            printf("\n\n\n");
            break;
        case 5:
            vtn++;
            printf("obrigado por votar!");
            printf("\n\n\n");
            break;
        case 6:
            vtb++;
            printf("obrigado por votar!");
            printf("\n\n\n");
            break;
        }
    } while (voto != 0);
    printf("\nA quantidade de votos eh %i para o candidato 1, %i para o candidato 2, %i para o candidato 3, %i para o candidato 4.", c1, c2, c3, c4);
    printf("\nA quantidade de votos brancos eh %i, e a quantidade de votos nulos eh %i .", vtb, vtn);
    if( c1 > c2 && c1 > c3 && c1 > c4)
    {
        printf("\n O CANDIDATO ELEITO COM %i votos eh o candidato 1", c1);
    }
    else if(c2 > c1 && c2 > c3 && c2 > c4)
    {
         printf("\n O CANDIDATO ELEITO COM %i votos eh o candidato 2", c2);
    }
    else if(c3 > c1 && c3 > c2 && c3 > c4)
    {
        printf("\n O CANDIDATO ELEITO COM %i votos eh o candidato 3", c3);
    }
    else if(c4 > c1 && c4 > c2 && c4 > c3)
    {
        printf("\n O CANDIDATO ELEITO COM %i votos eh o candidato 4", c4);
    }

}