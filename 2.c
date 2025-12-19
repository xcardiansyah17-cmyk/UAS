#include <stdio.h>
#include <stdlib.h>


int main() {
    int matriks[10][10];
    int i, j;

    srand(time(0));

    printf("=========================================\n");
    printf("     PROGRAM MATRIKS ACAK 10x10\n");
    printf("=========================================\n\n");

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            matriks[i][j] = rand() % 100;
        }
    }

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            printf("%4d  ", matriks[i][j]);
        }
        printf("\n");
    }

    return 0;
}