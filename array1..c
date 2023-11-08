#include <stdio.h>
int main()
{
    int num[5] = {3,5,7,9,11};  
    for (int i = 0; i<5;i++){
        printf(" %d",num[i]);
    }
        printf("\n");
    float numF[5] = {0.3,0.5,0.9,0.7,0.11};
    for (int i = 0; i<5;i++){
        printf(" %.2f",numF[i]);
    }
        printf("\n");
    double numD[5] = {0.33,0.55,0.77,0.99,0.1111};
    for (int i = 0; i<5;i++){
        printf(" %.4f",numD[i]);
    }
        printf("\n");
    char str[5] = {'A','B','C','D'};
    for (int i = 0; i<5;i++){
        printf(" %c",str[i]);
    }

    return 0;
}