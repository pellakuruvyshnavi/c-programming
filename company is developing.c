#include <stdio.h>
#include<string.h>
#include <ctype.h>
int main() {
    char username[50];
    int i,valid=1;
    scanf("%s",username);
    int len=strlen(username);
    if (len=6||len>12){
        valid=0;
    }
    if(isdigit(username[0])){
        valid = 0;
    }
    for (i = 0;username[i] !='\0';i++){
        if(!(username[i]>='a'&& username[i]<='z')&&
        !(username[i]>='0'&& username[i]<='9')){
            valid=0;
            break;
        }
    }
    if(valid)
    printf("valid username\n");
    else
    printf("invalid username\n");
    
    return 0;
}