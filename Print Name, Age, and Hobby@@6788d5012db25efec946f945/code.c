#include<stdio.h>
int main(){
    char str1[100];
    int age;
    char str2[100];
    scanf("%99s",&str1);
    scanf("%d",&age);
    scanf("%99s",&str2);
    printf("Name: %s\n",str1);
    printf("Age: %d\n",age);
    printf("Hobby: %s",str2);
    return 0;
}