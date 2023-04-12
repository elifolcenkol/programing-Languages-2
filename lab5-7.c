#include <stdio.h>
#include <string.h>

int main() {
    char strings[100];
    int count;

    printf("Enter the number of strings: ");
    scanf("%s", &strings);
    count=strlen(strings);
  
    int i;
    for (int i = 0; i < count; i++) {
        scanf("%s", strings[i]);
    }

    printf("Strings in reverse order: \n");
    for (i = count - 1; i >= 0; i--) {
        printf("%s\n", strrev(strings[i]));
    }

    return 0;
}

