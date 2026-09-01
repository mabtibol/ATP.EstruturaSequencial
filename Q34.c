#include <stdio.h>
#include <math.h>

int main() {

    //declaracao de variaveis
    float peso;
    float altura;
    float imc;

    //entrada de dados
    printf("Digite o peso em kg: ");
    scanf("%f", &peso);
    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    //processamento
    imc = peso/pow(altura,2);

    //saida
    printf("\nO indice de massa corporea eh: %.2f", imc);


    return 0;
}
