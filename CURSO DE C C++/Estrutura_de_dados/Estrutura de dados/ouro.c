#include<stdio.h>

int main()
{
	int A = 0, B = 0, C = 0, D = 0, lim = 0, op, ilha1 = 0, ilha2 = 0, ilha3 = 0, ilha4 = 0, ilhaf = 0, ci = 0;
	printf("Digite a quantidade de tesouro na ilha A:");
	scanf("%d", &A);
	printf("Digite a quantidade de tesouro na ilha B:");
	scanf("%d", &B);
	printf("Digite a quantidade de tesouro na ilha C:");
	scanf("%d", &C);
	printf("Digite a quantidade de tesouro na ilha D:");
	scanf("%d", &D);
	printf("Digite o limite a ser carregado:");
	scanf("%d", &lim);
	printf("Voce deseja começar pela ilha 1 ou pela ilha 2?")
	scanf("%d", &op)
	switch(op)
	{
		case 1:
			ilha1++;
			printf("voce deseja ir pra onde ilha 3 ou ilha4");
			printf("Digite 3 ou 4: ");
			scanf("%d", &ci);
			if(ci == 4)
			{
				ilha4++;
				printf("voce quer ir para ilha para ilha final ou para ilha 2?");
				printf("digite 0 ou 2:");
				scanf("%d", &ci);
				if(ci == 0)
				{
					ilhaf++;
					printf
				}
			}
	}
	return 0;
}
