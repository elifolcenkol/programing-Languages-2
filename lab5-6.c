#include <stdio.h>

int main() {
    
   
int dizi[] = {1, 2, 3, 4, 5, 6};
    
   
int toplam = 0;
    
   
int uzunluk = sizeof(dizi) / sizeof(dizi[0]);

int *p = dizi;
int i;    
   
for (i = 0; i < uzunluk; i++) {
        toplam += *p;
        p++;
    }       
	printf("Dizinin toplamý: %d", toplam);

return 0;

}


