#include <stdio.h>
int num(int year){
    if((year%4==0 && year%100!=0) || year%400==0){//2024
        printf("leap year");
    }else{
        printf("not a leap year");
    }

}
int main() {
    int year;
    
    printf("ENTER THE YEAR");
    scanf("%d",&year);
    int c;
    c=num(year);
    printf(c);
    
    return 0;
}