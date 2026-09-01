#include <stdio.h>

int main () {

    //declaracao de variaveis
    int quantidade1, quantidade2, quantidade3;
    float valor1, valor2, valor3;
    float total;

    //entrada de dados
    printf("\nDigite a quantidade do primeiro produto: ");
    scanf("%d", &quantidade1);
    printf("\nDigite a quantidade do segundo produto: ");
    scanf("%d", &quantidade2);
    printf("\nDigite a quantidade do terceiro produto: ");
    scanf("%d", &quantidade3);

    printf("\nDigite o valor do primeiro produto: ");
    scanf("%f", &valor1);
    printf("\nDigite o valor do segundo produto; ");
    scanf("%f", &valor2);
    printf("\nDigite o valor do terceiro produto: ");
    scanf("%f", &valor3);

    //processamento
    total = quantidade1*valor1 + quantidade2*valor2 + quantidade3*valor3;

    //saida
    printf("\nO valor total eh: %.2f", total);

    return 0;

    }
