#include<stdio.h>
int main()
{
    int clatas, cgarrafaM, cgarrafaG;
    float conversorml, latas = 350.0, garrafaM = 600.0, garrafaG = 2.0, total;
    printf("\n=========BEM-VINDO A FABRICA MEIA-COLA=========\n");
    printf("\nQuantas latas de 350 ml foram compradas?\n");
    scanf("%d", &clatas);
    printf("\nQuantas garrafas de 600 ml foram compradas?\n");
    scanf("%d", &cgarrafaM);
    printf("\nQuantas garrafas de 2 litros foram compradas?\n");
    scanf("%d", &cgarrafaG);
    conversorml = (latas * clatas * 0.001) + (garrafaM * cgarrafaM * 0.001);
    total = conversorml + (garrafaG * cgarrafaG);
    printf("Foram tomados %.2f litros de refrigerante", total);
    return 0;

}