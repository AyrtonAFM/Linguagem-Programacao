#include <iostream>
#include <stdio.h>
#include <stdlib.h>


#define MAX 100
int main(){
	
	int matriz[2][3];
	int i,j;
	char string[MAX],vetor[MAX];
	
	printf("Digite a string: ");
	
	gets(string);
	
	for(i=0;string[i] !='\0';i++)
	{
		vetor[i]=string[i];
		
	}
	
	for(i;i>=0;i--){
		
		printf("%c ",vetor[i]);
		
	}
	printf("\n\n");
	
	
	
	/*printf("Entre com os 10 elementos do vetor: \n");
	
	for(i=0;i<MAX;i++){
		
		scanf("%d",&vetor[i]);
		
	}
	
	for(i=0;i<=2;i++){
		
		printf("\n\nEntre com os elementos da %d linha da matriz: \n",i+1);
		for(j=0;j<3;j++){
			
			scanf("%d",&matriz[i][j]);
		}
	
		
	}
	printf("%d \n\n",vetor[2]);*/
	
	
	system("pause");
	return 0;
}
