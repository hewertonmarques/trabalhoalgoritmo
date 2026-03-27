#include  <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "Portuguese");
    int opcao;

    printf("---Menu de Sobremesas---\n");
    printf("1. Pudim\n");
    printf("2. Mouse de Maracuja\n");
    printf("3. Brigadeiro\n");
    printf("4. Danone\n");
    printf("escolha uma opção:");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Voce escolheu Pudim.\n");
            break;
        case 2:
            printf("Voce escolheu Mouse de Maracuja.\n");
            break;
        case 3:
            printf("Voce escolheu Brigadeiro.\n");
            break;
        case 4:
            printf("Voce escolheu Danone.\n");
            break;
        default:
            printf("Opção inválida! Essa sobremesa nao existe no menu.\n");
    }

    return 0;

}
