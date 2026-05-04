
#include <stdio.h>

int main() {
    int mat[3][3], somaLinha;
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++) scanf("%d", &mat[i][j]);

    for(int i=0; i<3; i++) {
        somaLinha = 0;
        for(int j=0; j<3; j++) somaLinha += mat[i][j];
        printf("Soma da linha %d: %d\n", i, somaLinha);
    }
    return 0;
}