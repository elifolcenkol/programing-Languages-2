#include <stdio.h>
#include <string.h>

int main() {
    char text[1000];
    int harf_sayisi[26] = {0}, i;

    printf("Lutfen bir metin girin: ");
    fgets(text, sizeof(text), stdin); 

    for(i = 0; i < strlen(text); i++) {
        if(text[i] >= 'a' && text[i] <= 'z') {
            harf_sayisi[text[i] - 'a']++;
        } else if(text[i] >= 'A' && text[i] <= 'Z') {
            harf_sayisi[text[i] - 'A']++; 
        }
    }

    for(i = 0; i < 26; i++) {
        if(harf_sayisi[i] > 0) {
            printf("%c harfi %d defa geciyor.\n", 'a' + i, harf_sayisi[i]);
        }
    }

    return 0;
}

