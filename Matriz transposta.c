#include <stdio.h>
#include <stdlib.h>

#define MAX 10
int main()
{

		int matriz[MAX][MAX];
		int linhas=0,colunas=0,i,j;

        printf("----MATRIZ TRANSPOSTA----\n\n");

		printf("Quantas linhas voce quer matriz 1?\n");
		scanf("%d",&linhas);

		printf("Quantas colunas voce quer matriz 1?\n");
		scanf("%d",&colunas);

		for(j=0; j<linhas;j++)
		{
			printf("\nEntre com os %d elementos da linha %d da matriz:\n",colunas,j+1);
			for(i = 0; i < colunas; i++)
			{

				scanf("%d",&matriz[j][i]);
			}
		}

		printf("Todos os elementos da matriz 1 sao:\n");

 		for(j=0; j<linhas;j++)
		{

			for(i = 0; i < colunas; i++)
			{

				printf("%d ",matriz[j][i],"\t");
			} printf("\n");
		}

        printf("\n\nA matriz TRANSPOSTA e:\n");

 		for(j=0; j<colunas;j++)
		{

			for(i = 0; i < linhas; i++)
			{

				printf("%d ",matriz[i][j],"\t");
			} printf("\n");
		}
		

        return 0;
	}


