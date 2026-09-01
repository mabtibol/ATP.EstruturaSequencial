#include <stdio.h>


int main() {

    //declaracao de variaveis
    int num_apart;
    float valor_diaria;
    float valor_promo;
    float arrecadTotal;
    float arrecad2;
    float valorTotal1;
    float valorTotal2;

    //entrada de dados
    printf("Digite o numero de apartamentos: ");
    scanf("%d", &num_apart);
    printf("Digite o valor da diaria: ");
    scanf("%f", &valor_diaria);

    //processamento
    valor_promo = 0.75*valor_diaria;
    valorTotal1 = num_apart*valor_promo;
    valorTotal2 = 0.7*num_apart*valor_promo;
    arrecadTotal = num_apart*valor_diaria;
    arrecad2 = arrecadTotal - valorTotal1;


    //saida
    printf("\nA arreacadacao com todos os apartamentos ocupados eh: %.2f reais", valorTotal1);
    printf("\nA arrecadacao com 70 por cento de ocupacao eh: %.2f reais", valorTotal2);
    printf("\nO valor que o hotel deixara de arrecadar em virtude da promocao caso todos os apartamentos sejam ocupados eh: %.2f", arrecad2);




    return 0;
}
