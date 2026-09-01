#include <stdio.h>
#include <math.h>


int main() {

    //declaracao de variaveis
    float p;
    float i;
    float n;
    float rendimento;
    float x;

    //entrada de dados
    printf("Digite o valor da aplicacao mensal: ");
    scanf("%f", &p);
    printf("Digite a taxa: ");
    scanf("%f", &i);
    printf("Digite o numero de meses: ");
    scanf("%f", &n);

    //processamento
    x = pow(1+i, n);
    rendimento = p*(x -1)/i;

    //saida
    printf("O rendimento eh: %.2f", rendimento);

    return 0;
}
