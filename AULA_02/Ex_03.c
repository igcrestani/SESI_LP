/* Maior entre dois números

Leia dois números inteiros e informe qual é o maior ou se são iguais.*/


#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    if (a > b) {
        printf("O maior numero é: %d\n", a);
    } else if (b > a) {
        printf("O maior numero é: %d\n", b);
    } else {
        printf("Os dois numeros sao iguais.\n");
    }

    return 0;
}