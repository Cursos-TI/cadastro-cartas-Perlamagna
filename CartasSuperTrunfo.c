#include <stdio.h>

int main() {

    char estado;
    int cidade;
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    float densidadePopulacional;
    float pibPerCapita;

    printf("=== Cadastro de Carta - Super Trunfo Paises ===\n\n");

    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado);

    printf("Digite o numero da cidade (1-4): ");
    scanf("%d", &cidade);

    printf("Digite a populacao: ");
    scanf("%d", &populacao);

    printf("Digite a area (km2): ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);

    // Calculos automáticos
    densidadePopulacional = populacao / area;
    pibPerCapita = pib / populacao;

    printf("\n=== Carta Cadastrada ===\n");
    printf("Codigo da carta: %c0%d\n", estado, cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pontosTuristicos);

    printf("\n--- Dados Calculados ---\n");
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional);
    printf("PIB per Capita: %.6f\n", pibPerCapita);

    return 0;
}