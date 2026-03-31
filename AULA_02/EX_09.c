/*Número Positivo, Negativo ou Zero
Leia um número e informe se ele é:
Positivo
Negativo
Zero*/

#include <stdio.h>

int main() {
    float numero; // Usando float para permitir números decimais

    // Solicita ao usuário que digite um número
    printf("Digite um número: ");
    scanf("%f", &numero);

    // Verifica se é positivo, negativo ou zero
    if (numero > 0) {
        printf("O número é Positivo.\n");
    } else if (numero < 0) {
        printf("O número é Negativo.\n");
    } else {
        printf("O número é Zero.\n");
    }

    return 0;
}