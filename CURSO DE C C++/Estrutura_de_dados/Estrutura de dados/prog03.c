//bibliotecas
#include<stdlib.h>

//função principal
int main()
{
	int a, *pa;
	double b, *pb;
	char c, *pc;
	//atribuições de endereços
	pa = &a;
	pb = &b;
	pc = &c;
	//atribuição de valores
	a = 1;
	b = 2.34;
	c = '@';
	printf("\n valores: %d <=> %.2f <=> %c", a, b, c);
	printf("\n ponteiros: %d <=> %.2f <=> %c", *pa, *pb, *pc);
	printf("\n enderecos: %p <=> %p <=> %p", pa, pb, pc);
	//mais atribuições usando os ponteiros
	*pa = 77;
	*pb = 0.33;
	*pc = '#';
	printf("\n valores: %d <=> %.2f <=> %c", a, b, c);
	printf("\n ponteiros: %d <=> %.2f <=> %c", *pa, *pb, *pc);
	printf("\n enderecos: %p <=> %p <=> %p", pa, pb, pc);
	
	return 0;
}
