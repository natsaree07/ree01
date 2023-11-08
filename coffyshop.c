#include <stdio.h>
float waterPriceTotal(int oddEven,float price[5]);
int main(){
    char names[2][50]={"Happy Cafe","Nong Joy"};
    float price[5]={11.5,20,31.5,40,51.5};
    printf("%s\n", names[0]);
    printf("%s\n", names[1]);
    for (int i=0;i<5;i++){
        printf("Coffee %d : %s\n", i+1,names[i]);
        int oddEven;
        scanf("%d",&oddEven);
    }
    printf("Total price = %.2f bath", waterPriceTotal(oddEven,price));
}
   float waterPriceTotal(int oddEven,float price[5]){
    int sum;
    if(oddEven %2 ==0){
        sum = price[0]+price[2]+price[4];
    }
    else{
        sum = price[1]+price[3];
    }
    return sum;
   }