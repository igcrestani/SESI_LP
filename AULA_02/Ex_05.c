/*Cálculo de Desconto
Leia o valor de uma compra:
Se for maior que R$100 → desconto de 10%
Caso contrário → desconto de 5%
Exiba o valor final.*/

#include <stdio.h>

int main() {
    float valorCompra, desconto, valorFinal;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorCompra);

    if (valorCompra > 100) {
        desconto = valorCompra * 0.10; // 10% de desconto
    } else {
        desconto = valorCompra * 0.05; // 5% de desconto
    }

    valorFinal = valorCompra - desconto;

    printf("Valor final com desconto: R$ %.2f\n", valorFinal);

    return 0;
}