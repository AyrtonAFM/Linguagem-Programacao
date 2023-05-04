#include <stdio.h>
#include <stdlib.h>

#define MAX 10
int main()
{
   
		int matriz1[MAX][MAX],matriz2[MAX][MAX],matrizR[MAX][MAX];
		int linhas=0,colunas=0,i,j,numero;

        printf("----MULTIPLICACAO DE MATRIZES----\n\n");

		printf("Quantas linhas voce quer matriz 1?\n");
		scanf("%d",&linhas);

		printf("Quantas colunas voce quer matriz 1?\n");
		scanf("%d",&colunas);

		for(j=0; j<linhas;j++)
		{
			printf("\nEntre com os %d elementos da linha %d da matriz:\n",colunas,j+1);
			for(i = 0; i < colunas; i++)
			{

				scanf("%d",&matriz1[j][i]);
			}
		}

		printf("Todos os elementos da matriz 1 sao:\n");

 		for(j=0; j<linhas;j++)
		{

			for(i = 0; i < colunas; i++)
			{

				printf("%d ",matriz1[j][i],"\t");
			} printf("\n");
		}


		printf("\n\nQuantas linhas voce quer matriz 2?\n");
		scanf("%d",&linhas);

		printf("Quantas colunas voce quer matriz 2?\n");
		scanf("%d",&colunas);

		for(j=0; j<linhas;j++)
		{
			printf("\nEntre com os %d elementos da linha %d da matriz:\n",colunas,j+1);
			for(i = 0; i < colunas; i++)
			{

				scanf("%d",&matriz2[j][i]);
			}
		}

		printf("Todos os elementos da matriz sao:\n");

 		for(j=0; j<linhas;j++)
		{

			for(i = 0; i < colunas; i++)
			{

				printf("%d ",matriz2[j][i],"\t");
			} printf("\n");
		}

		for(i = 0; i < linhas; i++)
		{
			for(j = 0; j < colunas; j++)
			{
				matrizR[i][j] = matriz1[i][j] * matriz2[i][j];
			}
		}

		printf("\n\nA MULTIPLICACAO DAS MATRIZES E: \n");

		for(i = 0; i < linhas; i++)
		{
			for(j = 0; j < colunas; j++)
			{
				printf("%d ",matrizR[i][j]," ");
			}
			printf("\n");
		}
        return 0;
	}



