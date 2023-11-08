#include <stdio.h>
int main()
{
    int ans;
    printf("Problem : 2*3 =?\n");
    printf("ANS = ");
    scanf("%d",&ans);
    do
    {
        printf("Problem : 2*3 =?\n");
        printf("Wrong!!!\n");
        printf("ANS = ");
        scanf("%d", &ans);
    }
    while (ans!=6);
    printf("Yeah !!! \\\\(^o^)//\n", ans);
    return 0;
}
