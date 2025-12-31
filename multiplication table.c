#include <stdio.h>
int main() {
    int i,n;
    scanf("%d",&n);
    printf("Enter a number/n ");
    printf("Multiplication table for %d is :/n",n);

    for (i=1;i<=10;i++){
        printf("%d",n*i);
    }
    
    return 0;
}