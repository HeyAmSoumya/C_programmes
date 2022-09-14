#include<stdio.h>
int reverse(int *arr, int x)
{
    int temp;
    for (int i = 0; i < (x/2); i++)
    {
        temp = arr[i];
        arr[i] = arr[x - i - 1];
        arr[x - i - 1] = temp;
    
    }
    
}
int main()
{
    
    int game[5];
    printf("enter a no of array: \n");
    for (int i = 0; i < 5; ++i)
    {
        scanf("%d\n",&game[i]);
    }
    reverse(game, 5);
    for (int  i = 0; i < 5; i++)
    {
        printf("the reverse of the no in order is %d: %d\n", i+1, game[i]);

    }


return 0;
}