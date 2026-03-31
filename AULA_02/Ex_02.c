/*Leia um número inteiro e informe se ele é par ou ímpar.3) Maior entre dois números*/

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%f", &numero);

    if (numero % 2 == 0) {
        printf("O numero é PAR.\n");
    } else {
        printf("O numero é IMPAR.\n");
    }

    return 0;
}