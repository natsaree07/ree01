#include <stdio.h>
int allPrice(int price[3]);
int main(){
    int totalCost = 0;
    char menu[3][20]={"Salad","Fried-rice","omelet"};
    int price[3];
    int i=0;
    while(i<3){
        printf("%d) %s\n",i+1,menu[i]);
        printf("Enter price :");
        scanf("%d", &price[i]);
        if(price[i]<0){
            price[i]=1;
        }
        i++;      
    }
    printf("TotalPrice = %d",allPrice(price));
}
    int allPrice(int price[3]){
    int sum;
    for (int i=0;i<3;i++){
        sum =sum+price[i];
    }
    return sum;
    }