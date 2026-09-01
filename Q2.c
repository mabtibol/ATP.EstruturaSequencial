#include <stdio.h>
#include <stdlib.h>

int main(){

    //declaração de variáveis
    float n1, n2, subtracao;

    //entrada de dados
    printf("Digite o numero 1: ");
    scanf("%f", &n1);
    printf("Digite o numero 2: ");
    scanf("%f", &n2);

    //processamento
    subtracao = n1 - n2;

    //saída
    printf("A subtracao eh igual a: %.2f", subtracao);

    return 0;
}
