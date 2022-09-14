#include<stdio.h>
int main()
{
 int i = 4;
 int *y;
y= &i;
printf("the value of i is %u\n", y);
y--;
printf("the value of i is %u\n", y);
return 0;
}