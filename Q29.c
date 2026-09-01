#include <stdio.h>


int main() {

    //declaracao de variaveis
    float preco_custo;
    float valor_venda;
    float percentual;

    //entrada de dados
    printf("Digite o preco de custo: ");
    scanf("%f", &preco_custo);
    printf("Digite o percentual de acrescimo: ");
    scanf("%f", &percentual);

    //processamento
    valor_venda = (percentual*preco_custo)/100 + preco_custo;

    //saida
    printf("\nO valor de venda do produto eh: %.2f", valor_venda);


    return 0;
}
