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

        printf ("\nQuantas parcelas voce quer? \n");
        scanf ("%d",&quantidadeDeParcelas);

        if (quantidadeDeParcelas <=2 & quantidadeDeParcelas>1) {

            juros = 1.1/100;
            valorTotalDaCompra = valorDaCompra * (1 + juros);
            parcelas = valorTotalDaCompra/2;
            printf("\nPerfeito! O valor total da compra sera de R$ %.2f",valorTotalDaCompra);
            printf ("\nCom 2 parcelas de R$ %.2f",parcelas,"\n");
            printf ("\nCOMPRA REALIZADA COM SUCESSO!!");
            printf ("\nOBRIGADO PELA PREFERENCIA!!\nVOLTE SEMPRE!!\n\n");

		}else if (quantidadeDeParcelas <=3 & quantidadeDeParcelas>2) {

            juros = 2.7/100;
            valorTotalDaCompra = valorDaCompra * (1 + juros);
            parcelas = valorTotalDaCompra/3;
            printf("\nPerfeito! O valor total da compra sera de R$ %.2f",valorTotalDaCompra);
            printf("\nCom 3 parcelas de R$ %.2f",parcelas,"\n");
            printf("\nCOMPRA REALIZADA COM SUCESSO!!");
            printf("\nOBRIGADO PELA PREFERENCIA!!\nVOLTE SEMPRE!!\n\n");

		}else if (quantidadeDeParcelas <=4 & quantidadeDeParcelas>3) {

            juros = 4.2/100;
            valorTotalDaCompra = valorDaCompra * (1 + juros);
            parcelas = valorTotalDaCompra/4;
            printf("\nPerfeito! O valor total da compra sera de R$ %.2f",valorTotalDaCompra);
            printf("\nCom 4 parcelas de R$ %.2f",parcelas,"\n");
            printf("\nCOMPRA REALIZADA COM SUCESSO!!");
            printf("\nOBRIGADO PELA PREFERENCIA!!\nVOLTE SEMPRE!!\n\n");

		}else if (quantidadeDeParcelas <=5 & quantidadeDeParcelas>4) {

            juros = 5.9/100;
            valorTotalDaCompra = valorDaCompra * (1 + juros);
            parcelas = valorTotalDaCompra/5;
            printf("\nPerfeito! O valor total da compra sera de R$ %.2f",valorTotalDaCompra);
            printf ("\nCom 5 parcelas de R$ %.2f",parcelas,"\n");
            printf ("\nCOMPRA REALIZADA COM SUCESSO!!");
            printf ("\nOBRIGADO PELA PREFERENCIA!!\nVOLTE SEMPRE!!\n\n");

		}else{

            printf("\n-----#OPCAO INVALIDA# ----\n\n");

        }

    }else if(respostaParcela>=0  & respostaParcela<1) {

        printf ("\nOK! O valor da compra A VISTA e: R$ %.2f",valorDaCompra);
        printf ("\nCOMPRA REALIZADA COM SUCESSO!!");
        printf ("\nOBRIGADO PELA PREFERENCIA!!\nVOLTE SEMPRE!!\n\n");

    }else {


        printf("\n-----#OPCAO INVALIDA# ----\n\n");

    }

    system("pause");
    return 0;
}
