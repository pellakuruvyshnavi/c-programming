#include <stdio.h>
#include<string.h>
int main() {
   char str1[50];
   char str2[50];
   int i=0,flag=0;
   gets(str1);
   gets(str2);
   while (str1[i] !='\0'||str2[i] !='\0'){
   if (str1[i]!= str2[i]){
    flag=1;
    break;
   }
     }  i++;
   
    if(flag ==0){
    printf("equal");
    }
    else
    printf("Not equal");
    return 0;
}