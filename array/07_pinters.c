#include<stdio.h>
int main()
{
 int marks[5];
 int *x;
 x = marks; // (also you can write like this) x = &marks[0];
 for (int i = 0; i < 5; i++)
 {
    printf("enter the students mark %d: \n", i + 1);
    scanf("%d", x); 
    x++;
 }
   for (int i = 0; i < 5; i++)
  {
    printf("enter the students mark %d is %d  \n", i + 1, marks[i]);//marks[i]);
    
  }
 
return 0;
}