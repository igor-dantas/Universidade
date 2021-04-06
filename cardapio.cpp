#include<stdio.h>
int main(void)
{
    //declaração de variáveis
    int ct, cp, cc, cpe;
    float tulipa = 2.8, pizza = 10.0, cobertura = 1.5, conta  = 0, dvc, contaf;
    //cardapio
    printf("\n[                      CARDAPIO                              ]\n");
    printf("[   PRODUTO                        PRECO                     ]");
    printf("\n[1-Tulipa de chopp                 R$ 2,80                   ]");
    printf("\n[2-Pizza Grande                    R$ 10,00                  ]");
    printf("\n[3-cobertura da pizza              +R$ 1,50 no valor da pizza]");
    //entrada de dados
    printf("\nquantas pessoas tem na mesa?\n");
    scanf("%d", &cpe);
    printf("\nqual o numero de tulipas?\n");
    scanf("%d", &ct);
    printf("\nqual o numero de pizzas?\n");
    scanf("%d", &cp);
    printf("\nQual a quantidade de coberturas utilizadas?\n"); 
    scanf("%d", &cc);
    //cálculos
    conta = (tulipa * ct) + (pizza * cp) + (cobertura * cc); //cálculo da conta sem os 10%
    contaf = conta* 0.1 + conta; // cálculo da conta + 10%
    printf("\n a conta deu R$ %.2f + 10 por cento da taxa de servico a conta fica em R$ %.2f\n", conta, contaf);
    dvc = contaf / cpe;// dividindo o valor da conta para o total de pessoas na mesa
    printf("\nA conta sera dividida para %i pessoas e sai R$ %.2f para cada pessoa\n", cpe, dvc);//resultado
    return 0;
}