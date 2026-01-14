#include <stdio.h>
#include<string.h>
int main() {
    char str1[50] = "listen";
    char str2[50] = "silent";
    int count1[256] = {0}, count2[256] = {0};
    int i;

    
    if (strlen(str1) != strlen(str2)) {
        printf("Not anagram");
        
    }

    
    for (i = 0; str1[i] != '\0'; i++) {
        count1[str1[i]]++;
        count2[str2[i]]++;
    }


    for (i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            printf("Not anagram");
            return 0;
        }
    }
    printf("Anagram");
    
    return 0;
}