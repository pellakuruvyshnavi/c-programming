#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if (num%3==0 && num%7 ==0){
        printf("multiple  3 and 7");
    }
    else {
        printf ("both multiple 3 and 7");
    }
    return 0;
}