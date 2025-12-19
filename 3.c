#include <stdio.h>

void prosesFibonacci(int batasAtas);

int main() {
    int duaDigitNIM;
    int batasAtas;

    printf("=======================================\n");
    printf("            DERET FIBONACCI            \n");
    printf("=======================================\n");

    printf("Masukkan dua digit terakhir NIM: ");
    scanf("%d", &duaDigitNIM);

    batasAtas = duaDigitNIM + 30;

    prosesFibonacci(batasAtas);

    return 0;
}

void prosesFibonacci(int batasAtas) {
    int t1 = 0, t2 = 1;
    int nextTerm = t1 + t2;
    
    int jumlahElemen = 0;
    int totalNilai = 0;

    printf("\nDeret Fibonacci hingga %d:\n", batasAtas);

    if (t1 <= batasAtas) {
        printf("%d ", t1);
        jumlahElemen++;
        totalNilai += t1;
    }

    if (t2 <= batasAtas) {
        printf("%d ", t2);
        jumlahElemen++;
        totalNilai += t2;
    }

    while (nextTerm <= batasAtas) {
        printf("%d ", nextTerm);
        
        jumlahElemen++;
        totalNilai += nextTerm;
        
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    printf("\n\n");
    printf("Jumlah bilangan Fibonacci: %d\n", jumlahElemen);
    printf("Total seluruh nilai Fibonacci: %d\n", totalNilai);
    printf("=======================================\n");
}