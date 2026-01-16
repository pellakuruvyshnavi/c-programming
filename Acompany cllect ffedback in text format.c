#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    int i,word=1;
    printf( "Enter feedbook:  ");
    gets (str);
    if (str[0]=='\0'){
        printf("Number of words =0\n");
        return 0;
    }
    word=1;
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' '&&str[i+1]!=' ')
        word++;
    }
    printf("number of words =%d\n",word);
    
    return 0;
}