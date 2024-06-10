#include <stdio.h>
#include <stdlib.h>

int main() {
    float altura, menor, maior;
    int i;

    printf("Digite a altura da primeira pessoa: ");
    scanf("%f", &altura);
    menor = altura;
    maior = altura;
    for(i = 2; i <= 15; i++) {
        printf("Digite a altura da pessoa %d: ", i);
        scanf("%f", &altura);
        if(altura < menor) {
            menor = altura;
        }
        if(altura > maior) {
            maior = altura;
        }
    }

    printf("A menor altura do grupo eh: %.2f\n", menor);
    printf("A maior altura do grupo eh: %.2f\n", maior);

    return 0;
}
