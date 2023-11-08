#include <stdio.h>
void gradeCharArrFunc(float gradeFloatArr[8],char gradeCharArr[8]);
int main(){
    char myName[100];
    float myGrade[8];
    char myGradeChar[8];
    printf("Enter your name:");
    scanf("%s", myName);

    printf("Enter your grade:\n");
    int i;
    for(i=0;i<8;i++){
        printf("Grade of Course %d: ", i+1);
        scanf("%f", &myGrade[i]);
    }
    gradeCharArrFunc(myGrade,myGradeChar);
    printf("Name : %s\n", myName);
    printf("Grade : ");
    for(i=0;i<8;i++){
        printf("myGrade [ Course %d] is %.2f (%c)\n",i+1 ,myGrade[i],myGradeChar[i]);
    }
    return 0;
}
    void gradeCharArrFunc(float gradeFloatArr[8],char gradeCharArr[8]){
        int i;
        for(int i=0;i<8;i++){
            if (gradeFloatArr[i] == 4.0)
            gradeCharArr[i]='A';
            else if ( gradeFloatArr[ i ] == 3.5 || gradeFloatArr[ i ] == 3.0)
            gradeCharArr[ i ] = 'B';
            else if ( gradeFloatArr[ i ] == 2.5 || gradeFloatArr[ i ] == 2.0)
            gradeCharArr[ i ] = 'C';
            else if ( gradeFloatArr[ i ] == 1.5 || gradeFloatArr[ i ] == 1.0)
            gradeCharArr[ i ] = 'D'; 
            else 
            gradeCharArr[i] ='F';
        }

    }