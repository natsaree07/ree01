#include <stdio.h>

// ฟังก์ชันการแปลงเกรดจากตัวเลขเป็นตัวอักษร
void gradeCharArrFunc(float gradeFloatArr[], char gradeCharArr[]) {
  for (int i = 0; i < 8; i++) {
    if (gradeFloatArr[i] >= 4.0) {
      gradeCharArr[i] = 'A';
    } else if (gradeFloatArr[i] >= 3.5) {
      gradeCharArr[i] = 'B';
    } else if (gradeFloatArr[i] >= 2.5) {
      gradeCharArr[i] = 'C';
    } else if (gradeFloatArr[i] >= 1.5) {
      gradeCharArr[i] = 'D';
    } else {
      gradeCharArr[i] = 'F';
    }
  }
}

int main() {
  // ประกาศตัวแปร
  char myName[255];
  float myGrade[8];
  char myGradeCharArr[8];

  // รับค่าชื่อนักศึกษา
  printf("Please enter your name: ");
  fgets(myName, sizeof(myName), stdin);

  // รับค่าเกรดของแต่ละวิชา
  for (int i = 0; i < 8; i++) {
    printf("Please enter the grade of course %d: ", i + 1);
    scanf("%f", &myGrade[i]);
  }

  // แปลงเกรดจากตัวเลขเป็นตัวอักษร
  gradeCharArrFunc(myGrade, myGradeCharArr);

  // แสดงผล
  printf("my name is %s \n\n", myName);

  for (int i = 0; i < 8; i++) {
    printf("myGrade [%d] is %.2f (%c)\n", i + 1, myGrade[i], myGradeCharArr[i]);
  }

  return 0;
}