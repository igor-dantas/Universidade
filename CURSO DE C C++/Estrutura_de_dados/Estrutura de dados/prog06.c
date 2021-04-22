#include<stdio.h>
void f(int *v)
{
	v[5] = 20;
}
int main()
{
	int v[10], i, a;

	for(i = 1; i < 10; i++)
	{
		v[i] = i;
		
	}
	//f();
	printf("%d\n", (v+5));
	
	
	

	return 0;
}
