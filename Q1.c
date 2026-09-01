#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração de variáveis
    int n1, n2, soma;
    //entrada de dados
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    //processamento
    soma = n1 + n2;
    //saída
    printf("A soma dos dois números é: %d", soma);

    return 0;
}
