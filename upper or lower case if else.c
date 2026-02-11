#include <stdio.h>
int main() {
    char a;
    char g;
    scanf("%s,%s",&a,&g);
    if (a>=g)
    printf("uppercase");
    else if (g<a)
    printf("lowercase");
    
    return 0;
}