//bibliotecas
#include<stdlib.h>
void troca(int*n)
{
	*n = 20;
}
//fun��o principal
int main()
{
	int n = 10;
	
	troca(&n);//passagem de par�metros por refer�ncia
	
	printf("%d\n", n);
	
	return 0;
}
