#include <stdio.h>
#include <math.h>
int main()
{   
    double base, exponent;
    printf("Enter base :");
    scanf("%lf", &base);
    printf("Enter exponant :");
    scanf("%lf", &exponent);
    printf("%0.lf ^ %0.lf = %0.lf", base,exponent, pow(base,exponent));
    return 0;
}