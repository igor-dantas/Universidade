#include<stdio.h>
/*int numero = 10; // variavel global
int somar(int n1, int n2)
{
	int soma = n1+ n2; // variavel local
	printf("numero: %d\n", numero);
	return soma;
}

int main()
{
	int resultado = somar (10, 20);
	printf("%d\n", resultado);
	return 0;
}
*/
int somar(int n1, int n2); // prototipo da função
int main()
{
	printf("Soma: %d\n", somar(10,20));
	return 0;
}
int somar(int n1, int n2)
{
	return n1+n2;
}