#include<stdio.h>
int main(){
    int n;
    printf("");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("");
            a = a+2;
        }
        for(int k=1;k<=a;k++){
            print("*");
        }
        printf("\n");
    }
    return 0;
}.