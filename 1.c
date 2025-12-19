#include <stdio.h>

int main() {
    printf("Nama : M. Farhan Jazuri\n");
    printf("NIM  : 25106010096\n");
    printf("=========================\n\n");

    int n = 1; 
    int k = 5; 

    int P[3][3] = {
        {n + 1, 0, 5},
        {2, 8, 7},
        {4, 3, 2 * k}
    };

    int Q[3][3] = {
        {1, 10, n},
        {5, k - 5, 4},
        {1, 4, 6}
    };

    int R[3][3] = {
        {1, 2, 4},
        {7, 1, n},
        {12, 9, 6}
    };

    int Hasil_Jumlah[3][3];
    int Hasil_Kali_Elemen[3][3];
    int i, j;

    printf("Matriks P:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", P[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Matriks Q:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", Q[i][j]);
        }
        printf("\n");
    }
    printf("\n");
\
    printf("Matriks R:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", R[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("-------------------------\n");
    printf("Hasil Perhitungan:\n");
    printf("-------------------------\n");

    printf("a. P + Q + R =\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            Hasil_Jumlah[i][j] = P[i][j] + Q[i][j] + R[i][j];
            printf("%d\t", Hasil_Jumlah[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("b. PQ =\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            Hasil_Kali_Elemen[i][j] = P[i][j] * Q[i][j];
            printf("%d\t", Hasil_Kali_Elemen[i][j]);
        }
        printf("\n");
    }

    return 0;
}