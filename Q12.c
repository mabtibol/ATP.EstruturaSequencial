#include <stdio.h>


int main() {

    //declaracao de variaveis
    float salario;
    float novo_salario;

    //entrada de dados
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    //processamento
    novo_salario = 1.25*salario;

    //saida
    printf("O salario do funcionario apos o aumento eh: %.2f", novo_salario);

    return 0;
}
