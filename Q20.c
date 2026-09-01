#include <stdio.h>


int main() {

    //declaracao de variaveis
    float comprimento;
    float largura;
    float altura;
    float volume;
    float valor_pago;

    //entrada de dados
    printf("Digite o comprimento da piscina: ");
    scanf("%f", &comprimento);
    printf("Digite a largura: ");
    scanf("%f", &largura);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    //processamento
    volume = comprimento*altura*largura;
    valor_pago = 45*volume;

    //saida
    printf("O valor da construcao eh: %.2f", valor_pago);


    return 0;
}
