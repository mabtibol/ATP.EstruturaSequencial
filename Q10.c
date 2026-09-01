#include <stdio.h>
#include <math.h>

int main() {

    //declaracao de variaveis
    float diagonal_quadrado;
    float area_quadrado;

    //entrada de dados
    printf("Digite a diagonal do quadrado: ");
    scanf("%f", &diagonal_quadrado);

    //processamento
    area_quadrado = diagonal_quadrado * diagonal_quadrado/2;

    //saida
    printf("A area do quadrado eh: %.2f", area_quadrado);

    return 0;
}
