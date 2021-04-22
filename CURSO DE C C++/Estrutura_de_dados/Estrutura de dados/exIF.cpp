//bibliotecas
#include<stdio.h>
#include<stdlib.h>
//função principal
main()
{
	int A, B, Soma;
	printf("Digite um numero inteiro:\n");
	scanf("%d", &A);
	printf("Digite a segunda numero inteiro:\n");
	scanf("%d", &B);
	
	Soma = A + B;
	
	printf("O valor da soma = %d\n", Soma);
	
	if(Soma > 10)
	{
		printf("O valor da soma eh maior que 10\n");
	}
	system("pause");
	return(0);
}
