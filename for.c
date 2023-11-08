#include <stdio.h>
int main(){
    int base,start,end;
    printf("Enter base :");
    scanf("%d",&base);
    printf("Enter start :");
    scanf("%d",&start);
    printf("Enter end :");
    scanf("%d",&end);
    for (base ; start <= end ; start++){
        printf("%d * %d = %d\n",base,start,base*start);
    }

    return 0;
}