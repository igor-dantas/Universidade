//bibliotecas
#include<stdio.h>
#include<stdlib.h>

//função principal
int main()
{
	//declaração de variaveis
	int n = 10;
	int *p;// endereço qualquer
	
	p = &n;// p esta apontando para variavel n
	*p = 20;
	printf("%d\n", n);
	printf("%d\n", *p);
	printf("%d\n", p);

	// p => valor do endereço
	// *p=> conteudo de onde esta apontando
	return 0;
}
