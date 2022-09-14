#include<stdio.h>
// int main()
// {
//  int arr[]={2,5,6,8,96,-96};
//  int n;
//  n = sizeof(arr) /sizeof(arr[0]);
//  printf("the number is %d\n", n);
// return 0;
// }

#include<stdio.h>
int main()
{
 int arr[] = {1,2,5,8,7,6,9};
 int n;
 printf("enter a number\n");
 scanf("%d" , &n);
 for (int i = 0; i <n; i++)
 {
    printf("%d", arr[i]);
 }
 
return 0;
}