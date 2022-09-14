#include<stdio.h>
int main()
{
 int x , reverse, sum =0;
  printf("enter the digit\n");
  scanf("%d",&x);
  int arr[x];
   printf("enter the num\n");
   scanf("%d", &arr);
   while ( arr[x] !=0)
   {
    reverse = arr[x]%10;
   sum = sum * 10 + reverse;
   arr[x] = arr[x] / 10;
   }
   
   printf("the reverse value is %d", sum);
return 0;
}