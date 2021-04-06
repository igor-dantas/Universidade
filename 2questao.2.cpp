#include<stdio.h>//biblioteca de entrada e saída
#include<math.h>//biblioteca que ajuda na manipulação de contas aritméticas
#include<stdlib.h>//biblioteca padrão

int main()
{
    int op;
    float desconto, alcool = 2.19, gasolina = 2.72, litros, total;
    printf("|=================TABELA DESCONTOS==============================|");
    printf("\n|alcool  |       |ate 20 litros |        |3 porcento de desconto|");
    printf("\n|alcool  |       |+ de 20 litros|        |5 porcento de desconto|");
    printf("\n|gasolina|       |ate 20 litros |        |4 porcento de desconto|");
    printf("\n|gasolina|       |+ de 20 litros|        |6 porcento de desconto|");
    printf("\n|===============================================================|");
    printf("\nA gasolina esta custando R$%.2f, e o alcool R$%.2f o litro", gasolina, alcool);
    printf("\nQUAL VOCE PREFERE?");
    printf("\n        1- gasolina        2-alcool");
    printf("\nDIGITE UMA OPCAO\n");
    scanf("%d", &op);
    system("cls");
    switch (op)
    {
    case 1:
        printf("Quantos litros de gasolina voce quer?\n");
        scanf("%f", &litros);
        if (litros <= 20.0)
        {
            desconto = 0.96;
            total = (gasolina * litros) * desconto;
            printf("o valor a ser pago por %.2f litros de gasolina eh: R$ %.2f com desconto de 4 porcento", litros, total);
        }
        else if(litros > 20.0)
        {
            desconto = 0.94;
            total = (gasolina * litros) * desconto;
            printf("o valor a ser pago por %.2f litros de gasolina eh: R$ %.2f com desconto de 6 porcento", litros, total);
        }
        break;
    case 2:
        printf("Quantos litros de alcool voce quer?\n");
        scanf("%f", &litros);
        if (litros <= 20.0)
        {
            desconto = 0.97;
            total = (alcool * litros) * desconto;
            printf("o valor a ser pago por %.2f litros de alcool eh: R$ %.2f com desconto de 3 porcento", litros, total);
        }
        else if(litros > 20.0)
        {
            desconto = 0.95;
            total = (alcool * litros) * desconto;
            printf("o valor a ser pago por %.2f litros alcool eh: R$ %.2f com desconto de 5 porcento", litros, total);
        }   
        break;
    default:
        printf("opçao invalida! digite uma opcao valida");
        
    }
}