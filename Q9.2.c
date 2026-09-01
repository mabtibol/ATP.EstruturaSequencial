#include <stdio.h>
#include <math.h>


int main() {

    //declaracao de variaveis
    float base, altura, lado, base_maior, base_menor, diag_maior, diag_menor, raio;
    float area_triangulo, area_quadrado, area_trapezio, area_retangulo, area_losango, area_circulo;
    float pi = (3.14);

    //entrada de dados
    printf("Digite a base: ");
    scanf("%f", &base);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    printf("digite o lado: ");
    scanf("%f", &lado);
    printf("Digite a base maior: ");
    scanf("%f", &base_maior);
    printf("Digite a base menor: ");
    scanf("%f", &base_menor);
    printf("Digite a diagonal maior: ");
    scanf("%f", &diag_maior);
    printf("Digite a diagonal menor: ");
    scanf("%f", &diag_menor);
    printf("Digite o raio: ");
    scanf("%f", &raio);

    //processamento
    area_triangulo = (base * altura)/2;
    area_quadrado = lado * lado;
    area_trapezio = (base_maior + base_menor)*altura/2;
    area_retangulo = base * altura;
    area_circulo = pi*pow(raio,2);
    area_losango = (diag_maior * diag_menor)/2;

    //saída
    printf("\nA area do triangulo eh: %.2f", area_triangulo);
    printf("\nA area do quadrado eh: %.2f", area_quadrado);
    printf("\nA area do trapezio eh: %.2f", area_trapezio);
    printf("\nA area do retangulo eh: %.2f", area_retangulo);
    printf("\nA area do circulo eh: %.2f", area_circulo);
    printf("\nA area do losango eh: %.2f", area_losango);

    return 0;
}
