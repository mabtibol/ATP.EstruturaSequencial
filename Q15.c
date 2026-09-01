#include <stdio.h>

int main () {

        //declaracao de variaveis
        int ano_nascimento;
        int ano_atual;
        int idade;
        int idade_semanas;

        //entrada de dados
        printf("Digite o ano de nascimento: ");
        scanf("%d", &ano_nascimento);
        printf("Digite o ano atual: ");
        scanf("%d", &ano_atual);

        //processamento
        idade = ano_atual - ano_nascimento;
        idade_semanas = idade*52;

        //saida
        printf("A idade da pessoa eh: %d anos\n", idade);
        printf("A idade da pessoa em semanas eh: %d semanas\n", idade_semanas);

        return 0;
}
