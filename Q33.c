#include <stdio.h>


int main(){

    //declaracao de variaveis
    float altura_x;
    float altura_subida;
    int degraus;

    //entrada de dados
    printf("\nDigite a altura do degrau: ");
    scanf("%f", &altura_x);
    printf("\nDigite a altura que deseja subir: ");
    scanf("%f", &altura_subida);

    //processamento
    degraus = altura_subida/altura_x;

    //saida
    printf("\nO usuario ira subir %d degraus", degraus);


    return 0;
}
