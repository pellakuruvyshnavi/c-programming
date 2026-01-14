#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char longest[50], word[50];
    int maxLen = 0;

    // Read the sentence
    printf("Enter a sentence: ");
    gets(str);   // for exam/simple use

    // Split sentence into words
    char *token = strtok(str, " ");

    while (token != NULL) {
        int len = strlen(token);

        if (len > maxLen) {
            maxLen = len;
            strcpy(longest, token);
        }
        token = strtok(NULL, " ");
    }

    printf("Longest word: %s", longest);

    return 0;
}
