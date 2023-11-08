#include<stdio.h>
int main()
{
  int i,j,m=1;
  printf("Enter my mul:");
  scanf("%d", &i);
  printf("Enter round:");
  scanf("%d", &j);
  do{
     printf("%d * %d = %d\n",i , m, i*m);
    m++;
  }
  while (m <= j);
  return 0;
}