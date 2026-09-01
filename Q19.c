#include <stdio.h>

int main ()
{

    //declaracao de variaveis
    float largura;
    float comprimento;
    float area_total;

    //entrada de dados
    printf("Digite a largura do terreno: ");
    scanf("%f", &largura);
    printf("Digite o comprimento do terreno: ");
    scanf("%f", &comprimento);

    //processamento
    area_total = largura*comprimento;

    //saida
    printf("A area total do terreno eh: %.2f", area_total);

    return 0;

}
