#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    int idade1, idade2;

    printf("Digite a idade da primeira pessoa;");
    scanf("%d", &idade1);

    printf("Digite a idade da segunda pessoa;");
    scanf("%d", &idade2);

    if (idade1 > idade2) {
        printf("Maior idade: %d\n", idade1);
        printf("Menor idade: %d\n", idade2);
    }
    else if(idade2 > idade1) {
        printf("Maior idade: %d\n", idade2);
        printf("Menor idade: %d\n", idade1);
    }
    else {
        printf("As duas pessoas possuem a mesma idade: %d anos.\n",idade1);
    }

    return 0;
}
