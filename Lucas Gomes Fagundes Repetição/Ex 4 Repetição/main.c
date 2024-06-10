#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, zerodois = 0, doiscinco = 0, cincosete = 0, setecem = 0, cemmais = 0;

    printf("Digite numeros de 0 a 100 (para parar digite um numero negativo):\n");

    while(1) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if(numero < 0) {
            break;
        }
        else if(numero >= 0 && numero <= 25) {
            zerodois++;
        }
        else if(numero >= 26 && numero <= 50) {
            doiscinco++;
        }
        else if(numero >= 51 && numero <= 75) {
            cincosete++;
        }
        else if(numero >= 76 && numero <= 100) {
            setecem++;
        }
        else{
            cemmais++;
        }
    }


    printf("Quantidade de numeros no intervalo 0-25: %d\n", zerodois);
    printf("Quantidade de numeros no intervalo 26-50: %d\n", doiscinco);
    printf("Quantidade de numeros no intervalo 51-75: %d\n", cincosete);
    printf("Quantidade de numeros no intervalo 76-100: %d\n", setecem);
    printf("Quantidade de numeros fora do intervalo: %d\n", cemmais);

    return 0;
}
