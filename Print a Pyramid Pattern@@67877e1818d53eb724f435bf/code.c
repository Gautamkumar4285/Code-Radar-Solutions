// #include<stdio.h>
// int main(){
//     int n;
//     printf("");
//     scanf("%d",&n);
//     int a=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             printf("");
//             a = a+2;
//         }
//         for(int k=1;k<=a;k++){
//             printf("*");
//         }
//         for(int j=1;j<=n)
//         printf("\n");
//     }
//     return 0;
// }


#include<stdio.h>
int main(){
    int n;
    printf("");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=a;j++){
            printf("*");
        }    
        printf("\n");
        a = a+2;
    }
    return 0;
}