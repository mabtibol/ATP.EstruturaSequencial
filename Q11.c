#include <stdio.h>


int main() {

    //declaracao de variaveis
    float salario;
    float imposto_de_renda;

    //entrada de dados
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    //processamento
    imposto_de_renda = 0.05*salario;

    //saida
    printf("O imposto de renda do funcionario eh: %.2f", imposto_de_renda);

    return 0;
}
