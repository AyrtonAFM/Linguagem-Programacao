//
//  main.c
//  String
//
//  Created by Mac on 18/05/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, const char * argv[])
{
    char S[1000];
    int i = 0, c, limMaior = -1, indI, indMaior = 0, indMenor = 0, limMenor = 1000;
    
    gets(S);
    
    while(S[i] != '\0')
    {
        c = 0; // contar caracteres de palavra
        indI = i; // armazena o indice inicial da palavra
        while(S[i] != ' ' && S[i] != '\0')
        {
            c++;
            ++i;
             printf("C= %d i= %d \n",c,i);
        }
        printf(" i= %d \n",i);
        if(c > limMaior)
        {
            limMaior = c; // achei a maior palavra
            indMaior = indI; 
			printf(" i= %d \n",i);// guardei o primeiro indice dessa palavra
        }
        ++i;
        
    }
    printf(" i= %d \n",i);
    i = indMaior; // usando o indice guardado da palavra
    printf("indf= %d \n",i);
    if(islower(S[indMaior])) // verifica primeiro caracter minusculo
    {
        while(S[i] != ' ') // transforma toda palavra para maisculo
        {
            S[i] = toupper(S[i]);
            ++i;
        }
    }
    else
    {
        while(S[i] != ' ')
        {
            S[i] = tolower(S[i]); // transforma toda palavra para minusculo
            ++i;
        }
    }
    
   
    // *************  agora menor  **************
   /* i = indI = 0;
    
    while(S[i] != '\0')
    {
        c = 0; // contar caracteres de palavra
        indI = i; // armazena o indice inicial da palavra
        while(S[i] != ' ' && S[i] != '\0')
        {
            c++;
            ++i;
        }
        
        if(c > limMenor)
        {
            limMenor = c; // achei a menor palavra
            indMenor = indI;
        }
        ++i;
    }
    
    i = indMenor;
    
    if(islower(S[indMenor]))
    {
        while(S[i] != ' ')
        {
            S[i] = toupper(S[i]);
            ++i;
        }
    }
    else
    {
        while(S[i] != ' ')
        {
            S[i] = tolower(S[i]);
            ++i;
        }
    }
    */
    
    printf("%s", S);
       
    
    return 0;
}
