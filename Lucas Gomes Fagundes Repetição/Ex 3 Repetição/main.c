#include <stdio.h>
#include <stdlib.h>

int main() {
    float numero, soma = 0;
    int positivo = 0, negativo = 0, qnttotal = 0;

    while(1) {
        printf("Digite um numero (ou 0 para sair): ");
        scanf("%f", &numero);

        if(numero == 0) {
            break;
        }
        soma += numero;
        qnttotal++;

        if(numero > 0) {
            positivo++;
        } else if(numero < 0) {
            negativo++;
        }
    }

    if(qnttotal == 0) {
        printf("Nenhum numero foi inserido.\n");
    } else {
        float media = soma / qnttotal;
        float positivos = (float)positivo / qnttotal * 100;
        float negativos = (float)negativo / qnttotal * 100;




        printf("Media dos valores lidos: %.2f\n", media);
        printf("Quantidade de valores positivos: %d\n", positivo);
        printf("Quantidade de valores negativos: %d\n", negativo);
        printf("Percentual de valores positivos: %.2f%%\n", positivos);
        printf("Percentual de valores negativos: %.2f%%\n", negativos);
    }

    return 0;
}
