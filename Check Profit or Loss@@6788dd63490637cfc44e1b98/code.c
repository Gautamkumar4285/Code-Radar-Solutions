#include<stdio.h>
int main(){
    int cost_price,selling_price;
    scanf("%d%d",&cost_price,&selling_price);
    if(cost_price<selling_price){
        printf("Profit");
    }
    else if(cost_price=>selling_price){
        printf("Loss");
    }
    else{
        printf("NO Profit No Loss");
    }
    return 0;
}