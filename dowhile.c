#include <stdio.h>
int main()
{
    char name[101];
    float waterprice = 18.00, elecprice = 8.00;
    int waterunit, elecunit;
    double total, watertotalprice, electotalprice;
    printf("Enter your name:");
    scanf("%s", name);
    printf("Enter your water unit:");
    scanf("%d", &waterunit);
    printf("Enter your elec unit:");
    scanf("%d", &elecunit);
    watertotalprice = waterprice * waterunit;
    electotalprice = elecprice * elecunit;
    printf("Customer name\t\t=%s\n", name);
    printf("water price\t\t=%.2f\n", waterprice);
    printf("elec price\t\t=%.2f\n", elecprice);
    printf("water unit\t\t=%d\n", waterunit);
    printf("elec unit\t\t=%d\n", elecunit);
    printf("water total price:\t= %.2f\n", watertotalprice);
    printf("elec total price:\t=%.2f\n", electotalprice);
    printf("Total (water+elec):\t=%.2f\n", total = watertotalprice + electotalprice);
    return 0;
}