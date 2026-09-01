#include <stdio.h>


int main() {

    //declaracao de variaveis
    float total_eleitores;
    float votos_cand1;
    float votos_cand2;
    float percentual1;
    float percentual2;
    float percentual_nulo;

    //entrada de dados
    printf("Digite o numero total de eleitores: ");
    scanf("%f", &total_eleitores);
    printf("Digite o numero de votos do candidato 1: ");
    scanf("%f", &votos_cand1);
    printf("Digite o numero de votos do candidato 2: ");
    scanf("%f", &votos_cand2);

    //processamento
    percentual1 = 100*votos_cand1/total_eleitores;
    percentual2 = 100*votos_cand2/total_eleitores;
    percentual_nulo = (total_eleitores - votos_cand1 - votos_cand2)/total_eleitores*100;

    //saida
    printf("O percentual de votos do candidato 1 eh: %.2f\n", percentual1);
    printf("O percentual de votos do candidato 2 eh: %.2f\n", percentual2);
    printf("O percentual de votos nulo eh: %.2f\n", percentual_nulo);


    return 0;
}
