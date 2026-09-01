#include <stdio.h>


int main() {

    //declaracao de variaveis
    int peso;
    int peso_gramas;
    float novo_peso;

    //entrada de dados
    printf("Digite o seu peso em kg: ");
    scanf("%d", &peso);

    //processamento
    peso_gramas = 1000*peso;
    novo_peso = 1.05*peso_gramas;

    //saida
    printf("\nO seu peso em gramas eh: %d", peso_gramas);
    printf("\nO seu novo peso eh: %.2f", novo_peso);

    return 0;
}
