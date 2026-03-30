#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;
    
    
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);
  
    
    media = (nota1 + nota2 + nota3 ) / 3;
    
    printf("Média: %.2f\n", media);
    
    if(media >= 7.0){
        printf("Aprovado\n");
    } else if (media <= 2.9){
        printf("Reprovado\n");
    } else {
        printf("Recuperação\n");
    }
    
    return 0;
}