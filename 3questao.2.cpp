#include<stdio.h>//biblioteca de entrada e saída
#include<math.h>//biblioteca que ajuda na manipulação de contas aritméticas
#include<stdlib.h>//biblioteca padrão
int mensagem()
{
    printf("|codigo de origem        Procedencia       imposto (porcento)|");
    printf("\n|1                        sul                     11 porcento|");
    printf("\n|2                       Norte                    13 porcento|");
    printf("\n|3                      Nordeste                   9 porcento|");
    printf("\n|4                      Centro-Oeste              12 porcento|");
    printf("\n|===============Digite 5 para sair===========================|");
    return 0;
}
int main()
{
    int codigo;
    float precoliq, precofinal;
    do
    {
        mensagem();
        printf("\nQual o codigo de origem do produto?\n");
        scanf("%i", &codigo);
        printf("\nQual o preco liquido do produto?\nR$");
        scanf("%f", &precoliq);
        system("cls");
        switch (codigo)
        {
                case 1:
                    precofinal = precoliq + (precoliq * 0.11);
                    printf("\n O codigo de origem eh: 1\n e a procedencia eh: sul\n o imposto eh de 11 por cento");
                    printf("\no valor final fica em: R$%.2f", precofinal);
                    break;   
                case 2:
                    precofinal = precoliq + (precoliq * 0.13);
                    printf("\n O codigo de origem eh: 2\n e a procedencia eh: norte\n o imposto eh de 13 por cento");
                    printf("\no valor final fica em: R$%.2f", precofinal);
                    break;
                case 3:
                    precofinal = precoliq + (precoliq * 0.09);
                    printf("\n O codigo de origem eh: 3\n e a procedencia eh: nordeste\n o imposto eh de 9 por cento");
                    printf("\no valor final fica em: R$%.2f", precofinal);
                    break;
                case 4:
                    precofinal = precoliq + (precoliq * 0.12);
                    printf("\n O codigo de origem eh: 4\n e a procedencia eh: centro-oeste\n o imposto eh de 12 por cento");
                    printf("\no valor final fica em: R$%.2f", precofinal);
                    break;
                case 5:
                    printf("OBRIGADO!");
                    break;
        }
        printf("\nQual o codigo de origem do produto?\n");
        scanf("%i", &codigo);
    } while (codigo != 5);
return 0;

}