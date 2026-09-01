#include <stdio.h>

int main() {

    //declaracao de variaveis
    float valor_compra;
    float valor_prestacoes;

    //entrada de dados
    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);

    //processamento
    valor_prestacoes = valor_compra/5;

    //saida
    printf("\nO valor de cada prestacao eh: %.2f", valor_prestacoes);


    return 0;
}
