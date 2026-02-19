#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int  total , salary;
    
    for(int i=0;i<n;i++){
        scanf("%d",&salary);
     total=total+salary;
    }
    printf("%d",total);
    return 0;
}