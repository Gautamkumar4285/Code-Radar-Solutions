#include<stdio.h>
int main(){
    int n;
    printf("");
    scanf("%d",n);
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int d = a+64;
            cha ch = (char)d;
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}