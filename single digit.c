#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if (num>7){
        printf("single digit");       
    }
    else if (num<=14){
        printf("Not single digit");
    }
    
    return 0;
}