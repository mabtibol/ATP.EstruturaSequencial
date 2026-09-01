#include <stdio.h>


int main() {

    //declaracao de variaveis
    float salario_minimo;
    float quant_kilowatt;
    float valor_kilowatt;
    float valor_pago;
    float valor_desconto;

    //entrada de dados
    printf("Digite o salario minimo: ");
    scanf("%f", &salario_minimo);
    printf("Digite a quantidade de kilowatt: ");
    scanf("%f", &quant_kilowatt);

    //processamento
    valor_kilowatt = salario_minimo/5;
    valor_pago = valor_kilowatt*quant_kilowatt;
    valor_desconto = 0.85*valor_pago;

    //saida
    printf("\nO valor de cada kilowatt eh: %.2f", valor_kilowatt);
    printf("\nO valor de energia a ser pago eh: %.2f", valor_pago);
    printf("\nO valor com desconto eh: %.2f", valor_desconto);

    return 0;
}
