#include <stdio.h>
float rentCal(int monthlyrent,float waterunit,float elecunit);
int main()
{
    float  waterunit,elecunit,monthlyrent;
    printf("Enter monthlyrent :");
    scanf("%f", &monthlyrent);
    printf("Enter water unit :");
    scanf("%f", &waterunit);
    printf("Enter elec unit :");
    scanf("%f", &elecunit); 
    printf("Shared room retal = %.0lf บาท \n",rentCal( monthlyrent,waterunit,elecunit));
}
float rentCal(int monthlyrent,float waterunit,float elecunit)
{
   return monthlyrent + (waterunit*15) + (elecunit*10);
}