#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d,maiorValor;

    printf("---ENCONTRAR O MAIOR VALOR---\n\n");

    printf("Digite o primeiro valor: ");
    scanf ("%f",&a);

    printf("\nDigite o segundo valor: ");
    scanf ("%f",&b);

    printf("\nDigite o terceiro valor: ");
    scanf ("%f",&c);

    printf("\nDigite o quarto valor: ");
    scanf ("%f",&d);

    maiorValor = a;

    if (d > maiorValor){

        maiorValor = d;
    }if (c > maiorValor) {

        maiorValor = c;

    }if (b > maiorValor){

         maiorValor = b;
    }

    printf("\n\nOS VALORES SAO: |%.1f| |%.1f| |%.1f| |%.1f|",a,b,c,d);
    printf ("\n\nO MAIOR VALOR ENTRE OS VALORES ACIMA E: %.1f",maiorValor);
    printf("\n\n");
    return 0;
}
