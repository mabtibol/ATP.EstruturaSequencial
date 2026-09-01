#include <stdio.h>


int main()
{
    //declaracao de variaveis
    char x[50];
    char y[50];
    char z[50];

    //entrada de dados
    printf("Digite o primeiro nome: ");
    scanf("%s", x);
    printf("Digite o segundo nome: ");
    scanf("%s", y);
    printf("Digite o terceiro nome: ");
    scanf("%s", z);

    //saída
    printf("O primeiro nome eh: %s O terceiro nome eh: %s", x, z);
    printf("\nO segundo nome eh: %s", y);


    return 0;
}
