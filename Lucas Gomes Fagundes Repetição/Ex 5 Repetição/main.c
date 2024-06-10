#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, qntpares = 0, qntimpares = 0, qnttotal = 0;
    int somapares = 0, somatotal = 0;

    printf("Digite numeros da sua escolha (para parar digite 0):\n");

    while(1) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if(numero == 0) {
            break;
        }
        if(numero % 2 == 0) {
            qntpares++;
            somapares += numero;
        }
        else {
            qntimpares++;
        }
        qnttotal++;
        somatotal += numero;
    }

    if(qnttotal == 0) {
        printf("Nenhum numero foi inserido.\n");
    }
    else {
        float mediageral = (float)somatotal / qnttotal;
        float mediapares = qntpares > 0 ? (float)somapares / qntpares : 0;

        printf("Quantidade de numeros pares: %d\n", qntpares);
        printf("Quantidade de numeros impares: %d\n", qntimpares);
        printf("Media de valores pares: %.2f\n", mediapares);
        printf("Media geral dos numeros: %.2f\n", mediageral);
    }

    return 0;
}
