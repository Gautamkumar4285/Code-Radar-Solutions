#include<stdio.h>
int main(){
    int n;
    printf("");
    scanf("%d",&n);
    int a = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
            a++;
        }
        printf("\n");
    }
    return 0;
}