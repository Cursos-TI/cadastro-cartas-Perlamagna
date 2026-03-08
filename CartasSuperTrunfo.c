#include <stdio.h>

int main() {

    // CARTA 1
    char pais1[50] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8516000;
    float pib1 = 1.92;
    int pontos1 = 20;

    // CARTA 2
    char pais2[50] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780000;
    float pib2 = 0.63;
    int pontos2 = 15;

    // DENSIDADE
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int opcao;

    printf("=== SUPER TRUNFO ===\n");
    printf("Escolha o atributo para comparar\n\n");

    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");

    printf("\nOpcao: ");
    scanf("%d", &opcao);

    printf("\n");

    switch(opcao) {

        case 1:

            printf("Comparacao de Populacao\n");
            printf("%s: %d\n", pais1, populacao1);
            printf("%s: %d\n", pais2, populacao2);

            if(populacao1 > populacao2)
                printf("\nVencedor: %s\n", pais1);
            else if(populacao2 > populacao1)
                printf("\nVencedor: %s\n", pais2);
            else
                printf("\nEmpate!\n");

            break;


        case 2:

            printf("Comparacao de Area\n");
            printf("%s: %.2f\n", pais1, area1);
            printf("%s: %.2f\n", pais2, area2);

            if(area1 > area2)
                printf("\nVencedor: %s\n", pais1);
            else if(area2 > area1)
                printf("\nVencedor: %s\n", pais2);
            else
                printf("\nEmpate!\n");

            break;


        case 3:

            printf("Comparacao de PIB\n");
            printf("%s: %.2f\n", pais1, pib1);
            printf("%s: %.2f\n", pais2, pib2);

            if(pib1 > pib2)
                printf("\nVencedor: %s\n", pais1);
            else if(pib2 > pib1)
                printf("\nVencedor: %s\n", pais2);
            else
                printf("\nEmpate!\n");

            break;


        case 4:

            printf("Comparacao de Pontos Turisticos\n");
            printf("%s: %d\n", pais1, pontos1);
            printf("%s: %d\n", pais2, pontos2);

            if(pontos1 > pontos2)
                printf("\nVencedor: %s\n", pais1);
            else if(pontos2 > pontos1)
                printf("\nVencedor: %s\n", pais2);
            else
                printf("\nEmpate!\n");

            break;


        case 5:

            printf("Comparacao de Densidade Demografica\n");
            printf("%s: %.4f\n", pais1, densidade1);
            printf("%s: %.4f\n", pais2, densidade2);

            // REGRA INVERTIDA
            if(densidade1 < densidade2)
                printf("\nVencedor: %s\n", pais1);
            else if(densidade2 < densidade1)
                printf("\nVencedor: %s\n", pais2);
            else
                printf("\nEmpate!\n");

            break;


        default:
            printf("Opcao invalida!\n");

    }

    return 0;
}