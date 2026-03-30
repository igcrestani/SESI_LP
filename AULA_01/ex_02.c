#include <stdio.h>

int main() {
    int num1, num2, soma;

    // Entrada dos números
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    // Soma
    soma = num1 + num2;

    // Saída do resultado
    printf("A soma é: %d\n", soma);

    return 0;
}