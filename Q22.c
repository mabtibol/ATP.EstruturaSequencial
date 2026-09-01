#include <stdio.h>


int main() {

    //declaracao de variaveis
    int a;
    int b;
    int c;
    int x;

    //entrada de dados
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);

    //processamento
    x = a;
    a = b;
    b = c;
    c = x;

    //saida
    printf("\nO valor de a eh: %d", a);
    printf("\nO valor de b eh: %d", b);
    printf("\nO valor de c eh: %d", c);

    return 0;
}
