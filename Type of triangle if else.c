#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a==b && b==c && a==c){
        printf("eqilateral triangle ");
    }
    else {
        printf("Not eqilateral triangle");
    }
    
    
    return 0;
}