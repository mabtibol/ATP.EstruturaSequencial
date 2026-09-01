#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //declaracao de variaveis
    int x1;
    int x2;
    int resultado;
    //entrada de dados
    printf("Digite o primeiro numero: ");
    scanf("%d", &x1);
    printf("Digite o segundo numero: ");
    scanf("%d", &x2);
    //processamento
    resultado = pow(x1, x2);
    //saida
    printf("O resultado da potencia eh: %d", resultado);

    return 0;

}
