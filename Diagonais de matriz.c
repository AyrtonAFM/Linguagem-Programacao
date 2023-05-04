#include <stdio.h>
#include <stdlib.h>

#define MAX 10
int main()
{
    int  matriz[MAX][MAX];
    int dimensao, colunas, linhas;
    int i,j;

    printf("Qual sera a dimensao da sua matriz? ");
    printf("OBS: Nesse programa a dimensao da matriz so pode de 2 a 10\n");
    scanf("%d",&dimensao);

    while(dimensao<2 || dimensao>10)
    {
        printf("\nA dimensao da matriz nao pode ser MENOR que 2 ou MAIOR que 10\n");
        printf("Digite novamente a dimensso da matriz:");
        scanf("%d",&dimensao);

    }

    linhas = dimensao;
    colunas = dimensao;

    printf("\nOK! A matriz escolhida e de %d x %d\n",linhas,colunas);

    for (j=0; j<linhas;j++)
		{
			printf("\nEntre com os %d elementos da linha %d da matriz:\n",colunas,j+1);

			for(i = 0; i < colunas; i++)
			{

				scanf("%d",&matriz[j][i]);
			}
		}

		printf("\nOs elementos na matriz %d x %d sao:\n",linhas,colunas);

 		for(j=0; j<linhas;j++)
		{

			for(i = 0; i < colunas; i++)
			{

				printf("%d ",matriz[j][i],"\t");
			} printf("\n");
		}

		printf("\n\nSua DIAGONAL PRINCIPAL e: ");

		for(i=0;i<linhas;i++)
		{
			printf("%d ",matriz[i][i]," ");

		}

		printf("\n\nSua DIAGONAL SECUNDARIA e: ");

		for(i=0;i<linhas;i++)
		{
			printf("%d ",matriz[i][linhas - 1 - i]," ");

		}
        return 0;
	}



