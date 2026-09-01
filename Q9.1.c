#include <stdio.h>
#include <math.h>

int main(){

    //declaracao de variaveis
    int x;
    float raiz_quadrada;
    int quadrado_de_x;

    //entrada de dados
    printf("Digite o numero: ");
    scanf("%d", &x);

    //processamento
    raiz_quadrada = sqrt(x);
    quadrado_de_x = pow(x, 2);

    //saida
    printf("A raiz quadrada do numero eh: %.2f", raiz_quadrada);
    printf("\nO numero elevado ao quadrado eh: %d", quadrado_de_x);

    return 0;
}
