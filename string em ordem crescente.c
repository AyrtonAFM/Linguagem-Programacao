#include <stdio.h>
#include <stdlib.h>

#define MAX 100
int main()
{
        char frase[MAX], numeros [MAX], minusculas [MAX], maiusculas[MAX];
        int i,j=0,k,m;
        int tamAUX=0, tamNUMEROS=0, tamMINUSCULAS=0, tamMAIUSCULAS=0;
        char voltar;

        printf("Digite a frase: ");
        scanf("%s",&frase);
		
		printf("\nOS NUMEROS INFORMADOS SAO: ");
		
        for(i=0;frase[i] !='\0';i++)
        {
            if(frase[i]>=48 && frase[i]<= 57)
            {
                numeros[j]=frase[i];
                j++;
            }

        }
        numeros[j]='\0';
        tamNUMEROS=j;

        for(k=0; k<= tamNUMEROS-2;k++)
        {
            for(m=k+1;m<=tamNUMEROS-1;m++)
            {
                if(numeros[k]>numeros[m])
                {
                    voltar = numeros[k];
                    numeros[k]= numeros[m];
                    numeros[m] = voltar;

                }
            }
        }
        printf("%s \n",numeros);
        
        j=0;
        printf("\n\nAS LETRAS MINUSCULAS SAO: ");
        
        for(i=0;frase[i] !='\0';i++)
        {
            if(frase[i]>=97 && frase[i]<= 122)
            {
                minusculas[j]=frase[i];
                j++;
            }

        }
        minusculas[j]='\0';
        tamMINUSCULAS=j;

        for(k=0; k<= tamMINUSCULAS-2;k++)
        {
            for(m=k+1;m<=tamMINUSCULAS-1;m++)
            {
                if(minusculas[k]>minusculas[m])
                {
                    voltar = minusculas[k];
                    minusculas[k]= minusculas[m];
                    minusculas[m] = voltar;

                }
            }
        }
        printf("%s \n",minusculas);
        
        j=0;
        
        printf("\n\nAS LETRAS MAIUSCULAS SAO: ");
        
        for(i=0;frase[i] !='\0';i++)
        {
            if(frase[i]>=65 && frase[i]<= 90)
            {
                maiusculas[j]=frase[i];
                j++;
            }

        }
        maiusculas[j]='\0';
        tamMAIUSCULAS=j;

        for(k=0; k<= tamMAIUSCULAS-2;k++)
        {
            for(m=k+1;m<=tamMAIUSCULAS-1;m++)
            {
                if(maiusculas[k]>maiusculas[m])
                {
                    voltar = maiusculas[k];
                    maiusculas[k]= maiusculas[m];
                    maiusculas[m] = voltar;

                }
            }
        }
        printf("%s \n",maiusculas);




        return 0;
}
