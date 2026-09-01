#include <stdio.h>


int main() {

    //declaracao de variaveis
    int ano_nascimento;
    int ano_atual;
    int idade;
    int idade_2028;

    //entrada de dados
    printf("\nDigite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);
    printf("\nDigite o ano atual: ");
    scanf("%d", &ano_atual);

    //processamento
    idade = ano_atual - ano_nascimento;
    idade_2028 = 2028 - ano_nascimento;

    //saida
    printf("\nA idade da pessoa eh: %d anos\n", idade);
    printf("\nA pessoa tera %d anos em 2028\n", idade_2028);


    return 0;
}
