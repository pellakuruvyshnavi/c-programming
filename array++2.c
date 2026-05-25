#include <stdio.h>
int main() {
     /*char line [50],character;
    int c;
    c=0;
    printf("Enter text.press<return>at end\n");
    do{
        character=getchar();
        line[c]=character;
        c++;
    }
    while(character !='\n');
    c=c-1;
    line[c]='\0';
    printf("\n%s\n",line); */



    char string1[80],string2[80];
    int i;
    printf("Enter a string\n");
    printf("?");
    scanf("%s",string2);
    for(i=0;string2[i]!='\0';i++)
    string1[i]=string2[i];
    string1[i]='\0';
    printf("\n");
    printf("\n");
    printf("%s\n",string1);
    printf("Number of characters = %d\n",i);



    
    return 0;
}