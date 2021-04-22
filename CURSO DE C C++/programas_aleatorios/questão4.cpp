#include<stdio.h>
int main()
{
    float pao = 0.25, broas = 1.50, valorpoupanca, conta; //entrada de variáveis
    int cp, cb;
    //entrada de dados
    printf("=========PADARIA HOTPAO=========");
    printf("\nQuantos paes foram vendidos hoje?\n");
    scanf("%d", &cp );
    printf("\nQuantas broas foram vendidas hoje?\n");
    scanf("%d", &cb);
    conta = (pao * cp) + (broas * cb);
    valorpoupanca = conta * 0.1;
    printf("\no valor vendido hoje no total foi R$ %.2f\n", conta);
    printf("\nO valor a ser guardado na poupanca eh R$ %.2f\n", valorpoupanca);
    printf("\n=========OBRIGADO=========");
    return 0;
}