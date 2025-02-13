#include <stdio.h>

int main(void) {

    // Variaveis
    char codigo[4];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    printf("Codigo da cidade: ");
    scanf("%s", codigo); //Digitar o código da cidade

    printf("Nome da cidade: ");
    scanf("%s", cidade); //Digitar a cidade

    printf("Populacao: ");
    scanf("%d", &populacao); //Digitar a população

    printf("Area: ");
    scanf("%f", &area); //Digitar a area

    printf("PIB: ");
    scanf("%f", &pib); //Digitar valor do PIB

    printf("Ponto Turistico: ");
    scanf("%d", &pontosTuristicos); //Digitar a quantidade pontos turisticos

    /*Valores aplicados as carta*/
    printf("\nDADOS DA CARTA:\n");
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao %d\n", populacao);
    printf("Area: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos Turisticos: %d\n", pontosTuristicos);

    return 0;
}