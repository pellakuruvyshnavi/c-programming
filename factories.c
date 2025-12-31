#include <stdio.h>
int main() {
    int i,n;
    scanf("%d",&n);
    printf("Enter a number to find factorial/n");
    int fact =1;
    for (i=1;i<=n;i++){
        
      fact = fact* i;

    }
        printf(" factorial of %d is %d/n" ,n,fact);
    
    return 0;
}