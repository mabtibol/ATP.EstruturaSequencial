#include <stdio.h>
#include <math.h>

int main() {

    //declaracao de variaveis
    float diagonal;
    float area;

    //entrada de dados
    printf("Digite a diagonal do quadrado: ");
    scanf("%f", &diagonal);

    //processamento
    area = diagonal*diagonal/2;

    //saida
    printf("A area eh: %.2f", area);

    return 0;
}
