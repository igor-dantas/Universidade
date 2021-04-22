#include<stdio.h>
#include<stdlib.h>
int menor(int n1, int n2)
{
	int Nmenor = 0;
	if(n1<n2)
	{
		Nmenor = n1;
	}
	else
	{
		Nmenor = n2;
	}	
	return Nmenor;
}
void main()
{
	int a = 0, b = 0, check = 0;
	printf("\nDigite um numero inteiro numero:");
	scanf("%i", &a);
	printf("\nDigite o segundo numero inteiro:");
	scanf("%i", &b);
	
	check = menor(a, b);
	
	printf("\nO menor numero dos valores digitados eh: %i\n", check);
	system("pause");
}
