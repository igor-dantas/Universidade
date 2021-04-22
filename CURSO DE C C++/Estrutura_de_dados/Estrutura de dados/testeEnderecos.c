#include<stdio.h>
#include<stdlib.h>

int main()
{
	int inteiro, v[3], ponto, *p;
	char caractere = 'c';
	
	printf("essa variavel tem 4 bytes, %d\n", &inteiro);
	printf("esse posicao 1 do vetor tem 4 bytes %d\n", &v[0]);
	printf("esse posicao 2 do vetor tem 4 bytes %d\n", &v[1]);
	printf("esse posicao 3 do vetor tem 4 bytes %d\n", &v[2]);
	printf("esse caractere tem 1 byte %c\n", &caractere);
	p = &inteiro;
	printf("endereco de p \t%d\n", p);
	*p = 21;
	printf("conteudo de p \t%d\n", *p);
	
	system("pause");
}
