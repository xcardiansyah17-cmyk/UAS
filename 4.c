#include <stdio.h>

long long faktorial(int angka) {
    if (angka == 0 || angka == 1) {
        return 1;
    } else {
        return angka * faktorial(angka - 1);
    }
}

long long hitungPermutasi(int n, int r) {
    return faktorial(n) / faktorial(n - r);
}

long long hitungKombinasi(int n, int r) {
    return faktorial(n) / (faktorial(r) * faktorial(n - r));
}

int main() {
    int n, r;

    printf("==========================================\n");
    printf("   PROGRAM KOMBINASI & PERMUTASI REKURSIF \n");
    printf("==========================================\n");

    printf("Masukkan nilai n: ");
    scanf("%d", &n);
    printf("Masukkan nilai r: ");
    scanf("%d", &r);

    if (n > 20) {
        printf("\nMaaf, n tidak boleh lebih dari 20.\n");
        return 1;
    }

    if (r > n) {
        printf("\nNilai r tidak boleh lebih besar dari n.\n");
        return 1;
    }

    printf("\n------------------------------------------\n");
    printf("ALUR PERHITUNGAN:\n");
    printf("------------------------------------------\n");

    printf("n!     = %d! = %lld\n", n, faktorial(n));
    printf("r!     = %d! = %lld\n", r, faktorial(r));
    printf("(n-r)! = %d! = %lld\n", (n-r), faktorial(n-r));
    
    printf("\n------------------------------------------\n");
    printf("HASIL AKHIR:\n");
    printf("------------------------------------------\n");

    long long hasilP = hitungPermutasi(n, r);
    printf("Permutasi P(%d,%d) = %lld\n", n, r, hasilP);

    long long hasilC = hitungKombinasi(n, r);
    printf("Kombinasi C(%d,%d) = %lld\n", n, r, hasilC);

    return 0;
}