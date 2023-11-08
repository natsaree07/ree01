#include <stdio.h>
int main(){
    float MyGrade[8],myUnitByGrade[8],courseUnit[8],sumMyUnitByGrade,sumCourseUnit;
    int i;
    char name[100];
    printf("Enter name:");
    scanf("%s",name);
    for (i = 0; i < 8;i++){
        printf("\nMy grade and ourseUnit [%d] :",i+1);
        scanf("%f %f", &MyGrade[i],&courseUnit[i]);
    }
    for ( i = 0; i < 8; i++){
        myUnitByGrade[i] = courseUnit[i] * MyGrade[i];
    }
    for ( i = 0; i < 8; i++){
        sumMyUnitByGrade += myUnitByGrade[i];
        sumCourseUnit += courseUnit[i];
    }
    float avgGrade = sumMyUnitByGrade/sumCourseUnit;
    printf("MY grade Avg : %.2f",avgGrade);
return 0;
}