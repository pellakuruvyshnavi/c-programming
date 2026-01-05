#include <stdio.h>
int main() {
    int n, array[100],i,key,found=0;
    scanf("%d", &n);

    for( i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    scanf("%d",&key);
     for( i=0; i<n; i++){
if (array[i]==key){
    found=1;
    break;
}
     }
     if(found==1)
    printf("found");
    else
    printf("not found");
    
    return 0;
}