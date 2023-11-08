#include <stdio.h>
float cm2inch()
{
    double cm ,inch = 0.393701;
    printf("Enter cm :");
    scanf("%lf", &cm);
    printf("%.0lf cm = %lf inch ", cm,cm * inch);
    
}
int main(){
    cm2inch();
    return 0;
}