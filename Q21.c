#include <stdio.h>


int main() {

    //declaracao de variaveis
    float produto1;
    float produto2;
    float produto3;
    float produto4;
    float produto5;
    float valor_total;
    float valor_pagamento;
    float troco;

    //entrada de dados
    printf("Digite o valor do primeiro produto: ");
    scanf("%f", &produto1);
    printf("Digite o valor do segundo produto: ");
    scanf("%f", &produto2);
    printf("Digite o valor do terceiro produto: ");
    scanf("%f", &produto3);
    printf("Digite o valor do quarto produto: ");
    scanf("%f", &produto4);
    printf("Digite o valor do quinto produto: ");
    scanf("%f", &produto5);
    printf("Digite o valor pago na compra: ");
    scanf("%f", &valor_pagamento);

    //processamento
    valor_total = produto1 + produto2 + produto3 + produto4 + produto5;
    troco = valor_pagamento - valor_total;

    //saida
    printf("\nO troco a ser devolvido eh: %.2f", troco);


    return 0;
}
