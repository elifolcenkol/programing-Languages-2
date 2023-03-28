#include <stdio.h>
 
int obeb(int, int);
 
int main() {
    int sayi1 = 72;
    int sayi2 = 216;
    int sonuc = obeb(sayi1, sayi2);
    printf("en buyuk ortak bolen(%d,%d) = %d\n", sayi1, sayi2, sonuc);
    return 0;
}
 
int obeb(int x, int y) {
    if (y == 0)
        return x;
    return obeb(y, x % y);
}

