//bibliotecas
#include<stdio.h>
#include<stdlib.h>
//função principal
main()
{
	//declaração de variaveis
	int cont = 0, b;
	//entrada de dados
	printf("digite quantas vezes que voce deseja contar: ");
	scanf("%d", &b);
	//laço de repetição for
	for( cont = 0; cont<=b; cont= cont + 5)
	{
		printf("%d", cont);
		printf("\n");
	} 
	system("pause");//ficar parado
}
