#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char password[100];
    int i;
    int upper=0,lower=0,digit=0;
    scanf("%s",password);
    if (strlen(password)<8){
        printf("Weak password\n");
    }
    
    return 0;

for (i=0;password[i]!='\0';i++){
    if(isupper(password[i]))
    upper=1;
    else if(islower(password[i]))
    lower=1;
    else if (isdigit(password[i]))
    digit=0;

}
if (upper && lower &&digit )
printf("strong password\n");
else
printf("Weak password\n");
return 0;
}