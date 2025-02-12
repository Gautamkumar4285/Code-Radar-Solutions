#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch >='A' && ch <='Z'){
        printf("uppercase");
    }
    else if(ch >='a' && ch<='z'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}