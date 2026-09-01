#include <stdio.h>

int main(){

    //declaração de variáveis
    float n1, n2, n3, media;

    //entrada de dados
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    //processamento
    media = (n1 + n2 + n3)/3;

    //saída
    printf("A media do aluno eh: %.2f", media);

    return 0;
}
