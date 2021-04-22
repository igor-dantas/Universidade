#include <stdio.h>
#include <stdlib.h>

int menor (int V1, int V2) 
{
   int menor_numero = 0;

   if (V1>V2)
   {
     menor_numero = V2;
   }
   else
   {
     menor_numero = V1; 
   }

    return menor_numero;
}

void main() 
{
       int a = 0, b = 0, controlador = 0;
    
    printf("Valor 1 :"); 
    scanf("%d", &a);
    printf("Valor 2 :"); 
    scanf("%d", &b);
    
    controlador = menor(a, b);
    
    printf("\nO valor menor eh %d\n", controlador);
    
system("pause");

}
