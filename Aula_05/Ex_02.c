#include <stdio.h>

int main() {
    int mat[2][2], soma = 0;
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            scanf("%d", &mat[i][j]);
            soma += mat[i][j];
        }
    }
    printf("Soma total: %d\n", soma);
    return 0;
}