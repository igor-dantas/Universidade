#include <stdio.h>
#include <stdlib.h>

int menor (int V1, int V2) 
{
   int menor_numero = 0;

   if (V1>V2)
   {
    int menor_numero = V2;
   }
   else
   {
    int menor_numero = V1; 
   }

    return menor_numero;
}

void main() 
{
       int V1 = 0, V2 = 0, controlador = 0;
    
    printf("Valor 1 :"); 
    scanf("%d", &V1);
    printf("Valor 2 :"); 
    scanf("%d", &V2);
    
    controlador = menor(V1, V2);
    
    printf("O valor menor é %d", controlador);
    
system("pause");

}