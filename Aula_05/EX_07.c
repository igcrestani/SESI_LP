#include <stdio.h>

int main() {
    int mat[5][5], soma = 0;
    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++) scanf("%d", &mat[i][j]);

    for(int i=0; i<5; i++) {
        soma += mat[i][4 - i]; 
    }
    printf("Soma Diagonal Secundária: %d\n", soma);
    return 0;
}