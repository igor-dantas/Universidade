#include<stdio.h>
#include<stdlib.h>
float delta(float a, float b, float c)
{
	float resultado = (b * b) - (4*a*c);
	return resultado;
}


void main()
{
	float a = 0.0, b = 0.0, c = 0.0, final = 0.0;
	printf("\n Insira o A:");
	scanf("%f", &a);
	printf("\n Insira o B:");
	scanf("%f", &b);
	printf("\n Insira o C:");
	scanf("%f", &c);
	
	final = delta(a, b, c);
	printf("\nO resultado eh: %.2f\n\n", final);
	
	system("pause");
}
