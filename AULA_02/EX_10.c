/*Cálculo de IMC
Leia peso e altura e calcule o IMC.
Classifique:
Abaixo do peso (< 18.5)
Normal (18.5–24.9)
Sobrepeso (25–29.9)
Obesidade (≥ 30)*/


#include <stdio.h>

int main() {
    float peso, altura, imc;

    // Entrada de dados
    printf("Digite o peso (kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    // Cálculo do IMC
    imc = peso / (altura * altura);

    // Exibe o resultado
    printf("IMC: %.2f\n", imc);

    // Classificação
    if (imc < 18.5) {
        printf("Classificação: Abaixo do peso\n");
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("Classificação: Normal\n");
    } else if (imc >= 25 && imc <= 29.9) {
        printf("Classificação: Sobrepeso\n");
    } else { // imc >= 30
        printf("Classificação: Obesidade\n");
    }

    return 0;
}