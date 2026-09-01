#include <stdio.h>


int main() {

    //declaracao de variaveis
    float valor_produto;
    float novo_valor;

    //entrada de dados
    printf("Digite o valor do produto: ");
    scanf("%f", &valor_produto);

    //processamento
    novo_valor = 0.91*valor_produto;

    //saida
    printf("O valor do produto com desconto eh: %.2f", novo_valor);


    return 0;
}
