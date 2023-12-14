#include<stdio.h>

int main() {
    int matrix[2][2] = {{1, 2}, {3, 4}};
    int transpose[2][2];
    int i, j;
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }
    printf("Transpose of the Matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
