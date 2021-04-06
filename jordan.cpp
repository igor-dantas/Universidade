#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float tlp = 2.80; 
  float pizz = 10.0;
  float cob = 1.50 ;
  float num_tlp = 0; 
  float num_cob = 0; 
  float num_pessoas = 0;
  float parc = 0;
  
 
 system ("cls");
   printf("\n");
   printf("####### PIZZARIA #######");
   printf("\n\n");
   printf("TULIPA DE CHOP: 2,80$\n");
   printf("PIZZA GRANDE 10.00$\n");
   printf("COBERTURA 1,50$\n");
   printf("\n\n");

  //entrada de dados
   printf("Digite a quantidade de Tulips de chope:\n");
   scanf("%f", &num_tlp);
   printf("Digite a quantida de Corberturas:\n");
   scanf("%f",&num_cob);
   printf("Digite a quantidade de pessoas na mesa:\n");
   scanf("%f", &num_pessoas);

   //CALCULO

   parc = (num_cob * tlp) + (num_cob * cob) + pizz;
printf (" esse eh %.2f\n", parc);
   






system ("pause");
 return (0);
}