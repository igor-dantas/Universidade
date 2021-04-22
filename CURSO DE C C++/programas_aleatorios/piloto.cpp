#include<stdio.h>
int main (void)
{
    //declaração de variáveis
    char piloto[60];
    float dp;
    float vm, horas, min;
    int verificador;
    //entrada de dados
    printf("Qual o nome do piloto? \n");
    scanf("%s", &piloto);
    printf("Qual a distancia percorrida da viagem em KM?\n");
    scanf("%f", &dp);
    printf("Quantas horas de viagem?\n");
    scanf("%f", &horas);
    printf("Digite 1 se houve acrescimos em minutos, e Digite 0 se nao teve; \n");
    scanf("%d", &verificador);
    //condicional caso o tempo em horas não seja exato e tenha acrescimos em minutos
    if (verificador >= 1)
    {
        printf("Quantos minutos?");
        scanf("%f", &min);
        min = min / 60;//cálculo trasnformando min para horas
        horas = horas + min;//cálculo para saber o tempo total
        printf("o tempo de viagem entao foi de %Sf \n", horas);
    }
    else 
    {
        printf("\n\nEntao...");
    }
    vm = dp / horas;//cálculo da velocidade média
    printf("\n\na velocidade media do piloto %s foi %.2f KM/H. ", piloto, vm);//resultados
    return 0;
}