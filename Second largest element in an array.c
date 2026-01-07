#include <stdio.h>
int main (){
    int size ;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",arr[size]);
    }
    int max=arr[0];
    int sec_lar=arr[0];
    for(int i=0;i<size;i++){
        if (arr[i]>max){
            sec_lar=max;
            max=arr[i];
        }
    
    else if (arr[i]>sec_lar && sec_lar!=max){
        sec_lar=arr[i];
    }
    }
    printf("%d",max);
    printf("%d",sec_lar);
    return 0;
}

 
 
 
