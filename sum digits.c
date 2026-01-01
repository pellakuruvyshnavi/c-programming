#include <stdio.h>
int main() {
    int n=1234,sum=0;
    printf("Enter number:");
    scanf("%d",&n);
    while(n!=0){
        sum=sum*10;
        n=n/10;
        printf("%d",n);
    }
    
    return 0;
}