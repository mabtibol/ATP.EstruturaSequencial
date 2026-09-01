#include <stdio.h>

    int main () {

        //declaracao de variaveis
        float temp_celsius;
        float temp_fahrenheit=0;

        //entrada de dados
        printf("Entre com a temperatura em Celsius: ");
        scanf("%f", &temp_celsius);

        //processamento
        temp_fahrenheit = (9*temp_celsius + 160)/5;

        //saida
        printf("A temperantura em Fahrenheit eh: %.2f", temp_fahrenheit);

        return 0;

    }
