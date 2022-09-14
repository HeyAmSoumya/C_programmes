#include<stdio.h>
void call(int *ptr, int n){
    for (int i = 0; i < n; i++)
    {
        printf("the number that you entered is %d: %d\n", i + 1, *(ptr +i ));
        
    }
    
}
int main()
{
 int arr[] = {2, 3, 5, 45 , 86, 452, 8547};
 call(arr , 7);
 return 0;
}