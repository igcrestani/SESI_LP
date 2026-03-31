/* 1) Classificação de Idade
Leia a idade de uma pessoa e informe:
Criança (0–12)
Adolescente (13–17)
Adulto (18–59)
Idoso (60+)
*/


#include <stdio.h>
    
int main() {
    int idade;
 // Informe a idade 
 
    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 0 && idade <= 12) 
        printf("Criança\n");
     else if (idade >= 13 && idade <= 17) 
        printf("Adolescente\n");
     else if (idade >= 18 && idade <= 59) 
        printf("Adulto\n");
     else if (idade >= 60) 
        printf("Idoso\n");
     else 
        printf("Idade inválida\n");
    

    return 0;
}