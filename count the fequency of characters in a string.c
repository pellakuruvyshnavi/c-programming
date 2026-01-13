#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0};

    printf("Enter the string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        count[str[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("%c %d ", i, count[i]);
        }
    }


    
    return 0;
}