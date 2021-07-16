/* 
 * Tampilkan N bilangan fibionanci
 */
#include <stdio.h>

void main() {
    // Minta banyaknya bilangan
    int banyak = 0;
    printf("Banyak: ");
    scanf("%d", &banyak);

    // Minimal 1, jika tidak tampilkan pesan kesalahan
    if (banyak<1) {
        printf("Salah!\n");
    }
    else {
        // Bilangan pertama: 1
        printf("1 ");

        // Bilangan ke i = bilaangan ke i-1 + bilangan ke i-2
        int pertama = 0;
        int kedua = 1;
        for (int cacah=2; cacah<=banyak; cacah++) {
            int ketiga = pertama + kedua;

            printf("%d ", ketiga);

            pertama = kedua;
            kedua = ketiga;
        }
        printf("\n");
    }
}