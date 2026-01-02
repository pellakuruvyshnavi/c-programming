
#include <stdio.h>
int main() {
    int n;
    printf("Enter number");
    scanf("%d",&n);
    int x=0;
    while (n!=0){
        int rem=n%10;
        x=x*10+rem;
        n=n/10;
    }
    
    
    
    return 0;
}