#include <stdio.h>

void degistir(int *dizi, int boyut) {
    // Dizinin ilk eleman�n� son elemanla de�i�tir
    int temp = *(dizi + 0);
    *(dizi + 0) = *(dizi + boyut - 1);
    *(dizi + boyut - 1) = temp;

    // Dizinin ikinci eleman�n� sondan bir �nceki elemanla de�i�tir
    temp = *(dizi + 1);
    *(dizi + 1) = *(dizi + boyut - 2);
    *(dizi + boyut - 2) = temp;

    // Dizinin ���nc� eleman�n� sondan ikinci elemanla de�i�tir
    temp = *(dizi + 2);
    *(dizi + 2) = *(dizi + boyut - 3);
    *(dizi + boyut - 3) = temp;
}

int main() {
    int dizi[] = {5, 6, 7};
    int boyut = sizeof(dizi) / sizeof(int);
    int i;
    printf("Degistirilmeden �nce: ");
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

