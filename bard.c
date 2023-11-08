#include <stdio.h>

// ฟังก์ชันการแปลงเกรดจากตัวเลขเป็นตัวอักษร
char gradeChar(float gradeFloat) {
  char gradeChar;

  if (gradeFloat >= 4.0) {
    gradeChar = 'A';
  } else if (gradeFloat >= 3.5) {
    gradeChar = 'B';
  } else if (gradeFloat >= 2.5) {
    gradeChar = 'C';
  } else if (gradeFloat >= 1.5) {
    gradeChar = 'D';
  } else {
    gradeChar = 'F';
  }

  return gradeChar;
}

int main() {
  // ประกาศตัวแปร
  char myName[255];
  float myGrade[5];

  // รับค่าชื่อนักศึกษา
  printf("Please enter your name: ");
  fgets(myName, sizeof(myName), stdin);

  // รับค่าเกรดของแต่ละวิชา
  for (int i = 0; i < 5; i++) {
    printf("Please enter the grade of course %d: ", i + 1);
    scanf("%f", &myGrade[i]);
  }

  // แสดงผล
  printf("my name is %s \n\n", myName);

  for (int i = 0; i < 5; i++) {
    printf("myGrade [%d] is %.2f (%c)\n", i + 1, myGrade[i], gradeChar(myGrade[i]));
  }

  return 0;
}