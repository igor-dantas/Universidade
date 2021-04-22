#include<stdio.h>
#include<stdlib.h>

main()
{
	//definição de variaveis
	float n1, n2, n3, media;
	//entrada de dados
	printf("Digite a primeira nota:\n");
	scanf("%f", &n1);
	printf("Digite a segunda nota:\n");
	scanf("%f", &n2);
	printf("Digite a terceira nota:\n");
	scanf("%f", &n3);
	//calculo de media
	media = (n1+n2+n3)/3;
	//saída
	printf("Media: %.2f\n", media);
	system("pause");
}
