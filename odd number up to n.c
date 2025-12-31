#include <stdio.h>
int main() {
    int i,n;
    printf("Enter number");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        printf("%d",i*3);
    }
    
    return 0;
}