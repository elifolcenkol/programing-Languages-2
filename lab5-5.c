#include <stdio.h>

void degistir(int *dizi, int boyut) {
    // Dizinin ilk elemanýný son elemanla deðiþtir
    int temp = *(dizi + 0);
    *(dizi + 0) = *(dizi + boyut - 1);
    *(dizi + boyut - 1) = temp;

    // Dizinin ikinci elemanýný sondan bir önceki elemanla deðiþtir
    temp = *(dizi + 1);
    *(dizi + 1) = *(dizi + boyut - 2);
    *(dizi + boyut - 2) = temp;

    // Dizinin üçüncü elemanýný sondan ikinci elemanla deðiþtir
    temp = *(dizi + 2);
    *(dizi + 2) = *(dizi + boyut - 3);
    *(dizi + boyut - 3) = temp;
}

int main() {
    int dizi[] = {5, 6, 7};
    int boyut = sizeof(dizi) / sizeof(int);
    int i;
    printf("Degistirilmeden önce: ");
    for ( i = 0; i < boyut; i++) {
        printf("%d ", *(dizi + i));
    }
    printf("\n");

    degistir(dizi, boyut);

    printf("Degistirildikten sonra: ");
    for ( i = 0; i < boyut; i++) {
        printf("%d ", *(dizi + i));
    }
    printf("\n");

    return 0;
}

