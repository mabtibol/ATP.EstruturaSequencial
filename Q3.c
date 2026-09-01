#include <stdio.h>


int main(){

    //declaracao de variaveis
    int n1, n2;
    float divisao;

    //entrada de dados
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    //processamento
    divisao = n1/n2;

    //saida
    printf("A divisao entre o primeiro numero e o segundo eh: %.2f", divisao);

    return 0;
}
