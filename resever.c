#include <stdio.h>
int main() {
    int array[5];
    scanf("%d",&array);
    int length= sizeof(array)/sizeof (array[0]);
    
    for( int i=length -1;i>=0;i--){
        printf("%d",array[i]);
    }
    
    return 0;
}