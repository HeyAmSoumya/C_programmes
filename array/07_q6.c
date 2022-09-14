#include<stdio.h>
int pos(int arr[] , int n){
    int p=0;
       for (int i = 0; i < n; i++)
       {
           if ( arr[i] > 0)
           {
            arr[i]++;
            p++;
            printf("%d this is positve number\n", p );
        
           }
           else{
            printf(" this is a negative number\n");
           }
       }
        
}
int main()
{
int a, arr[5];
printf("enter the no array that you want to see\n");
scanf("%d",&a);
printf("enter numbers\n");
for (int i = 0; i < a; i++)
{
    scanf("%d\n", &arr[i]);
}
pos(arr, a);
return 0;
}