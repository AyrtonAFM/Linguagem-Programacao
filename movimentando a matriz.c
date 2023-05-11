#include <iostream>
#include <stdio.h>
#include <stdlib.h>


#define MAX 3
int main(){

	int matriz[MAX][MAX];
	int i,j;



	for(i=0;i<MAX;i++)
    {
        printf("Entre com os numeros da %d linha da matriz: \n",i+1);
        
        for(j=0;j<MAX;j++)
        {
            scanf("%d",&matriz[i][j]);


        }
		
		printf("\n");
	
    }
    
    printf("Os numeros na matriz informados sao: \n");
    
    for(i=0;i<MAX;i++)
    {
        
        for(j=0;j<MAX;j++)
        {
            printf("%d ",matriz[i][j]);


        }

		printf("\n");
    }

	printf("\n\nOs numeros na matriz com as LINHAS invertidas sao: \n");
	


	for(i=MAX-1;i>=0;i--)
    {
        
        for(j=0;j<MAX;j++)
        {
            printf("%d ",matriz[i][j]);


        }

		printf("\n");
    }
    
    printf("\n\nOs numeros na matriz com as COLUNAS invertidas sao: \n");
    
    for(j=0;j<MAX;j++)
    {
        
        for(i=MAX-1;i>=0;i--)
        {
            printf("%d ",matriz[j][i]);


        }

		printf("\n");
	}
	system("pause");


}
