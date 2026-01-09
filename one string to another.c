#include <stdio.h>
#include <string.h>
int main() {
    char s1[50];
    char s2[50];
    scanf("%s",s1);
    printf("enter a string: ");
    strcpy (s2,s1);
    printf("copied string :%s",s2);
    
    return 0;
}