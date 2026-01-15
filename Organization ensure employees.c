#include <stdio.h>
#include<string.h>
int main() {
char emali[100];
char Domaind[]="@company.com";
scanf("%s",email);

int emaillen=strlen(email);
int domainlen=strlen(domain);

if (emaillen>=domainlen&&
strcmp (email+emaillen-domainlen,domain)==0){
    printf("valid email\n");
}
else {
    printf("invalid email\n");

} 
    
    return 0;
}