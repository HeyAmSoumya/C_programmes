#include<stdio.h>
int main()
{
 int arr[10] = {11,20,25,3,6,89,47,45,25,44};
 int *ptr;
 ptr = arr;
// for (int i = 0; i < 10 ; i++)
 //{
    //printf("%d\n",arr[i]);
    printf("%d\n", *(ptr+2));
    printf("%d\n", *ptr);
 //}
return 0;
}