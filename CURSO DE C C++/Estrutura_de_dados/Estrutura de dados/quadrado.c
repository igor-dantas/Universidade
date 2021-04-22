//bibliotecas
#include<stdio.h>
#include<stdlib.h>

main()
{
	//declaração de variaveis
	float a, quadrado = 0, quintaParte = 0;
	//entrada de dados
	printf("Digite um numero real: ");
	scanf("%f", &a);
	//limpa tela
	system("cls");
	//calculo
	quintaParte = a/5;
	quadrado = a * a;
	//saida
	printf("o quadrado desse numero eh: %.2f e sua quinta parte eh: %.2f\n", quadrado, quintaParte);
	system("pause");
}
