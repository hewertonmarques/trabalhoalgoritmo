#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    float alturaA, alturaB;

    printf("---Verificador de Maior Altura---\n");
    printf("Digite a altura da pessoa A");
    scanf("%f", &alturaA);
    printf("Digite a altura da pessoa B");
    scanf("%f", &alturaB);

    if  (alturaA > alturaB) {
        printf("\nA pessoa A eh maior que a pesoa B.\n");
    } else if (alturaB > alturaA) {
        printf("\nA pessoa B eh maior que a pessoa A.\n");
    } else if (alturaB > alturaA) {
    } else {
        printf("\n Ambas as pessoas tem a mesma altura.\n");
    }

    return 0;

    }
