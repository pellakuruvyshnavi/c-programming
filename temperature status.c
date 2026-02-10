#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n<20){
        printf("cold");

    }
    else if (n<30){
        printf("normal");
    }
    printf("Hot");

    
    return 0;
}