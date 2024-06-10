#include <stdio.h>
#include <stdlib.h>

int main() {
    int soma = 0;
    int numero;

    for(numero = 1; numero <= 500; numero++) {
        if(numero % 2 != 0 && numero % 3 == 0) {
            soma += numero;
        }
    }

    printf("A soma dos numeros impares multiplos de tres de 1 a 500 eh: %d\n", soma);

    return 0;
}
