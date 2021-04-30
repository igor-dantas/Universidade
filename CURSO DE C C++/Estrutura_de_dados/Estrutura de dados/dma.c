//bibliotecas
#include<stdio.h>
#include<stdlib.h>
//definindo struct
typedef struct dma
{
    int dia;
    int mes;
    int ano;
}dma;

//função principal
int main()
{
    //definindo variveis do struct
    dma data1, data2;
    int difano, difmes, difdia, difdata;

    printf("Digite o dia da primeira data: ");
    scanf("%d", &data1.dia);
    if(data1.dia > 30)
    {
        printf("\n**operacao invalida**\n");
        printf("Digite o dia da primeira novamente data: ");
        scanf("%d", &data1.dia);
        
    }
    printf("Digite o mes da primeira data (em numero): ");
    scanf("%d", &data1.mes);
    printf("Digite o ano da primeira data: ");
    scanf("%d", &data1.ano);
    printf("Digite o dia da segunda data: ");
    scanf("%d", &data2.dia);
    if(data2.dia > 30)
    {
        printf("\n**operacao invalida**\n");
        printf("\nDigite o dia da primeira novamente data: ");
        scanf("%d", &data2.dia);
        
    }
    printf("Digite o mes da segunda data (em numero): ");
    scanf("%d", &data2.mes);
    printf("Digite o ano da segunda data: ");
    scanf("%d", &data2.ano);
    printf("\nA primeira data eh: %2d/ %2d / %4d\n", data1.dia, data1.mes, data1.ano);
    printf("\nA segunda data eh: %2d/ %2d / %4d\n", data2.dia, data2.mes, data2.ano);
    printf("Calculando a diferenca entre datas...");
    difano = (data2.ano - data1.ano) * 360;
    difmes = (data2.mes - data1.mes) * 30;
    difdia = data2.dia - data1.dia;
    difdata = difano + difmes + difdia;
    printf("\n");
    printf("\nA diferenca das datas em dias eh: %d\n", difdata);
    
    return 0;
}
