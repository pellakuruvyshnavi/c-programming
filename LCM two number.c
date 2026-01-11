#include <stdio.h>
#include<string.h>
int main() {
    int a,b,x,y,temp,gcd,lcm;
    scanf("%d,%d" ,&a,&b);
    x=a;
    y=b;
    while(b!=0){
        temp=b;
        b=a%b;
        a=temp;
    }
    gcd=a;
    lcm=(x*y)/gcd;
    printf("%d",lcm);
    
    return 0;
}