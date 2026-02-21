#include <stdio.h>
int main() {
    int n,i,j;
    printf("Enter a number  ");
    scanf("%d",&n);
    for (int i=n;i>=0;i--){
        for (int j=1;j<=i;j++){
            printf(" * ");
        }
    
    printf("\n");
    }
    
    return 0;
}