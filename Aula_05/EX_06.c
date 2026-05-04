#include <stdio.h>

int main() {
    int mat[4][4], maior, menor;
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            scanf("%d", &mat[i][j]);
            if(i == 0 && j == 0) {
                maior = menor = mat[i][j];
            } else {
                if(mat[i][j] > maior) maior = mat[i][j];
                if(mat[i][j] < menor) menor = mat[i][j];
            }
        }
    }
    printf("Maior: %d | Menor: %d\n", maior, menor);
    return 0;
}