#include<stdio.h>
int main()
{
 int student = 3;
 int subject = 5;

 int arr[3][5];
 for (int i = 0; i < student; i++)
 {
    for (int j = 0; j < subject; j++)
    {
        printf("enter the mark of student %d: \n", i+1);
        scanf("%d", arr[i]);
    }
    
 }
 for (int i = 0; i < student; i++)
 {
    for (int j = 0; j < subject; j++)
    {
        printf("the mark of student %d is: %d\n", arr[i][j]);
    }
    
 }
 
return 0;
}