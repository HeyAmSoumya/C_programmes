#include<stdio.h>
int pos(int *arr, int n){
    int p=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>0)
        {
            p++;
        
        }
        return p;
    }
    

}
 
int main()
{
 int a,game[3],i;
 printf("enter a no of elements\n");
 scanf("%d", &a);
 printf("enter the value: \n");
 for (int i = 1; i < a; i++)
 {
    scanf("%d\n",&game[i]);
 }

int b = sizeof(game[i])/game[0];
 pos(game,b);
printf("postive no in array is: %d\n", pos(game,b));


return 0;
}