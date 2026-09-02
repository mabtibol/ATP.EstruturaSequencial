#include <stdio.h>
#include <stdlib.h>

int main(){

    //declaracao de variaveis
    float n1, n2, peso1, peso2, média;
    //entrada de dados
    printf("Digite a primera nota: ");
    scanf("%f", &n1);
    printf("Digite o peso da primeira nota: ");
    scanf("%d", &peso1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite o peso da segunda nota: ");
    scanf("%d", &peso2);
    //processamento
    média = (n1*peso1 + n2*peso2)/(peso1 + peso2);
    //saida
    printf("A média ponderada do aluno eh: %.2f", média);

    return 0;
}
