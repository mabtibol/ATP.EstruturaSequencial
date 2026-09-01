#include <stdio.h>


int main() {

    //declaracao de variaveis
    float salario;
    float novo_salario;
    const float x=0.37;

    //entrada de dados
    printf("\nDigite o salario: ");
    scanf("%f", &salario);

    //processamento
    novo_salario = x*salario + salario;

    //saida
    printf("\nO salario apos aumento eh: %.2f", novo_salario);


    return 0;
}
