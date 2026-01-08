#include <stdio.h>
#include <string.h>
int main() {
    int temp,i;
    char a[30],len;
    gets(a);
    len=strlen(a);
    for(i=0;i<len/2;i++){
        temp=a[i];
        a[i]=a[len-1-i];
        a[len-1-i]=temp;
    }
    printf("Reverse string is%s",a);
    
    
    return 0;
}