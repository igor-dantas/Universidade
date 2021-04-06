#include<stdio.h>//biblioteca de entrada e saída
#include<string.h>//biblioteca que ajuda na manipulação de string
#include<math.h>//biblioteca que ajuda na manipulação de contas aritméticas
#include<stdlib.h>//biblioteca padrão

int main()
{
    float salariofi, salariofixo, comissaopcarro, vtdv; //declaração de variáveis
    int carrosvend;
    printf("\ninforme o salario fixo por mes\n:");
    scanf("%f", &salariofixo);
    printf("\ninforme o numero de carros vendidos\n:");
    scanf("%i", &carrosvend);
    printf("\ninforme a comissao fixa por carro vendido\n:");
    scanf("%f", &comissaopcarro);
    printf("\ninforme valor total das vendas efetuadas\n:");
    scanf("%f", &vtdv);
    system("cls");
    salariofi = salariofixo + comissaopcarro + (vtdv*0.05);
    printf("\no salario do vendedor eh: R$ %.2f\n", salariofi);
    system("Pause");
    return 0;
}