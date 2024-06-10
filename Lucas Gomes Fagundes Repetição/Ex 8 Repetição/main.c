#include <stdio.h>
#include <stdlib.h>

int main() {
    int ini, resultado = 1;


    printf("Digite o valor inicial(numeros maiores que 31 nao funcionam no sistema): ");
    scanf("%d", &ini);

    if(ini < 0) {
        printf("deve ser um numero positivo.\n");
        return 1;
    }
    printf("%d = ", ini);
    for(int i = ini; i >= 1; i--) {
        resultado *= i;
        printf("%d", i);

        if(i > 1) {
            printf(" X ");
        }
    }

    printf(" = %d\n", resultado);

    return 0;
}
