#include<stdio.h>
int main()
{
    float peso, valor;
    printf("\n=========BEM-VINDO AO RESTAURANTE BEM-BAO=========\n");
    printf("\n=========O preco do kg custa R$ 12,00=========\n");
    printf("\nDIGITE O PESO (KG) DA SUA REFEICAO:\n");
    scanf("%f", &peso);
    valor = peso * 12.00;
    printf("o valor da sua refeicao eh  R$ %.2f", valor);
    printf("\n=========OBRIGADO POR ESCOLHER O RESTAURANTE BEM-BAO=========\n");
    return 0;
}