#include <stdio.h>
#include <string.h>

int main() {
   char kelime1[50], kelime2[50];
   
   printf("lütfen ilk kelimeyi girin: ");
   scanf("%s", kelime1);
   
   printf("lütfen ikinci kelimeyi girin: ");
   scanf("%s", kelime2);
   
   if (strcmp(kelime1, kelime2) == 0) {
      printf("iki kelime ayný uzunlukta\n");
   } else if (strlen(kelime1) > strlen(kelime2)) {
      printf("%s daha uzun\n", kelime1);
   } else {
      printf("%s daha uzun\n", kelime2);
   }
   
   return 0;
}

