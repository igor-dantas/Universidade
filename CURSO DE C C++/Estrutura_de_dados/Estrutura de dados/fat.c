//bibliotecas
#include<stdio.h>
#include<stdlib.h>

//fun��o principal
main()
{
	int n = 1, fat, z = 1;
	//la�o for
	for(fat = 1; n <= 10; n = n + 1)
	{
		//calculo fatorial
		fat = fat * n; 
		printf("O fatorial de %d! eh = %d\n", z++, fat);
	}
	system("pause");// ficar parado
}
