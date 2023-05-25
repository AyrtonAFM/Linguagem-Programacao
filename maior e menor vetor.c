#include <stdio.h>
#include <stdlib.h>

float lerVetor(float vetor[], int n)
{
    for(int i = 0; i < n; i++)
    {
        scanf("%f",&vetor[i]);
    }
}

float obterMaiorElemento(float vetor[], int n)
{
    float maior = vetor[0];

    for(int i = 1; i < n; i++)
    {
        if(vetor[i] > maior)
        {
            maior = vetor[i]; //Atualizo a referência
        }
    }

    return maior;
}

 float obterMenorElemento(float vetor[], int n)
{
    float menor = vetor[0];

    for(int i = 1; i < n; i++)
    {
        if(vetor[i] < menor)
        {
            menor = vetor[i]; //Atualizo a referência
        }
    }

    return menor;
}

void exibirVetor(float vetor[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%.1f ", vetor[i]);
    }
}

float valorMedia (float vetor[], int n)
{
    float valor,calculo=0;

    for(int i=0;i<n;i++)
    {
        valor = vetor[i];
        calculo +=valor;
    }
    valor = calculo/n;
    return valor;


}
int main ()
{
    int TAMANHO_VETOR = 5;
    float vetor[TAMANHO_VETOR];
    float maior,menor,media;

    printf("----MENOR E MAIOR VALOR EM UM VETOR----\n\n");

    printf("Informe os %d elementos do vetor: \n",TAMANHO_VETOR);

    lerVetor(vetor,TAMANHO_VETOR);

    printf("\nOs elementos do vetor:\n");
    exibirVetor(vetor,TAMANHO_VETOR);

    maior = obterMaiorElemento(vetor,TAMANHO_VETOR);
    printf("\n\nO MAIOR elemento do vetor: %.1f ",maior);

    menor = obterMenorElemento(vetor,TAMANHO_VETOR);
    printf("\n\nO MENOR elemento do vetor: %.1f ",menor);

    media = valorMedia(vetor,TAMANHO_VETOR);
    printf("\n\nA MEDIA dos elementos do vetor e: %.2f",media);

    
    return 0;
}
