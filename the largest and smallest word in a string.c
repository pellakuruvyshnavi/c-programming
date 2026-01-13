#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word[20];
    int i = 0, j = 0;
    int min = 100, max = 0;
    char smallest[20], largest[20];

    printf("Enter the string: ");
    gets(str);

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            word[j] = '\0';

            if (j < min) {
                min = j;
                strcpy(smallest, word);
            }
            if (j > max) {
                max = j;
                strcpy(largest, word);
            }

            j = 0;
            if (str[i] == '\0')
                break;
        } else {
            word[j++] = str[i];
        }
        i++;
    }

    printf("Largest: %s\n", largest);
    printf("Smallest: %s\n", smallest);


    
    
    return 0;
}