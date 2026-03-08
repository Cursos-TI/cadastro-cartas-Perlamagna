#include <stdio.h>

int main() {

    char estado;
    int cidade;
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    printf("=== Cadastro de Carta - Super Trunfo Paises ===\n\n");

    // Entrada de dados
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado);

    printf("Digite o numero da cidade (1-4): ");
    scanf("%d", &cidade);

    printf("Digite a populacao: ");
    scanf("%d", &populacao);

    printf("Digite a area (km2): ");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);

    // Saída de dados
    printf("\n=== Carta Cadastrada ===\n");
    printf("Codigo da carta: %c0%d\n", estado, cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f bilhoes\n", pib);
    printf("Pontos Turisticos: %d\n", pontosTuristicos);

    return 0;
}