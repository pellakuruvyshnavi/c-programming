#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d ,%d,%d",&a,&b,&c);
    if(a>=b && b<=c){
        printf("a is largest number");
    }
    else if(b>=a && c<=b){
        printf("b is largest number");
    }
    else {
        printf("c is largest number");
    }
    
    return 0;
}