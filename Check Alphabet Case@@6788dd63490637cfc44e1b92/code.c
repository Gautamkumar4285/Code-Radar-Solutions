#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch >='A' && ch <='Z'){
        printf("upperchase");
    }
    else if(ch >='a' && ch<='z'){
        printf("Lowerchase");
    }
    else{
        printf("Not a alphabet");
    }
    return 0;
}