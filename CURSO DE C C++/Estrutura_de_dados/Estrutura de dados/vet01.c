//bibliotecas
#include<stdio.h>
#include<stdlib.h>

//função principal
main()
{
	//declaração de variaveis
	int cont, exemplo[5];
	
	for(cont = 0; cont <=4; cont++)
	{
		printf("informe um valor: ");
		scanf("%d", &exemplo[cont]);
		
	}
	printf("\nEstes Sao os elementos do vetor: \n");
	for(cont = 0; cont<=4;cont++)
	{
		printf("Elemento: %d\n", exemplo[cont]);
	}
	return 0;
}
