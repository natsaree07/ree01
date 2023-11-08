#include <stdio.h>
int allPrice(int price[]);
int main(){
    int total = 0;
    char menu[3][20]={"Salad","Fried-rice","Omelet"};
    int price[3];
    int i=0;
    while (i < 3){
        printf("Enter price for %s =", menu[i]);
        scanf(" %d",&price[i]);

        if(price[i]<0){
            price[i]=1;
        }
        i++;
    }
        printf("Total price = %d Bath",allPrice(price));
    }   
    int allPrice(int price[]){
        int sum;
        for(int i=0;i<3;i++){
            sum = sum+price[i];
        }
       return sum;
}
