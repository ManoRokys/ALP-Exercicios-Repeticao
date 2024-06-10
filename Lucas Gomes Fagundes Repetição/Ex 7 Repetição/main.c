#include <stdio.h>
#include <stdlib.h>

int main() {
    int tabuada, i;

    printf("Digite um numero (entre 1 e 10) para ver sua tabuada: ");
    scanf("%d", &tabuada);

    if(tabuada < 1 || tabuada > 10) {
        printf("Valor invalido. Por favor insira um valor entre 1 e 10\n");
        return 1;
    }

    printf("Tabuada de %d:\n", tabuada);
    for(i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", i, tabuada, i * tabuada);
    }

    return 0;
}
