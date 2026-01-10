#include <stdio.h>
#include<string.h>
int main() {
    int n,temp,s,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        s =temp%10;
        sum=sum+(s*s*s);
        temp=temp/10;
    } 
    if (sum==n)
    printf("Armstrong number");
    else 
        printf(" not Armstrong number");

    
    return 0;
}