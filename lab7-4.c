#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 1000

int main() {
    char *text = (char *)malloc(SIZE * sizeof(char));
    int kelime_sayisi = 0, i;

    if(text == NULL) {
        printf("Bellek tahsis edilemedi!\n");
        return 1;
    }

    printf("Lutfen bir metin girin: ");
    fgets(text,SIZE, stdin); 

    for(i = 0; i < strlen(text); i++) {
        if(text[i] == ' ' || text[i] == '\n' || text[i] == '\t') {
            kelime_sayisi++; 
        }
    }

    printf("Girilen metinde toplam %d kelime bulunmaktadir.", kelime_sayisi);

    free(text);

    return 0;
}

