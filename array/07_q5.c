#include<stdio.h>
int main()
{
 int a , mul[10];
 printf("enter a number that you want see the multiplication\n");
 scanf("%d", &a);
 for (int i = 0; i < 10; i++)
 {
    mul[i] = a *(i+1);
 }

    for (int j = 0; j < 10; j++)
    {
       printf("%d*%d = %d\n", a ,j+1 , mul[j]);
    }
 
return 0;
}