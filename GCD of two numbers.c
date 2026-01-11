#include <stdio.h>
#include<string.h>
int main() {
    int a,n,temp;
    scanf("%d,%d" ,&a,&n);
    while(n!=0){
        temp=n;
        n=a%n;
        a=temp;
    }
    printf("%d",a);
    
    return 0;
}