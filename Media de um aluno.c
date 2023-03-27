#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, media,maiornota, menornota,notadomeio;
    int i;

    printf("Digite a PRIMEIRA nota: ");
    scanf("%f",&nota1);

    printf("\nDigite a SEGUNDA nota: ");
    scanf("%f",&nota2);

    printf("\nDigite a TERCEIRA nota: ");
    scanf("%f",&nota3);

    media = (nota1+nota2+nota3) / 3;

    if (media>= 7.0)
    {
        printf("\n\nA media do aluno(a) e: %.1f", media);
        printf("\n---PARABENS VOCE FOI APROVADO!!---\n\n");
    }
    else{

        printf("\n\nA media do aluno(a) e: %.1f", media);

        menornota = nota1; // Processamento menor nota

        if (nota3 < menornota){

            menornota = nota3;
        }
        if (nota2 < menornota) {

            menornota = nota2;

        }

        maiornota = nota1; // Processamento maior nota

        if (nota3 > maiornota){

            maiornota = nota3;
        }
        if (nota2 > maiornota) {

            maiornota = nota2;

        }

        notadomeio= (nota1+nota2+nota3)- (maiornota+menornota);

        printf("\nSua nota nao foi o suficiente para aprovacao!!\n");
        printf("\nInsira a nota da reposicao que vai substituir a menor nota: ");
        scanf("%f",&menornota);

        media = (maiornota+menornota+notadomeio)/3;

        if(media >= 7.0)
        {

            printf("\nSua nova media foi: %.1f",media);
            printf ("\n---PARABÉNS VOCÊ FOI APROVADO!!!---\n");
        }
        else
        {

            printf("\nSua nova media foi: %.1f",media);
            printf("\n---INFELIZMENTE VOCE FOI REPROVADO!!!---\n");

        }
    }



    return 0;
}
