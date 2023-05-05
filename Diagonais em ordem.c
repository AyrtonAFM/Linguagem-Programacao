#include <stdio.h>
#include <stdlib.h>

#define MAX 10
#define VETORMAX 100
int main()
{
    int  matriz[MAX][MAX],vetor[VETORMAX],vetorOrdenado[VETORMAX];
    int dimensao, colunas, linhas,auxiliarVetor,trocou = 1;
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

		printf("\n\nArmazenada em um vetor e: ");

		for(i=0;i<linhas;i++)
        {
            vetor[i] = matriz[i][i];

        }

        for(i=0;i<linhas;i++)
		{
			printf("%d ",vetor[i]);

		}

        printf("\n\nDIAGONAIS ORDENADAS: ");
		while(trocou==1) // processamento da ordem do vetor
		{
			trocou = 0;
			for(i=0;i<linhas-1;i++)
			{
				if(vetor[i] > vetor[i+1])
				{
					auxiliarVetor = vetor[i];
					vetor[i] = vetor[i+1];
					vetor[i+1] = auxiliarVetor;
					trocou = 1;
				}
			}
		}

		for(i = 0; i < linhas; i++)
		{
			printf("%d ",vetor[i]," ");
		}

        return 0;
	}


