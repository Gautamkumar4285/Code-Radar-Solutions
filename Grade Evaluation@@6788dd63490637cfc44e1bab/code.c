#include<stdio.h>
int main(){
    char grade;
    scanf("%c",&grade);
    switch(grade){
        case'A':
            printf("Excellent");
            break;
        case'B':
            printf("Good");
            break;  
        case'C':
            printf("Average");
            break;
        case'D':
            printf("Below");
            break;
        case'F':
            printf("Fail");    
    }
    return 0;
}