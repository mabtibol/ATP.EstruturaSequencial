#include <stdio.h>


int main() {

    //declaracao de variaveis
    float custo_fabrica;
    const float percentagem=28;
    const float imposto=45;
    float x;
    float y;

    //entrada de dados
    printf("\nDigite o custo de fabrica do carro: ");
    scanf("%f", &custo_fabrica);

    //processamento
    x = (imposto*custo_fabrica)/100 + custo_fabrica;
    y = x + (percentagem*x)/100;

    //saida
    printf("\nO custo do carro para o consumidor eh de: %.2f", y);


    return 0;
}
