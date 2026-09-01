
#include <stdio.h>

    int main () {

        //declaracao de variaveis
        float a, b , c, d , e, f;
        float x, y;

        //entrada de dados
        printf("Entre com o valor de a: ");
        scanf("%f", &a);
        printf("Entre com o valor de b: ");
        scanf("%f", &b);
        printf("Entre com o valor de c: ");
        scanf("%f", &c);
        printf("Entre com o valor de d: ");
        scanf("%f", &d);
        printf("Entre com o valor de e: ");
        scanf("%f", &e);
        printf("Entre com o valor de f: ");
        scanf("%f", &f);


        //processamento
        x = (c*e - b*f)/(a*e - b*d);
        y = (a*f - c*d)/(a*e - b*d);

        //saida
        printf("O valor de x eh: %.2f\n", x);
        printf("O valor de y eh: %.2f\n", y);

        return 0;
    }
