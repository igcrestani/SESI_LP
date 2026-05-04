#include <stdio.h>

int main() {
    int mat[5][5];
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            scanf("%d", &mat[i][j]);
            if(mat[i][j] < 0) mat[i][j] = 0;
        }
    }

    printf("Matriz Resultante:\n");
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) printf("%d ", mat[i][j]);
        printf("\n");
    }
    return 0;
}