#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
     if(n>0){
        printf("%d is postive number", n);
    
     } 
     else if (n<0){
        printf("%d is  negative number",n);
     }
     else {
        printf("%d",n);
     }
    return 0;
}