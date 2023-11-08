#include <stdio.h>
float allarea,PI=3.14159,circle=4,wide=10,long1=8,wide1=5,long2=8,base1=10,high1=5,base2=5,high2=5,han=0.5;
float circleCal()
{
    allarea = PI*(circle*circle) + wide*long1 + wide1*long2 + base1*high1 + han*base2*high2;
    printf("All Area = %.2f", allarea);
}
float rectcicle()
{
 printf("วงกลม %f*%.2f = %f\n", PI,circle*circle,PI*(circle*circle));
}
float rectangle1()
{
 printf("สี่เหลี่ยมผืนผ้า 1 %.0f*%.0f = %.2f\n", wide,long1,wide*long1);
}
float rectangle2()
{
printf("สี่เหลี่ยมผืนผ้า 2 %.0f*%.0f = %.2f\n", wide1,long2,wide1*long2);
}
float parallelogram()
{
 printf("สี่เหลี่ยมด้านขนาน %.0f*%.0f = %.2f\n", base1,high1,base1*high1);
}
float triangle()
{
 printf("สามเหลี่ยม %.1f*%.0f*%.0f = %.2f\n", han,base2,high2,han*base2*high2);
}
int main()
{
    rectcicle();
    rectangle1();
    rectangle2();
    parallelogram();
    triangle();
    circleCal();
    return 0;
}