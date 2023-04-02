#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d,trocaDeValores;

    printf("----ORDEM DECRESCENTE----\n\n");

    printf ("Digite o primeiro valor: ");
    scanf ("%f",&a);

    printf("\nDigite o segundo valor: ");
    scanf ("%f",&b);

    printf("\nDigite o terceiro valor: ");
    scanf ("%f",&c);

    printf("\nDigite o quarto valor: ");
    scanf ("%f",&d);

    if (a<d){

        trocaDeValores = a;
        a = d;
        d = trocaDeValores;

    }if (a<c) {

        trocaDeValores = a;
        a = c;
        c = trocaDeValores;

    }if (a<b){

        trocaDeValores = a;
        a = b;
        b = trocaDeValores;

    }if (b<d){

        trocaDeValores = b;
        b = d;
        d = trocaDeValores;

    }if (b<c){

        trocaDeValores = b;
        b = c;
        c = trocaDeValores;

    }if (c<d){

        trocaDeValores = c;
        c = d;
        d = trocaDeValores;
    }

    printf ("\n\nOs valores foram ordenados na ordem decrescente\n");
    printf ("Na ordem DECRESCENTE os valores sao: \n");
    printf ("|%.1f| |%.1f| |%.1f| |%.1f|",a,b,c,d);
    printf("\n\n");

    return 0;
}
