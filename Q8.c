#include <stdio.h>


int main()
{

    //declaracao de variaveis
    float salario, salario_minimo;
    float quantidade_salario_minimo;

    //entrada de dados
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);
    printf("Digite o salario minimo: ");
    scanf("%f", &salario_minimo);
    //processamento
    quantidade_salario_minimo = salario/salario_minimo;
    //saida
    printf("O funcionario ganha essa quantidade de salarios minimos: %.2f", quantidade_salario_minimo);


    return 0;
}
