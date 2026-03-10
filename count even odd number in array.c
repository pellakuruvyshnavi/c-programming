#include <stdio.h>
int main() {
    int n;
    printf("ENTER THE NUMBER= ");
    scanf("%d",&n);
    int i,arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int even=0;
    int odd=0;
    for (i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
        //arr[i]=even++;
        //arr[i]=odd++;
    }
    printf("the even number count is : %d\n",even);
        printf("the odd number count is : %d",odd);

    
    return 0;
}