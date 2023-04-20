#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lado1,lado2,lado3;
    int maiorValor,menorValor,valorDoMeio,somaLados;


    printf("----TIPO DE TRIANGULO----\n\n\n");

    printf("Insira o valor do PRIMEIRO LADO do triangulo:\n");
    scanf("%d",&lado1);

    printf("Insira o valor do SEGUNDO LADO do triangulo:\n");
    scanf("%d",&lado2);

    printf("Insira o valor do TERCEIRO LADO do triangulo:\n");
    scanf("%d",&lado3);

    maiorValor = lado1;

    if (lado3 > maiorValor){

        maiorValor = lado3;
    }if (lado2 > maiorValor) {

        maiorValor = lado2;

    }

     menorValor = lado1; // Processamento menor nota

        if (lado3 < menorValor){

            menorValor = lado3;
        }
        if (lado2 < menorValor) {

            menorValor = lado2;

        }
    somaLados = maiorValor+menorValor;
    valorDoMeio = (lado1+lado2+lado3)- (maiorValor+menorValor);

    if(valorDoMeio > somaLados){

        printf("ESSE TRIANGULO NAO EXISTE");
        return 1;

    }
    else{


        if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3 )
        {
            printf("\n\nO triangulo informado e ISOSCELES\n\n");
        }
        else if (lado1 == lado2 == lado3)
        {
              printf("\n\nO triangulo informado e EQUILATERO\n\n");
        }
        else
        {
              printf("\n\nO triangulo informado e ESCALENO\n\n");
        }
    }
    return 0;
}
