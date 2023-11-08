#include <stdio.h>
int main(){
        char names[5][100];
        int age_weight_height [5][3];
        for(int i=0;i<5;i++){
        printf("Enter name , age,weight,height : ");
        scanf("%s %d %d %d", names[i],&age_weight_height [i][0],
        &age_weight_height [i][1],&age_weight_height [i][2]);

        }
        for(int i=0;i<5;i++) {
            printf("Name: %s\n", names[i]);
            printf("Age: %d years\n", age_weight_height [i][0]);
            printf("Weight: %d k.g.\n", age_weight_height [i][1]);
            printf("Height: %d cm.\n", age_weight_height [i][2]);
            printf("\n");
        }
    return 0;
}