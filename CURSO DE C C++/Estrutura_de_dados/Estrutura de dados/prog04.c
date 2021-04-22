//bibliotecas
#include<stdlib.h>
void troca(int*n)
{
	*n = 20;
}
//função principal
int main()
{
	int n = 10;
	
	troca(&n);//passagem de parâmetros por referência
	
	printf("%d\n", n);
	
	return 0;
}
