#include <stdio.h>
int main (){
    int a= 2;
    int b=3;
    scanf("%d,%d",&a,&b);
    if (a%2==0 &&b%3==0){
        printf("Yes");
    }
    else 
    printf(" No");
    
    
    return 0;
}