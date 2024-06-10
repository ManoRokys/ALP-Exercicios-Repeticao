#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;

    printf("Numeros impares de 100 a 200 :) :\n");

    for(numero = 101; numero <= 200; numero += 2) {
        printf("%d\n", numero);
    }

    printf("Deslize a tela para cima para ver o que esse programa faz ;)");

    return 0;
}
