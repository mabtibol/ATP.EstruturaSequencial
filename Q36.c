#include <stdio.h>
#include<math.h>


int main() {

    //declaracao de variaveis
    float custo;
    float preco_convite;
    float quantidade_convite;
    float quantidade_convite2;

    //entrada de dados
    printf("Digite o custo do espetaculo: ");
    scanf("%f", &custo);
    printf("Digite o preco do convite: ");
    scanf("%f", &preco_convite);

    //processamento
    quantidade_convite =  custo/preco_convite;
    quantidade_convite2 = 1.23*custo/preco_convite;

    //
    printf("\nA quantidade a ser vendida para cobrir o custo eh: %.2f convites\n", quantidade_convite);
    printf("\nA quantidade a ser vendida para obter 23 por cento de lucro eh: %.2f convites\n", quantidade_convite2);


    return 0;
}
