#include <stdio.h>
void Allarea(){
    int parallelogram,parallelogram1,rectangle1,rectangle11,rectanglearea1,rectanglearea2,rectangle2,rectangle22;
    double allarea,pay = 3.14159,han = 0.5,circle,triangle,triangle1;
    printf("วงกลม\n");
    printf("Enter radius :");
    scanf("%lf", &circle);
    printf("%.2lf*%.0lf = %.2lf\n",pay,circle*circle,pay*circle*circle);
    printf("สามเหลี่ยม\n");
    printf("Enter base :");
    scanf("%lf", &triangle);
    printf("Enter high :");
    scanf("%lf", &triangle1);
    printf("%.1lf * %.0lf * %.0lf = %.2lf \n", han,triangle,triangle1,han*triangle*triangle1);
    printf("สี่เหลี่ยมด้านขนาน\n");
    printf("Enter  base :");
    scanf("%d", &parallelogram);
    printf("Enter  high :");
    scanf("%d", &parallelogram1);
    printf("%d * %d = %d \n", parallelogram,parallelogram1,parallelogram*parallelogram1);
    printf("สี่เหลี่ยมผืนผ้าครั้งที่ 1\n");
    printf("Enter wide 1 :");
    scanf("%d", &rectangle1);
    printf("Enter long 1 :");
    scanf("%d", &rectangle11);
    printf("%d * %d = %d\n",rectangle1,rectangle11,rectangle1*rectangle11);
    printf("สี่เหลี่ยมผืนผ้าครั้งที่ 2\n");
    printf("Enter wide 2 :");
    scanf("%d", &rectangle2);
    printf("Enter long 2 :");
    scanf("%d", &rectangle22);
    printf("%d * %d = %d\n", rectangle2,rectangle22,rectangle2*rectangle22);

    allarea = pay*circle*circle + han*triangle*triangle1 + parallelogram*parallelogram1 + rectangle1*rectangle11 
    + rectangle2*rectangle22 ;
    printf("All Area = %.2lf cm",allarea);
}
int main(){
    Allarea();
    return 0;
}