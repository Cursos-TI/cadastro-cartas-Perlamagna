#include <stdio.h>

int main() {

    int opcao;

    printf("=== MENU DO JOGO ===\n");
    printf("1 - Iniciar jogo\n");
    printf("2 - Ver regras\n");
    printf("3 - Sair\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {

        case 1:
            printf("Iniciando o jogo...\n");
            break;

        case 2:
            printf("=== REGRAS ===\n");
            printf("Acerte o numero secreto entre 1 e 10.\n");
            break;

        case 3:
            printf("Saindo do programa...\n");
            break;

        default:
            printf("Opcao invalida. Tente novamente.\n");
    }

    return 0;
}