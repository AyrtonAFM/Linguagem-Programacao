#include <stdio.h>
#include <stdlib.h>

int main()
{
    float juros,valorDaCompra,valorTotalDaCompra,parcelas;
    int quantidadeDeParcelas,respostaParcela;

    printf("----VENDA DE PRODUTOS----\n\n");
    printf("Qual foi o valor da sua compra? R$ ");
    scanf("%f",&valorDaCompra);

    if (valorDaCompra<= 0 )
    {

		printf ( "\n-OPCAO INVALIDA-\n" );
		printf ( "-EXECUTE NOVAMENTE-\n" );
		return 0;
    }

    printf ( "\n\nVoce quer parcelar suas compras? \n" );
	printf ( "Digite 1 para Sim / Digite 0 para Nao \n" );
	scanf ("%d",&respostaParcela);

	if (respostaParcela <= 1 & respostaParcela > 0 )
    {
        printf ( "\nOk! A quantidade de parcelas e os juros que as acompanham sao:\n\n");
        printf ( "2 parcelas com 1,1%% de juros\n");
        printf ( "3 parcelas com 2,7%% de juros\n");
        printf ( "4 parcelas com 4,2%% de juros\n");
        printf ( "5 parcelas com 5,9%% de juros\n");

        printf ("\nQuantas parcelas você quer? \n");
        scanf ("%d",&quantidadeDeParcelas);

        printf("Saida: %f",valorDaCompra);
    }

    return 0;
}
