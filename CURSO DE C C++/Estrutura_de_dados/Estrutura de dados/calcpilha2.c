
#include<stdio.h>
#include<stdlib.h>

int tam = 2, topo = -1, valor;
int pilha[2];

//empilha
void empilha()
{
	if(topo == tam - 1)
	{
		printf("\n **Pilha cheia**\n");
	}
	else
	{
		topo++;
		pilha[topo] = valor;
	}	
}

//desempilha
void desempilha()
{
	if(topo == -1)
	{
		printf("\n **Pilha vazia**\n");
	}
	else
	{
		valor = pilha[topo];
		topo--;
	}
}

//função principal
void main()
{
    //declaração de variaveis
	int op, teste, t1, t2;
	float resultado;
    
	do//inicio do laço do/while
    {
	    //entrada do primeiro valor
        printf("Digite o primeiro valor: ");
        scanf("%d", &valor);
        empilha();

        //entrada do segundo valor
        printf("Digite o segundo valor: ");
        scanf("%d", &valor);
        empilha();

        //opções
        printf("\nEscolha a operacao: \n 1-> '+'\n 2->'-'\n 3->'*'\n 4->'/'\n");
        printf("\nqual operacao deseja fazer: ");
        scanf("%d", &op);

        //"menu"
        switch (op)
        {
            //operação de soma
            case 1:
                desempilha();
                resultado = valor;
                desempilha();
                resultado = valor + resultado;
                printf("\no resultado e: %.2f\n", resultado);
                printf("Deseja continuar?\t0-sim\t1-nao\n");
                scanf("%d", &teste);
                break;

            //operação de soma
            case 2:
                desempilha();
                resultado = valor;
                desempilha();
                resultado = valor - resultado;
                printf("\n");
                printf("\no resultado e: %.2f\n", resultado);
                printf("\n");
                printf("Deseja continuar?\t0-sim\t1-nao\n");
                scanf("%d", &teste);
                break;

            //operação de multiplicação
            case 3:
                desempilha();
                resultado = valor;
                desempilha();
                resultado = valor * resultado;
                printf("\n");
                printf("\no resultado e: %.2f\n", resultado);
                printf("\n");
                printf("Deseja continuar?\t0-sim\t1-nao\n");
                scanf("%d", &teste);
                break;
            //operação de divisão

           case 4:
                //verificação se o primeiro valor do topo da pilha é 0
                desempilha(); 
                t2 = valor;
                //desempilha 
                desempilha();
                //verificação se o valor que agora está no topo é 0
                t1 = valor;
                resultado = ((float)t1 / t2);
                //condições para que haja divisão
                if (t2 == 0)
			{
				printf("Não é possível fazer divisão por 0");
				printf("\n");
                printf("\no resultado e: %.2f\n", resultado);
                printf("\n");
                printf("Deseja continuar?\t0-sim\t1-nao\n");
                scanf("%d", &teste);
				break;
			}
			else
			{
				printf("Resultado da divisão de %d e %d: %.2f", t1, t2, resultado);
                printf("\n");
                printf("\no resultado e: %.2f\n", resultado);
                printf("\n");
                printf("Deseja continuar?\t0-sim\t1-nao\n");
                scanf("%d", &teste);
				break;
            }
        }
        //resultado
       
        //pular linha

      
       
    } while (teste == 0);//teste para ver se o programa continuará ou não

    system("pause");//fica parado
}//fim
