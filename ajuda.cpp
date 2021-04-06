#include<stdio.h>
int main ()
{
    float valorinserido, valordaparcela, conta;//declaração de variáveis
    printf("\n Insira um valor:\n");//entrada de dados
    scanf("%f", &valorinserido);
    conta = valorinserido * 0.9;//cálculo do valor - 10%
    valordaparcela = conta / 3;// valor da parcela de 3x sem juros
    printf("\nO valor com desconto eh R$ %.2f e o valor da parcela de 3x sem juros eh: R$ %.2f de cada parcela\n", conta, valordaparcela);//resultado
}