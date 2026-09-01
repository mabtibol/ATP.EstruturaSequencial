#include <stdio.h>


int main() {

    //declaracao de variaveis
    float tempo;
    float velocidade;
    float quantidade_combust;
    float distancia;

    //entrada de dados
    printf("Digite o tempo, em horas, gasto: ");
    scanf("%f", &tempo);
    printf("Digite a velocidade media em km/h: ");
    scanf("%f", &velocidade);

    //processamento
    distancia = tempo*velocidade;
    quantidade_combust = distancia/12;

    //saida
    printf("\nA quantidade de combustivel gasto foi: %.2f litros\n", quantidade_combust);


    return 0;
}
