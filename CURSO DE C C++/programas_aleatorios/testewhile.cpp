#include<stdio.h>
int main()
{
    int cont;
    printf("digite um numero menor que 10\n:");
    scanf("%i", &cont);
    while(cont<= 10)
    {
        printf("%i", cont);
    }
}