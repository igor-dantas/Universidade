//bibliotecas
#include<stdio.h>
#include<stdlib.h>

//fun��o principal
int main()
{
	//declara��o de variaveis
	int n = 10;
	int *p;// endere�o qualquer
	
	p = &n;// p esta apontando para variavel n
	*p = 20;
	printf("%d\n", n);
	printf("%d\n", *p);
	printf("%d\n", p);

	// p => valor do endere�o
	// *p=> conteudo de onde esta apontando
	return 0;
}
