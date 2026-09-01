#include <stdio.h>

int main() {

    //declaracao de variaveis
    float distancia;
    float velocidade;
    float tempo;
    float velocidade_metros;

    //entrada de dados
    printf("Digite a distancia entre os pontos: ");
    scanf("%f", &distancia);
    printf("Digite a velocidade em km/h: ");
    scanf("%f", &velocidade);

    //processamento
    tempo = distancia/velocidade;
    velocidade_metros = velocidade/3.6;

    //saida
    printf("\nOtempo medio de chegada eh: %.2f", tempo);
    printf("\nA velocidade em metros eh: %.2f", velocidade_metros);


    return 0;
}
