#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int contador = 0, i, vet[10], vetImpar[10];
	for(i = 0; i < 10; i++)
	{
		printf("\n Digite o número: ");// inserindo numeros no vetor
		scanf("%d", &vet[i]);
		
		if(vet[i] % 2 != 0)// se o numero for impar ele soma mais 1
		{
			vetImpar[contador] = vet[i];
			contador++;
			
		}
	}
	printf("\n\t Os números impares são: \n");
	for(i = 0; i < contador; i++)
	{
		printf("\n\t\t\t%d", vetImpar[i]);//mostrando os numeros impares
	}
	return 0;
}
